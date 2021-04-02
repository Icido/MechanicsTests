// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "YIS_ButtonActor.generated.h"

enum class ButtonType
{
	ButtonAX,
	ButtonWY,
	ButtonSA,
	ButtonDB
};

UCLASS()
class MECHANICSTESTS_API AYIS_ButtonActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AYIS_ButtonActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	ButtonType CurrentButton;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void AssignButton(ButtonType NewButtonType);

	bool CheckButtonType(ButtonType ButtonCheck) const;
};
