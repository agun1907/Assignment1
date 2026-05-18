#pragma once

#include "CoreMinimal.h"
#include "BaseShip.h"
#include "BaseEnemyShip.generated.h"

class ABaseShipAIController;

UCLASS()
class BIRDOFPREY_API ABaseEnemyShip : public ABaseShip
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    ABaseShipAIController* ShipAIController;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void Move();
};