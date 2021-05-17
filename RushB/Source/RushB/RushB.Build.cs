// @Copyright devdastour 2019 - 2021 All Right Reserved

using UnrealBuildTool;

public class RushB : ModuleRules
{
	public RushB(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "UMG" });
	}
}
