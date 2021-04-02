// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "YIS_ButtonActor.h"
#include "GameFramework/Actor.h"
#include "YIS_ButtonManager.generated.h"

UCLASS()
class MECHANICSTESTS_API AYIS_ButtonManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AYIS_ButtonManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY()
	UWorld* ThisWorld;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void CreateNewButton(ButtonType Button);

	void CheckButtonHit(ButtonType Button);

	UPROPERTY()
	TArray<AYIS_ButtonActor*> LiveButtons;

	UPROPERTY()
	int32 MaxButtons = 100;
};
