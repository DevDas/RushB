// @Copyright devdastour 2019 - 2021 All Right Reserved

#pragma once

#include "CoreMinimal.h"
#include "UMGBase.h"
#include "JoinMapUI.generated.h"

/**
 * 
 */
UCLASS()
class RUSHB_API UJoinMapUI : public UUMGBase
{
	GENERATED_BODY()

		UFUNCTION()
		void SpawnTerrorist();

	UFUNCTION()
		void SpawnCounterTerrorist();

protected:
	virtual bool Initialize() override;

	UPROPERTY(meta = (BindWidget))
		class UButton* TButton;

	UPROPERTY(meta = (BindWidget))
		class UButton* CTButton;
};
