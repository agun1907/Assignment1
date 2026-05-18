#include "BasePowerup.h"

ABasePowerup::ABasePowerup()
{
    PrimaryActorTick.bCanEverTick = true;
}

void ABasePowerup::Reset()
{
    Super::Reset();
}

void ABasePowerup::Apply()
{
}

void ABasePowerup::PlayEffects()
{
}