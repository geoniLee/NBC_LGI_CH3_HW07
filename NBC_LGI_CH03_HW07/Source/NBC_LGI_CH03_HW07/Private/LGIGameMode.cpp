// Fill out your copyright notice in the Description page of Project Settings.


#include "LGIGameMode.h"
#include "Drone.h"
#include "LGIPlayerController.h"

ALGIGameMode::ALGIGameMode()
{
	DefaultPawnClass = ADrone::StaticClass();
	PlayerControllerClass = ALGIPlayerController::StaticClass();
}
