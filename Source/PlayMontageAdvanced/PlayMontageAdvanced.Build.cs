﻿// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PlayMontageAdvanced : ModuleRules
{
	public PlayMontageAdvanced(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"GameplayAbilities", "AngelscriptGAS",
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"GameplayTasks",
				"GameplayTags",
			}
			);
	}
}
