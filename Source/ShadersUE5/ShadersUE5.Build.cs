// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ShadersUE5 : ModuleRules
{
	public ShadersUE5(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
