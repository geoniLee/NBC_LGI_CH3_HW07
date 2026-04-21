// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Drone.generated.h"

class UBoxComponent;
class USkeletalMeshComponent;
class USpringArmComponent;
class UCameraComponent;
struct FInputActionValue;

UCLASS()
class NBC_LGI_CH03_HW07_API ADrone : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ADrone();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Velocity")
	// 평면 이동속도
	float MoveSpeed;

	// 상하 이동 속도
	float HeightMoveSpeed;
	
	// 최종 가속도
	float VerticalVelocity;
	float MaxVelocity;
	
	// 지면 여부
	bool bOnGround;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components")
	UBoxComponent* BoxComp;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components")
	USkeletalMeshComponent* SMComp;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components")
	USpringArmComponent* SAComp;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components")
	UCameraComponent* CameraComp;

	UFUNCTION()
	void Move(const FInputActionValue& value);

	UFUNCTION()
	void MoveHeight(const FInputActionValue& value);

	UFUNCTION()
	void Look(const FInputActionValue& value);

	UFUNCTION()
	void Zoom(const FInputActionValue& value);

	bool CheckGround(FHitResult& Hit);
};
