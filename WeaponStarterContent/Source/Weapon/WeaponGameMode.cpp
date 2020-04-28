// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "WeaponGameMode.h"
#include "WeaponHUD.h"
#include "WeaponCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWeaponGameMode::AWeaponGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AWeaponHUD::StaticClass();
}
