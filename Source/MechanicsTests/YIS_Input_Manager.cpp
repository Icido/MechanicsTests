// Fill out your copyright notice in the Description page of Project Settings.


#include "YIS_Input_Manager.h"

// Sets default values for this component's properties
UYIS_Input_Manager::UYIS_Input_Manager()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called every frame
void UYIS_Input_Manager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

// Called when the game starts
void UYIS_Input_Manager::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


