// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE5_3P_BLerner : ModuleRules
{
	public UE5_3P_BLerner(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"UE5_3P_BLerner",
			"UE5_3P_BLerner/Variant_Platforming",
			"UE5_3P_BLerner/Variant_Platforming/Animation",
			"UE5_3P_BLerner/Variant_Combat",
			"UE5_3P_BLerner/Variant_Combat/AI",
			"UE5_3P_BLerner/Variant_Combat/Animation",
			"UE5_3P_BLerner/Variant_Combat/Gameplay",
			"UE5_3P_BLerner/Variant_Combat/Interfaces",
			"UE5_3P_BLerner/Variant_Combat/UI",
			"UE5_3P_BLerner/Variant_SideScrolling",
			"UE5_3P_BLerner/Variant_SideScrolling/AI",
			"UE5_3P_BLerner/Variant_SideScrolling/Gameplay",
			"UE5_3P_BLerner/Variant_SideScrolling/Interfaces",
			"UE5_3P_BLerner/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
