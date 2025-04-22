// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Mirco_Game_Shatter : ModuleRules
{
	public Mirco_Game_Shatter(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
