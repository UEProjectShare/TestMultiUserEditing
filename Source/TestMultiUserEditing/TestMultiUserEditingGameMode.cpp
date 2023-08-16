// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestMultiUserEditingGameMode.h"
#include "TestMultiUserEditingCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestMultiUserEditingGameMode::ATestMultiUserEditingGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
