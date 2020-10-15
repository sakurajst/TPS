// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TPS1 : ModuleRules
{
	public TPS1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
