// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CppVsBp : ModuleRules
{
	public CppVsBp(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
