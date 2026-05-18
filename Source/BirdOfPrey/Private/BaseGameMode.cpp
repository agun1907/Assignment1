#include "BaseGameMode.h"

float ABaseGameMode::GetWorldScrollVelocity()
{
    return 0.0f;
}

AActor* ABaseGameMode::GetWorldCameraActor()
{
    return nullptr;
}

void ABaseGameMode::OnPlayerDied()
{
}

void ABaseGameMode::OnEnemyDied()
{
}

FVector ABaseGameMode::GetPowerUpSpawnLocation()
{
    return FVector::ZeroVector;
}

void ABaseGameMode::StartGame()
{
}

void ABaseGameMode::EndGame()
{
}

void ABaseGameMode::SpawnEnemyFrom()
{
}

void ABaseGameMode::ResetGame()
{
}

void ABaseGameMode::RespawnPlayer()
{
}

void ABaseGameMode::TrySpawnPowerUp()
{
}

float ABaseGameMode::GetDistanceTravelled()
{
    return 0.0f;
}