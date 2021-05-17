// @Copyright devdastour 2019 - 2021 All Right Reserved

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"
#include "Components/Button.h"
#include "UMGBase.generated.h"

enum EInputMode
{
	GameOnly,

	UIOnly
};

/**
 * 
 */
UCLASS()
class RUSHB_API UUMGBase : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UFUNCTION()
		void SetupWidget();

	UFUNCTION()
		void TearDown();

	template<class T>
	T* OpenWidget(TSubclassOf<T> WBP_Class)
	{
		T* UI = CreateWidget<T>(GetWorld(), WBP_Class);
		if (UI)
		{
			UI->SetupWidget();
		}
		return UI;
	}

	void SetInputMode(APlayerController* PlayerControllerParam, EInputMode InputMode = EInputMode::GameOnly, bool ShowCrosshair = true);

private:

	void SetInputModeGameOnly(class APlayerController* PlayerController);
	void SetInputModeUIOnly(class APlayerController* PlayerController);
};
