// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE4SpawnShootC : ModuleRules
{
	public UE4SpawnShootC(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
