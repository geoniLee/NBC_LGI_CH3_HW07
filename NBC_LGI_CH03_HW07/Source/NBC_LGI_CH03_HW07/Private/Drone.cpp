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

	BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Collider"));
	SetRootComponent(BoxComp);

	SMComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletonMesh"));
	SMComp->SetupAttachment(BoxComp);

	SAComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SAComp->SetupAttachment(BoxComp);
	SAComp->TargetArmLength = 200;
	SAComp->bUsePawnControlRotation = false;

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComp->SetupAttachment(SAComp, USpringArmComponent::SocketName);
	CameraComp->bUsePawnControlRotation = false;

	MoveSpeed = 200;
}

// Called when the game starts or when spawned
void ADrone::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADrone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector LocalMove = FVector(MoveInput.Y, MoveInput.X, 0.f) * MoveSpeed * DeltaTime;
	AddActorLocalOffset(LocalMove, true);
}

// Called to bind functionality to input
void ADrone::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {
		if (ALGIPlayerController* PlayerController = Cast<ALGIPlayerController>(GetController())) {
			if (PlayerController->MoveAction) {
				EnhancedInput->BindAction(
					PlayerController->MoveAction,
					ETriggerEvent::Triggered,
					this,
					&ADrone::StartMove
				);
			}
			if (PlayerController->MoveAction) {
				EnhancedInput->BindAction(
					PlayerController->MoveAction,
					ETriggerEvent::Completed,
					this,
					&ADrone::StopMove
				);
			}
			if (PlayerController->LookAction) {
				EnhancedInput->BindAction(
					PlayerController->LookAction,
					ETriggerEvent::Triggered,
					this,
					&ADrone::Look
				);
			}
		}
	}
}

void ADrone::StartMove(const FInputActionValue& value)
{
	if (!Controller) return;

	MoveInput = value.Get<FVector2D>();
}

void ADrone::StopMove(const FInputActionValue& value)
{
	MoveInput = FVector2D::ZeroVector;
}

void ADrone::Look(const FInputActionValue& value)
{
	FVector2D LookInput = value.Get<FVector2D>();

	AddActorLocalRotation(FRotator(0, LookInput.X, 0));

	FRotator newRot = SAComp->GetRelativeRotation();
	newRot.Pitch = FMath::Clamp(newRot.Pitch + (-LookInput.Y), -80, 80);
	SAComp->SetRelativeRotation(newRot);
}

