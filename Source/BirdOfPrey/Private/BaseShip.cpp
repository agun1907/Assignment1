#include "BaseShip.h"
#include "GameFramework/FloatingPawnMovementComponent.h"

ABaseShip::ABaseShip()
{
    FloatingPawnMovement = CreateDefaultSubobject<UFloatingPawnMovementComponent>(TEXT("FloatingPawnMovement"));
}