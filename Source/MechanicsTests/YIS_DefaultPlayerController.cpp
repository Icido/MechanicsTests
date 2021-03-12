// Fill out your copyright notice in the Description page of Project Settings.


#include "YIS_DefaultPlayerController.h"

#include "YIS_DefaultHUD.h"
#include "Blueprint/UserWidget.h"
#include <Kismet/GameplayStatics.h>

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
	APlayerController* PC = UGameplayStatics::GetPlayerController( GetWorld(), 0);
	AYIS_DefaultHUD* HUD = PC->GetHUD<AYIS_DefaultHUD>();
	
	if( HUD->IsMainMenuActive() )
    {
		HUD->HideMainMenu();
    }
    else
    {
    	HUD->ShowMainMenu();
    }
    
}

