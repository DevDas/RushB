// @Copyright devdastour 2019 - 2021 All Right Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "RushBPlayerController.generated.h"

class UUMGBase;
class UJoinMapUI;

/**
 * 
 */
UCLASS()
class RUSHB_API ARushBPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	ARushBPlayerController(const FObjectInitializer& ObjectInitializer);

protected:

	virtual void BeginPlay() override;

	void SetStartScreen();

private:

	TSubclassOf<UUMGBase> JoinMapUIClass;
};
