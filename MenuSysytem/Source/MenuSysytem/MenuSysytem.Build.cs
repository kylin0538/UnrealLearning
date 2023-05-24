// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MenuSysytem : ModuleRules
{
	public MenuSysytem(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
