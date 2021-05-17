// @Copyright devdastour 2019 - 2021 All Right Reserved
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "RushBGameMode.generated.h"

UCLASS(minimalapi)
class ARushBGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ARushBGameMode();

	virtual void BeginPlay() override;
};