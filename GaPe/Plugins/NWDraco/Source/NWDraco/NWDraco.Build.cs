// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class NWDraco : ModuleRules
{
	private string ModulePath
    {
        get
        {
			return ModuleDirectory;
        }
    }

	private string ThirdPartyPath
    {
        get
        {
			return Path.GetFullPath(Path.Combine(ModulePath, "../ThirdParty"));
        }
    }

	public NWDraco(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
				Path.Combine(ThirdPartyPath, "include")
			}
			);

		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			PublicAdditionalLibraries.AddRange(
			new string[] {
						Path.Combine(ThirdPartyPath, "lib", "x64", "draco.lib"),
						//Path.Combine(ThirdPartyPath, "lib", "x64", "dracodec.lib"),
						//Path.Combine(ThirdPartyPath, "lib", "x64", "dracoenc.lib")

			}
		);
		}

		if (Target.Platform == UnrealTargetPlatform.HoloLens)
		{
			PublicAdditionalLibraries.AddRange(
			new string[] {
						Path.Combine(ThirdPartyPath, "lib", "ARM64", "draco.lib"),
						//Path.Combine(ThirdPartyPath, "lib", "ARM64", "dracodec.lib"),
						//Path.Combine(ThirdPartyPath, "lib", "ARM64", "dracoenc.lib")

			}
		);
		}


		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
