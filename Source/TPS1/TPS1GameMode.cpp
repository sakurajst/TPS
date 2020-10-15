// Copyright Epic Games, Inc. All Rights Reserved.

#include "TPS1GameMode.h"
#include "TPS1Character.h"
#include "UObject/ConstructorHelpers.h"

ATPS1GameMode::ATPS1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
