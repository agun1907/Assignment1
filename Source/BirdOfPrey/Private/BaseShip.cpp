#include "BaseShip.h"
#include "GameFramework/FloatingPawnMovement.h"

ABaseShip::ABaseShip()
{
    FloatingPawnMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("FloatingPawnMovement"));
}