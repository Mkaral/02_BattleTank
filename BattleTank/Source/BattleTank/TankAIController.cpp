// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	if (GetControlledTank())
		UE_LOG(LogTemp, Warning, TEXT("TankAiController achou o seu tanque, seu nome �: %s"), *GetControlledTank()->GetName())

	else
		UE_LOG(LogTemp, Warning, TEXT("TankAiController n�o achou o tanque"));

	if (GetPlayerTank())
		UE_LOG(LogTemp, Warning, TEXT("TankAiController achou o jogador, seu nome �: %s"), *GetPlayerTank()->GetName())

	else
		UE_LOG(LogTemp, Warning, TEXT("TankAiController n�o achou o jogador."))

}

ATank * ATankAIController::GetControlledTank()
{
	return Cast<ATank>(GetPawn());
}

ATank * ATankAIController::GetPlayerTank()
{
	return Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
}
