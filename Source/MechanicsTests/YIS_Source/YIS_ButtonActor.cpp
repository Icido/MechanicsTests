// Fill out your copyright notice in the Description page of Project Settings.


#include "YIS_ButtonActor.h"

// Sets default values
AYIS_ButtonActor::AYIS_ButtonActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AYIS_ButtonActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AYIS_ButtonActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AYIS_ButtonActor::AssignButton(ButtonType NewButtonType)
{
	CurrentButton = NewButtonType;
}

bool AYIS_ButtonActor::CheckButtonType(ButtonType ButtonCheck) const
{
	return CurrentButton == ButtonCheck;
}

