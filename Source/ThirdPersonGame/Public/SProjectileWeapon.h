// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ASWeapon.h"
#include "SProjectileWeapon.generated.h"

/**
 * 
 */
UCLASS()
class THIRDPERSONGAME_API ASProjectileWeapon : public AASWeapon
{
	GENERATED_BODY()
	
	
protected:
	virtual void Fire();
	
	UPROPERTY(EditDefaultsOnly, Category = "ProjectileWeapon")
	TSubclassOf<AActor> ProjectileClass;
};
