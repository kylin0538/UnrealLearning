// Copyright Epic Games, Inc. All Rights Reserved.

#include "MenuSysytemGameMode.h"
#include "MenuSysytemCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMenuSysytemGameMode::AMenuSysytemGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
