// Copyright Epic Games, Inc. All Rights Reserved.

#include "BattleParentController.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "BattleParent.h"
#include "Engine/World.h"

BattleParentController::BattleParentController()
{
	bShowMouseCursor = true;
	
}

void BattleParentController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);
	
}

void BattleParentController::SetupInputComponent()
{
	
	
}
