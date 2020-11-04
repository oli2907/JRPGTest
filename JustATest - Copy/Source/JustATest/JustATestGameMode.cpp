// Copyright Epic Games, Inc. All Rights Reserved.

# include "GameFramework/PlayerController.h"
#include "JustATestGameMode.h"
#include "BattleParentController.h"
#include "BattleParent.h"
#include "UObject/ConstructorHelpers.h"

AJustATestGameMode::AJustATestGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = BattleParentController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	
}