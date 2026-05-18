#include "ProjectileWeapon.h"

void AProjectileWeapon::SpawnProjectile()
{
}

FTransform AProjectileWeapon::GetProjectileSpawnTransform()
{
    return FTransform::Identity;
}

bool AProjectileWeapon::ReadyToFire()
{
    return false;
}

bool AProjectileWeapon::IsFiring()
{
    return false;
}