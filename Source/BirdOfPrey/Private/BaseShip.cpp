#include "BaseShip.h"

ABaseShip::ABaseShip()
{
    FloatingPawnMovement = CreateDefaultSubobject<UFloatingPawnMovementComponent>(TEXT("FloatingPawnMovement"));
}