// @Copyright devdastour 2019 - 2021 All Right Reserved

using UnrealBuildTool;
using System.Collections.Generic;

public class RushBEditorTarget : TargetRules
{
	public RushBEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("RushB");
	}
}
