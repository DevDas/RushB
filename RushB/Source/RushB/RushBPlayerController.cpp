// @Copyright devdastour 2019 - 2021 All Right Reserved


#include "RushBPlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"
#include "UMG/UMGBase.h"

ARushBPlayerController::ARushBPlayerController(const FObjectInitializer& ObjectInitializer)
{
	ConstructorHelpers::FClassFinder<UUMGBase> JoinMapUI(TEXT("/Game/UI/WBP_JoinMapUI"));
	if (!JoinMapUI.Class) return;
	JoinMapUIClass = JoinMapUI.Class;
}

void ARushBPlayerController::BeginPlay()
{
	SetStartScreen();
}

void ARushBPlayerController::SetStartScreen()
{
	if (!UKismetSystemLibrary::IsServer(GetWorld()) && IsLocalPlayerController())
	{
		TArray<AActor*> Cameras;
		UGameplayStatics::GetAllActorsWithTag(GetWorld(), FName("Camera"), Cameras);
		if (Cameras.Num() > 0 && Cameras[0])
		{
			SetViewTargetWithBlend(Cameras[0]);
		}
		UUMGBase* JoinMapUI = CreateWidget<UUMGBase>(this, JoinMapUIClass);
		if (JoinMapUI)
		{
			JoinMapUI->SetupWidget();
			JoinMapUI->SetInputMode(this, EInputMode::UIOnly, true);
		}
	}
}