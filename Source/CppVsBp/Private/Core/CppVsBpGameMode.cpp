// Copyright Epic Games, Inc. All Rights Reserved.

#include "Core/CppVsBpGameMode.h"
#include "Core/CppVsBpCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACppVsBpGameMode::ACppVsBpGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(
		TEXT("/Game/CppVsBp/Blueprints/Core/BP_CppVsBpCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
