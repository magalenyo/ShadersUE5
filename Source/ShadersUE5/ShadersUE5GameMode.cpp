// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShadersUE5GameMode.h"
#include "ShadersUE5Character.h"
#include "UObject/ConstructorHelpers.h"

AShadersUE5GameMode::AShadersUE5GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
