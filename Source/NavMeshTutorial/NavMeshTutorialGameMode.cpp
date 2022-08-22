// Copyright Epic Games, Inc. All Rights Reserved.

#include "NavMeshTutorialGameMode.h"
#include "NavMeshTutorialCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANavMeshTutorialGameMode::ANavMeshTutorialGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
