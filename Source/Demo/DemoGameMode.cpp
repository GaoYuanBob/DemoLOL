// Copyright Epic Games, Inc. All Rights Reserved.

#include "DemoGameMode.h"
#include "DemoPlayerController.h"
#include "DemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADemoGameMode::ADemoGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ADemoPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}