// Fill out your copyright notice in the Description page of Project Settings.


#include "Drone.h"
#include "Components/BoxComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "EnhancedInputComponent.h"
#include "LGIPlayerController.h"

// Sets default values
ADrone::ADrone()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// BoxComponent
	BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Collider"));
	SetRootComponent(BoxComp);

	// SkeletonMesh
	SMComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletonMesh"));
	SMComp->SetupAttachment(BoxComp);

	// SpringArm
	SAComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SAComp->SetupAttachment(BoxComp);
	SAComp->TargetArmLength = 200;
	SAComp->bUsePawnControlRotation = false;

	// Camera
	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComp->SetupAttachment(SAComp, USpringArmComponent::SocketName);
	CameraComp->bUsePawnControlRotation = false;

	// 이동 속도 관련 값 초기화
	MoveSpeed = 500;
	HeightMoveSpeed = 1800;
	VerticalVelocity = 0;
	MaxVelocity = 1000;

	// 지면 체크
	bOnGround = false;
}

void ADrone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FHitResult GroundHit;
	// 지면에 닿았는지 검사
	bOnGround = CheckGround(GroundHit);

	if (!bOnGround) {
		// 가속도 -> 속도 전환하며 누적 합산
		VerticalVelocity += -980 * DeltaTime;
		VerticalVelocity = FMath::Clamp(VerticalVelocity, -MaxVelocity * 2, MaxVelocity);
	}
	else if (VerticalVelocity < 0) {
		VerticalVelocity = 0;

		// 바닥과 Actor의 최하단 좌표
		float BoxHalfHeight = BoxComp->GetScaledBoxExtent().Z;
		float BottomZ = GetActorLocation().Z - BoxHalfHeight;
		float GroundZ = GroundHit.ImpactPoint.Z	;

		// Actor가 바닥에 들어갔을 때 보정
		if (BottomZ < GroundZ) {
			float Correction = GroundZ - BottomZ;
			AddActorWorldOffset(FVector(0, 0, Correction));
		}
	}

	// 계산한 속도 적용
	AddActorLocalOffset(FVector(0,0,VerticalVelocity) * DeltaTime, true);
}

// Called to bind functionality to input
void ADrone::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {
		if (ALGIPlayerController* PlayerController = Cast<ALGIPlayerController>(GetController())) {
			// 지면 이동
			if (PlayerController->MoveAction) {
				EnhancedInput->BindAction(
					PlayerController->MoveAction,
					ETriggerEvent::Triggered,
					this,
					&ADrone::Move
				);
			}
			// 상/하 이동
			if (PlayerController->MoveHeightAction) {
				EnhancedInput->BindAction(
					PlayerController->MoveHeightAction,
					ETriggerEvent::Triggered,
					this,
					&ADrone::MoveHeight
				);
			}
			// 시야
			if (PlayerController->LookAction) {
				EnhancedInput->BindAction(
					PlayerController->LookAction,
					ETriggerEvent::Triggered,
					this,
					&ADrone::Look
				);
			}
			// 줌
			if (PlayerController->ZoomAction) {
				EnhancedInput->BindAction(
					PlayerController->ZoomAction,
					ETriggerEvent::Triggered,
					this,
					&ADrone::Zoom
				);
			}
		}
	}
}

void ADrone::Move(const FInputActionValue& value)
{
	if (!Controller) return;

	FVector2D MoveInput = value.Get<FVector2D>();

	// Z 값은 반영하지 않고 DeltaTime 적용해서 이동값 산출
	FVector LocalMove = FVector(-MoveInput.Y, MoveInput.X, 0.f) * MoveSpeed * GetWorld()->GetDeltaSeconds();
	// 지상
	if (!bOnGround) {
		AddActorLocalOffset(LocalMove * 0.5f, true);
	}
	// 공중
	else {
		AddActorLocalOffset(LocalMove, true);
	}


}

void ADrone::MoveHeight(const FInputActionValue& value)
{
	float HeightInput = value.Get<float>();

	// 입력 값을 Tick에서 적용시킬 Z 속도에 반영
	VerticalVelocity += HeightInput * HeightMoveSpeed * GetWorld()->GetDeltaSeconds();
}

void ADrone::Look(const FInputActionValue& value)
{
	FVector2D LookInput = value.Get<FVector2D>();

	// Actor는 좌우로만 회전
	AddActorLocalRotation(FRotator(0, LookInput.X, 0));

	// SpringArm은 좌우 회전 + 상하 회전 반영
	FRotator newRot = SAComp->GetRelativeRotation();
	newRot.Pitch = FMath::Clamp(newRot.Pitch + (-LookInput.Y), -80, 80);
	SAComp->SetRelativeRotation(newRot);
}

void ADrone::Zoom(const FInputActionValue& value)
{
	float Zoominput = value.Get<float>();

	float ZoomStep = 25;
	float MinSA = 100;
	float MaxSA = 500;

	// 변경할 SpringArm의 거리
	float NewArmLength = FMath::Clamp(
		SAComp->TargetArmLength - Zoominput * ZoomStep,
		MinSA,
		MaxSA
	);

	SAComp->TargetArmLength = NewArmLength;
}

bool ADrone::CheckGround(FHitResult& Hit)
{
	// 바닥에 닿는 부분(Collider의 하단)
	FVector Start = BoxComp->GetComponentLocation();
	float BoxHalfHeight = BoxComp->GetScaledBoxExtent().Z;
	FVector End = Start - FVector(0, 0, BoxHalfHeight);

	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);

	// Line을 쏴서 바닥에 닿았는지 검사
	bool bHit = GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, Params);

	return bHit && Hit.IsValidBlockingHit();
}

