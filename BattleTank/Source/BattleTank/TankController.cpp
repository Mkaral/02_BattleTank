// Fill out your copyright notice in the Description page of Project Settings.

#include "TankController.h"

void ATankController::BeginPlay()
{
	Super::BeginPlay();

	if (GetControlledTank())
		UE_LOG(LogTemp, Warning, TEXT("TankController achou o jogador, seu nome é: %s"), *GetControlledTank()->GetName())

	else
		UE_LOG(LogTemp, Warning, TEXT("TankController não achou o jogador"));

}

ATank * ATankController::GetControlledTank()
{
	return Cast<ATank>(GetPawn());
}
