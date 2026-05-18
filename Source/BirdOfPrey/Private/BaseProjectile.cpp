#include "BaseProjectile.h"

void ABaseProjectile::InitialiseProjectile()
{
}

FVector ABaseProjectile::GetInitialVelocity()
{
    return FVector::ZeroVector;
}

void ABaseProjectile::DealDamageTo(AActor* TargetActor)
{
}

void ABaseProjectile::OnHit()
{
}

TEnumAsByte<ECollisionChannel> ABaseProjectile::GetInstigatorCollisionChannel()
{
    return ECC_WorldStatic;
}

void ABaseProjectile::CheckForGroundUnitTarget()
{
}

bool ABaseProjectile::ShouldCheckForGroundTarget()
{
    return false;
}

void ABaseProjectile::AdjustToTarget()
{
}

bool ABaseProjectile::IsEnemyProjectile()
{
    return false;
}

void ABaseProjectile::AdjustToDesiredZ()
{
}