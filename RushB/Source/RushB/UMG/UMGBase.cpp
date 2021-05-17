// @Copyright devdastour 2019 - 2021 All Right Reserved


#include "UMGBase.h"

void UUMGBase::SetupWidget()
{
	this->AddToViewport();
}

void UUMGBase::TearDown()
{
	this->RemoveFromParent();
}

void UUMGBase::SetInputMode(APlayerController* PlayerControllerParam, EInputMode InputMode, bool ShowCrosshair)
{
	APlayerController* PlayerController{ PlayerControllerParam };
	if (!PlayerController)
	{
		UWorld* World = GetWorld();
		if (!World) return;
		PlayerController = World->GetFirstPlayerController();
	}

	switch (InputMode)
	{
	case GameOnly:	SetInputModeGameOnly(PlayerController);
		break;
	case UIOnly:	SetInputModeUIOnly(PlayerController);
		break;
	}

	PlayerController->bShowMouseCursor = ShowCrosshair;
}

void UUMGBase::SetInputModeGameOnly(APlayerController* PlayerController)
{
	FInputModeGameOnly InputModeData;
	PlayerController->SetInputMode(InputModeData);
}

void UUMGBase::SetInputModeUIOnly(APlayerController* PlayerController)
{
	FInputModeUIOnly InputModeData;
	InputModeData.SetWidgetToFocus(this->TakeWidget()); // SetWidgetToFocus(it needs SWidget) // TakeWidget() is SWidget
	InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	PlayerController->SetInputMode(InputModeData);
}