// Fill out your copyright notice in the Description page of Project Settings.


#include "YIS_DefaultPlayerController.h"

#include "YIS_DefaultHUD.h"

// Called to bind functionality to input
void AYIS_DefaultPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	if(InputComponent)
	{
		InputComponent->BindAction
		(
	        "Pause",
	        IE_Pressed,
	        this,
			&AYIS_DefaultPlayerController::PauseMenu
		);
	}
}

void AYIS_DefaultPlayerController::PauseMenu()
{
	AYIS_DefaultHUD* HUD = this->GetHUD<AYIS_DefaultHUD>();
	
	HUD->ShowHideMainMenu();
}
