// Copyright Epic Games, Inc. All Rights Reserved.

#include "Mirco_Game_ShatterGameMode.h"
#include "Mirco_Game_ShatterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMirco_Game_ShatterGameMode::AMirco_Game_ShatterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
