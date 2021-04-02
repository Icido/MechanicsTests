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
		
		InputComponent->BindAction("DebugStartOne", IE_Pressed, this, &AYIS_DefaultPawn::DebugStartOne);
		InputComponent->BindAction("DebugStartTwo", IE_Pressed, this, &AYIS_DefaultPawn::DebugStartTwo);
		InputComponent->BindAction("DebugStartThree", IE_Pressed, this, &AYIS_DefaultPawn::DebugStartThree);
		InputComponent->BindAction("DebugStartFour", IE_Pressed, this, &AYIS_DefaultPawn::DebugStartFour);
	}

	FVector Location(0.0f, 0.0f, 0.0f);
	FRotator Rotation(0.0f, 0.0f, 0.0f);
	FActorSpawnParameters SpawnInfo;
	BManager = GetWorld()->SpawnActor<AYIS_ButtonManager>(Location, Rotation, SpawnInfo);
}

void AYIS_DefaultPawn::DanceMoveOne()
{
	BManager->CheckButtonHit(ButtonType::ButtonAX);
}

void AYIS_DefaultPawn::DanceMoveTwo()
{
	BManager->CheckButtonHit(ButtonType::ButtonWY);
}

void AYIS_DefaultPawn::DanceMoveThree()
{
	BManager->CheckButtonHit(ButtonType::ButtonSA);
}

void AYIS_DefaultPawn::DanceMoveFour()
{
	BManager->CheckButtonHit(ButtonType::ButtonDB);
}

void AYIS_DefaultPawn::DebugStartOne()
{
	BManager->CreateNewButton(ButtonType::ButtonAX);
}

void AYIS_DefaultPawn::DebugStartTwo()
{
	BManager->CreateNewButton(ButtonType::ButtonWY);
}

void AYIS_DefaultPawn::DebugStartThree()
{
	BManager->CreateNewButton(ButtonType::ButtonSA);
}

void AYIS_DefaultPawn::DebugStartFour()
{
	BManager->CreateNewButton(ButtonType::ButtonDB);
}


