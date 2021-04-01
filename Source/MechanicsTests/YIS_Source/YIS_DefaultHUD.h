// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "YIS_DefaultHUD.generated.h"

UCLASS( Abstract )
class MECHANICSTESTS_API AYIS_DefaultHUD : public AHUD
{
	GENERATED_BODY()

public:
	// Make BlueprintCallable for testing
	UFUNCTION( BlueprintCallable )
		void ShowMainMenu();
	UFUNCTION( BlueprintCallable )
		void HideMainMenu();

	UFUNCTION( BlueprintCallable )
		bool IsMainMenuActive() const;

protected:
	UPROPERTY( EditDefaultsOnly )
		TSubclassOf<class UUserWidget> MainMenuClass;

	//Keep a pointer to be able to hide it
	UPROPERTY()
		class UUserWidget* MainMenu;
 
 	TArray<class UUserWidget*> PageStack;
};
