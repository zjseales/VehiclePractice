// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Defeaturing : ModuleRules
{
	public Defeaturing(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
