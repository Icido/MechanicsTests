// Fill out your copyright notice in the Description page of Project Settings.


#include "YIS_DefaultHUD.h"
#include <GameFramework/PlayerController.h>
#include <Blueprint/UserWidget.h>
//#include <Kismet/GameplayStatics.h>


void AYIS_DefaultHUD::ShowHideMainMenu(/*AYIS_DefaultPlayerController* PC*/)
{
	if( MainMenu )
	{
		HideMainMenu();
	}
	else
	{
		ShowMainMenu(/*PC*/);
	}
}

void AYIS_DefaultHUD::ShowMainMenu(/*AYIS_DefaultPlayerController* PC*/)
{
	// Make widget owned by our PlayerController
	APlayerController* PC = Cast<APlayerController> ( GetOwner() );
	MainMenu = CreateWidget<UUserWidget>( PC, MainMenuClass ); // Issue with build
	
	MainMenu->AddToViewport();
}

void AYIS_DefaultHUD::HideMainMenu()
{
	MainMenu->RemoveFromViewport();
	MainMenu = nullptr;
}

