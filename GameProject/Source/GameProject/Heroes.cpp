// Fill out your copyright notice in the Description page of Project Settings.

#include "Heroes.h"


// Sets default values
AHeroes::AHeroes()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHeroes::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHeroes::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AHeroes::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

