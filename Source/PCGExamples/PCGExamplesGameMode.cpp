// Copyright Epic Games, Inc. All Rights Reserved.

#include "PCGExamplesGameMode.h"
#include "PCGExamplesCharacter.h"
#include "UObject/ConstructorHelpers.h"

APCGExamplesGameMode::APCGExamplesGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
