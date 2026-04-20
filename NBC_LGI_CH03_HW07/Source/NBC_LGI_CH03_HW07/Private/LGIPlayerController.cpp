// Fill out your copyright notice in the Description page of Project Settings.


#include "LGIPlayerController.h"
#include "EnhancedInputSubsystems.h"

ALGIPlayerController::ALGIPlayerController()
	:IMContext(nullptr),
	MoveAction(nullptr),
	LookAction(nullptr)
{
	
}

void ALGIPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (ULocalPlayer* LocalPlayer = GetLocalPlayer()) {
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = 
			LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>()) 
		{
			if (IMContext) {
				Subsystem->AddMappingContext(IMContext, 0);
			}
		}
	}
}
