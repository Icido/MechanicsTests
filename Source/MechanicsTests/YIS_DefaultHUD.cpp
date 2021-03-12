// Fill out your copyright notice in the Description page of Project Settings.


#include "YIS_DefaultHUD.h"
#include <GameFramework/PlayerController.h>
#include <Blueprint/UserWidget.h>
#include <Kismet/GameplayStatics.h>

void AYIS_DefaultHUD::ShowMainMenu()
{
	// Make widget owned by our PlayerController
	APlayerController* PC = Cast<APlayerController>( GetOwner() );
	MainMenu = CreateWidget<UUserWidget>( PC, MainMenuClass );

	MainMenu->AddToViewport();
}

void AYIS_DefaultHUD::HideMainMenu()
{
	//UGameplayStatics::GetPlayerController( GetWorld(), 0 )->GetHUD<AYIS_DefaultHUD>();

	if(MainMenu)
	{
		MainMenu->RemoveFromViewport();
		MainMenu = nullptr;
	}
}

bool AYIS_DefaultHUD::IsMainMenuActive() const
{
	if(MainMenu)
		return true;
	
	return false;
}



