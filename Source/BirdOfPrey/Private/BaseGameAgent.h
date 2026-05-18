#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BaseGameInstance.h"
#include "Engine/EngineTypes.h"
#include "BaseGameAgent.generated.h"

class ABaseWeapon;

UCLASS()
class BIRDOFPREY_API ABaseGameAgent : public APawn
{
    GENERATED_BODY()

public:
    ABaseGameAgent();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
    virtual void Reset() override;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float MoveSpeed;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    ABaseWeapon* Weapon;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    TSubclassOf<ABaseWeapon> DefaultWeaponType;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float Health;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    FSAgentInfo AgentInfo;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float Points;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    bool bCheckForOutOfBounds;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float OutOfBoundsCheckTolerance;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    FName WeaponSocketName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    EAttachmentRule WeaponAttachRule;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    FVector TargetLocation;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void ChangeWeaponType();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    FTransform GetWeaponSpawnTransform();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void SpawnDefaultWeapon();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void StartFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void StopFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void TakeDamage();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool IsAlive();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void Died();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void PlayHitEffects();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void CleanUp();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void ApplyAgentInfo();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void AimAt();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void PlayDeathEffects();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void CheckForOutOfBounds();
};