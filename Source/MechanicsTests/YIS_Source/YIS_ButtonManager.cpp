// Fill out your copyright notice in the Description page of Project Settings.


#include "YIS_ButtonManager.h"
#include "YIS_ButtonActor.h"

// Sets default values
AYIS_ButtonManager::AYIS_ButtonManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AYIS_ButtonManager::BeginPlay()
{
	Super::BeginPlay();
	ThisWorld = GetWorld();
}

// Called every frame
void AYIS_ButtonManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AYIS_ButtonManager::CreateNewButton(ButtonType Button)
{
	if(LiveButtons.Num() >= MaxButtons)
	{
		UE_LOG(LogTemp, Warning, TEXT("Number of live buttons exceeds limit of %i."), MaxButtons);
		return;
	}
	
	AYIS_ButtonActor* NewButton = ThisWorld->SpawnActor<AYIS_ButtonActor>();
	NewButton->AssignButton(Button);
	LiveButtons.Push(NewButton);
	
}

void AYIS_ButtonManager::CheckButtonHit(ButtonType Button)
{
	const int32 ItemIndex = LiveButtons.IndexOfByPredicate([&Button](const AYIS_ButtonActor* InButton)
	{
		return InButton->CheckButtonType(Button);
	});
	
	if(ItemIndex != INDEX_NONE)
	{
		//Swap with last element, remove, don't change allocation.
		UE_LOG(LogTemp, Warning, TEXT("Number of live buttons before: %i."), LiveButtons.Num());
		LiveButtons[ItemIndex]->Destroy();
		LiveButtons.RemoveAtSwap(ItemIndex, 1, false);
		UE_LOG(LogTemp, Warning, TEXT("Number of live buttons after: %i."), LiveButtons.Num());
		return;
	}
	
	UE_LOG(LogTemp, Warning, TEXT("No button found!"));
}

