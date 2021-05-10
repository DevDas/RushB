// Copyright Epic Games, Inc. All Rights Reserved.

#include "RushBGameMode.h"
#include "RushBCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARushBGameMode::ARushBGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
