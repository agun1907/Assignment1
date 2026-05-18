#include "PlayerShip.h"

FVector APlayerShip::GetShipConstantVelocity()
{
    return FVector::ZeroVector;
}

void APlayerShip::ClampToCameraBounds()
{
}

float APlayerShip::GetShipAxisAdjustment()
{
    return 0.0f;
}

FVector APlayerShip::CalcOutOfBoundsAdjustment()
{
    return FVector::ZeroVector;
}

FSAgentInfo APlayerShip::GetPlayerAgentInfo()
{
    return FSAgentInfo();
}

bool APlayerShip::ShouldSpawnAIController()
{
    return false;
}

void APlayerShip::UpdateHoverPitch()
{
}

bool APlayerShip::HasDiedRecently()
{
    return false;
}