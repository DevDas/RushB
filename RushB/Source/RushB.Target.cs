// @Copyright devdastour 2019 - 2021 All Right Reserved

using UnrealBuildTool;
using System.Collections.Generic;

public class RushBTarget : TargetRules
{
	public RushBTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("RushB");
	}
}
