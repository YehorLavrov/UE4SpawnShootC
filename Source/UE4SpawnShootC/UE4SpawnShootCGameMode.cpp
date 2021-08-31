// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE4SpawnShootCGameMode.h"
#include "UE4SpawnShootCHUD.h"
#include "UE4SpawnShootCCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE4SpawnShootCGameMode::AUE4SpawnShootCGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUE4SpawnShootCHUD::StaticClass();
}
