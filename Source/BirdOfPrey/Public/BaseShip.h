#pragma once

#include "CoreMinimal.h"
#include "BaseGameAgent.h"
#include "GameFramework/FloatingPawnMovementComponent.h"
#include "BaseShip.generated.h"

UCLASS()
class BIRDOFPREY_API ABaseShip : public ABaseGameAgent
{
    GENERATED_BODY()

public:
    ABaseShip();

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    UFloatingPawnMovementComponent* FloatingPawnMovement;
};
