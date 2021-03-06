// Fill out your copyright notice in the Description page of Project Settings.


#include "YIS_DefaultPawn.h"

// Sets default values
AYIS_DefaultPawn::AYIS_DefaultPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set this pawn to be controlled by the lowest-numbered player
	AutoPossessPlayer = EAutoReceiveInput::Player0;

}

// Called when the game starts or when spawned
void AYIS_DefaultPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AYIS_DefaultPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AYIS_DefaultPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if(InputComponent)
	{
		InputComponent->BindAction("DanceMoveOne", IE_Pressed, this, &AYIS_DefaultPawn::DanceMoveOne);
		InputComponent->BindAction("DanceMoveTwo", IE_Pressed, this, &AYIS_DefaultPawn::DanceMoveTwo);
		InputComponent->BindAction("DanceMoveThree", IE_Pressed, this, &AYIS_DefaultPawn::DanceMoveThree);
		InputComponent->BindAction("DanceMoveFour", IE_Pressed, this, &AYIS_DefaultPawn::DanceMoveFour);
	}
}

void AYIS_DefaultPawn::DanceMoveOne()
{
}

void AYIS_DefaultPawn::DanceMoveTwo()
{
}

void AYIS_DefaultPawn::DanceMoveThree()
{
}

void AYIS_DefaultPawn::DanceMoveFour()
{
}


