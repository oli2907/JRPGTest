// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BattleParent.generated.h"

UCLASS()
class JUSTATEST_API ABattleParent : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABattleParent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	enum Alliance {Player, Ally, Enemy};

	int Health, Speed, Effort, Atk_Damage, Mgk_Damage, Defence, Resistance;
	
	static char Name[12];

};
