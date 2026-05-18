#pragma once

#include "CoreMinimal.h"
#include "BaseGameAgent.h"
#include "BaseShip.generated.h"

class UFloatingPawnMovement;

UCLASS()
class BIRDOFPREY_API ABaseShip : public ABaseGameAgent
{
    GENERATED_BODY()

public:
    ABaseShip();

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
        UFloatingPawnMovement* FloatingPawnMovement;
};