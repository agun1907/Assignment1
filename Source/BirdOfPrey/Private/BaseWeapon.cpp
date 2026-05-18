#include "BaseWeapon.h"

ABaseWeapon::ABaseWeapon()
{
    PrimaryActorTick.bCanEverTick = true;
}

void ABaseWeapon::StartFire()
{
}

void ABaseWeapon::StopFire()
{
}

void ABaseWeapon::PlayFireEffects()
{
}

FTransform ABaseWeapon::GetFireEffectSpawnTransform()
{
    return FTransform::Identity;
}

bool ABaseWeapon::HasFinishedFiring()
{
    return false;
}

bool ABaseWeapon::IsFiring()
{
    return false;
}