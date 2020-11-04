// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "JustATestGameMode.generated.h"

UCLASS(minimalapi)
class AJustATestGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AJustATestGameMode();

private: 
	int TurnOrder[8];
	bool TakenTurn, ExtraTurn;

};



