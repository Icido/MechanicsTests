// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
class AYIS_DefaultPlayerController;
#include "CoreMinimal.h"

#include "GameFramework/HUD.h"
#include "YIS_DefaultHUD.generated.h"

UCLASS( Abstract )
class MECHANICSTESTS_API AYIS_DefaultHUD : public AHUD
{
	GENERATED_BODY()
public:
	UFUNCTION( BlueprintCallable )
		void ShowHideMainMenu(/*AYIS_DefaultPlayerController* PC*/);
private:
 	// Make BlueprintCallable for testing
 	UFUNCTION( BlueprintCallable )
 		void ShowMainMenu(/*AYIS_DefaultPlayerController* PC*/);
 	UFUNCTION( BlueprintCallable )
 		void HideMainMenu();

protected:
 	UPROPERTY( EditDefaultsOnly )
 		TSubclassOf<class UUserWidget> MainMenuClass;
 
 	// Keep a pointer to be able to hide it
 	UPROPERTY()
 		class UUserWidget* MainMenu;
 
 	TArray<class UUserWidget*> PageStack;
};
