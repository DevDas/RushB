// @Copyright devdastour 2019 - 2021 All Right Reserved


#include "JoinMapUI.h"


bool UJoinMapUI::Initialize()
{
	bool bSuccess = Super::Initialize();
	if (!bSuccess) return false;

	if (!TButton) return false;
	TButton->OnClicked.AddDynamic(this, &UJoinMapUI::SpawnTerrorist);

	if (!CTButton) return false;
	CTButton->OnClicked.AddDynamic(this, &UJoinMapUI::SpawnCounterTerrorist);

	return true;
}

void UJoinMapUI::SpawnTerrorist()
{
	UE_LOG(LogTemp, Warning, TEXT("T Working"))
}

void UJoinMapUI::SpawnCounterTerrorist()
{
	UE_LOG(LogTemp, Warning, TEXT("CT Working"))
}