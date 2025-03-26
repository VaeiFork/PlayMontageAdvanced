// Copyright (c) Jared Taylor. All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PlayMontageAdvancedTypes.h"
#include "Components/ActorComponent.h"
#include "PlayMontageByTagComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class PLAYMONTAGEADVANCED_API UPlayMontageByTagComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Montage)
	TMap<FGameplayTag, FMontageAdvancedParams> MontageMap;

	UFUNCTION(BlueprintNativeEvent, Category=Montage)
	bool GetAbilityMontagesByTag(const FGameplayTag& MontageTag, FMontageAdvancedParams& MontageParams) const;
	virtual bool GetAbilityMontagesByTag_Implementation(const FGameplayTag& MontageTag, FMontageAdvancedParams& MontageParams) const
	{
		if (MontageMap.Contains(MontageTag))
		{
			MontageParams = MontageMap[MontageTag];
			return true;
		}
		return false;
	}
};
