// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"

#include "YIS_DefaultPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class MECHANICSTESTS_API AYIS_DefaultPlayerController : public APlayerController
{
	GENERATED_BODY()

private:
	virtual void SetupInputComponent() override;
	UFUNCTION()
	void PauseMenu();
	
};
