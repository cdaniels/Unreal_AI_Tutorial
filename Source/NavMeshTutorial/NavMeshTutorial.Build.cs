// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class NavMeshTutorial : ModuleRules
{
	public NavMeshTutorial(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
