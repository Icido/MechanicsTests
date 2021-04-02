// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "YIS_ButtonManager.h"

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "YIS_DefaultPawn.generated.h"

UCLASS()
class MECHANICSTESTS_API AYIS_DefaultPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AYIS_DefaultPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere)
	USceneComponent* OurVisibleComponent;

	UPROPERTY(EditAnywhere)
	AYIS_ButtonManager* BManager;

	void DanceMoveOne();
	void DanceMoveTwo();
	void DanceMoveThree();
	void DanceMoveFour();

	void DebugStartOne();
	void DebugStartTwo();
	void DebugStartThree();
	void DebugStartFour();

	
};
