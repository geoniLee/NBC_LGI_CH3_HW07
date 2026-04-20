// Fill out your copyright notice in the Description page of Project Settings.


#include "LGIGameMode.h"
#include "Drone.h"

ALGIGameMode::ALGIGameMode()
{
	DefaultPawnClass = ADrone::StaticClass();
}
