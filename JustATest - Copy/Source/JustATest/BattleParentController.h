// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "JustATestPlayerController.generated.h"

UCLASS()
class AJustATestPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AJustATestPlayerController();

protected:


	// Begin PlayerController interface
	virtual void PlayerTick(float DeltaTime) override;
	virtual void SetupInputComponent() override;
	// End PlayerController interface

};


