// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System;
using System.IO;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

public class PointCloud : ModuleRules
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
			return Path.GetFullPath(Path.Combine(ModulePath, "../../Plugins/NWDraco/Source/ThirdParty"));
		}
	}

	private string PluginPath
	{
		get
		{
			return Path.GetFullPath(Path.Combine(ModulePath, "../../Plugins"));
		}
	}

	private void SafeCopy(string source, string destination)
	{
		if (!File.Exists(source))
		{
			Console.WriteLine("Class {0} can't find {1} file for copying", this.GetType().Name, source);
			return;
		}

		try
		{
			File.Copy(source, destination, true);
		}
		catch (IOException ex)
		{
			Console.WriteLine("Failed to copy {0} to {1} with exception: {2}", source, destination, ex.Message);
			if (!File.Exists(destination))
			{
				Console.WriteLine("Destination file {0} does not exist", destination);
				return;
			}

			Console.WriteLine("Destination file {0} already existed and is probably in use.  The old file will be used for the runtime dependency.  This may happen when packaging a Win64 exe from the editor.", destination);
		}
	}

	public PointCloud(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "Sockets", "Networking", "NWDraco", "EyeTracker", "HeadMountedDisplay", });

		PrivateDependencyModuleNames.AddRange(new string[] {  });
		AddEngineThirdPartyPrivateStaticDependencies(Target, "Eigen");
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

		//// WinRT with Nuget support
		//if (Target.Platform == UnrealTargetPlatform.Win64 || Target.Platform == UnrealTargetPlatform.HoloLens)
		//{
		//	// these parameters mandatory for winrt support
		//	bEnableExceptions = true;
		//	bUseUnity = false;
		//	CppStandard = CppStandardVersion.Cpp17;
		//	PublicSystemLibraries.AddRange(new string[] { "shlwapi.lib", "runtimeobject.lib" });

		//	// prepare everything for nuget
		//	string MyModuleName = GetType().Name;
		//	string NugetFolder = Path.Combine(PluginPath, "Intermediate", "Nuget", MyModuleName);
		//	Directory.CreateDirectory(NugetFolder);

		//	string BinariesSubFolder = Path.Combine("Binaries", "ThirdParty", Target.Type.ToString(), Target.Platform.ToString(), Target.Architecture);

		//	PrivateDefinitions.Add(string.Format("THIRDPARTY_BINARY_SUBFOLDER=\"{0}\"", BinariesSubFolder.Replace(@"\", @"\\")));

		//	string BinariesFolder = Path.Combine(PluginPath, BinariesSubFolder);
		//	Directory.CreateDirectory(BinariesFolder);

		//	ExternalDependencies.Add("packages.config");

		//	// download nuget
		//	string NugetExe = Path.Combine(NugetFolder, "nuget.exe");
		//	if (!File.Exists(NugetExe))
		//	{
		//		using (System.Net.WebClient myWebClient = new System.Net.WebClient())
		//		{
		//			// we aren't focusing on a specific nuget version, we can use any of them but the latest one is preferable
		//			myWebClient.DownloadFile(@"https://dist.nuget.org/win-x86-commandline/latest/nuget.exe", NugetExe);
		//		}
		//	}

		//	// run nuget to update the packages
		//	{
		//		var StartInfo = new System.Diagnostics.ProcessStartInfo(NugetExe, string.Format("install \"{0}\" -OutputDirectory \"{1}\"", Path.Combine(ModuleDirectory, "packages.config"), NugetFolder));
		//		StartInfo.UseShellExecute = false;
		//		StartInfo.CreateNoWindow = true;
		//		var ExitCode = Utils.RunLocalProcessAndPrintfOutput(StartInfo);
		//		if (ExitCode < 0)
		//		{
		//			throw new BuildException("Failed to get nuget packages.  See log for details.");
		//		}
		//	}

		//	// get list of the installed packages, that's needed because the code should get particular versions of the installed packages
		//	string[] InstalledPackages = Utils.RunLocalProcessAndReturnStdOut(NugetExe, string.Format("list -Source \"{0}\"", NugetFolder)).Split(new char[] { '\r', '\n' });

		//	// winmd files of the packages
		//	List<string> WinMDFiles = new List<string>();

		//	// WinRT lib for some job
		//	string QRPackage = InstalledPackages.FirstOrDefault(x => x.StartsWith("Microsoft.MixedReality.EyeTracking"));
		//	if (!string.IsNullOrEmpty(QRPackage))
		//	{
		//		string QRFolderName = QRPackage.Replace(" ", ".");

		//		// copying dll and winmd binaries to our local binaries folder
		//		// !!!!! please make sure that you use the path of file! Unreal can't do it for you !!!!!
		//		string WinMDFile = Path.Combine(NugetFolder, QRFolderName, @"lib\uap10.0.18362\Microsoft.MixedReality.EyeTracking.winmd");
		//		SafeCopy(WinMDFile, Path.Combine(BinariesFolder, "Microsoft.MixedReality.EyeTracking.winmd"));

		//		SafeCopy(Path.Combine(NugetFolder, QRFolderName, string.Format(@"runtimes\win10-{0}\native\Microsoft.MixedReality.EyeTracking.dll", Target.WindowsPlatform.Architecture.ToString())),
		//			Path.Combine(BinariesFolder, "Microsoft.MixedReality.EyeTracking.dll"));

		//		// also both both binaries must be in RuntimeDependencies, unless you get failures in Hololens platform
		//		RuntimeDependencies.Add(Path.Combine(BinariesFolder, "Microsoft.MixedReality.EyeTracking.dll"));
		//		RuntimeDependencies.Add(Path.Combine(BinariesFolder, "Microsoft.MixedReality.EyeTracking.winmd"));

		//		//add winmd file to the list for further processing using cppwinrt.exe
		//		WinMDFiles.Add(WinMDFile);
		//	}

		//	if (Target.Platform == UnrealTargetPlatform.Win64)
		//	{
		//		// Microsoft.VCRTForwarders.140 is needed to run WinRT dlls in Win64 platforms
		//		string VCRTForwardersPackage = InstalledPackages.FirstOrDefault(x => x.StartsWith("Microsoft.VCRTForwarders.140"));
		//		if (!string.IsNullOrEmpty(VCRTForwardersPackage))
		//		{
		//			string VCRTForwardersName = VCRTForwardersPackage.Replace(" ", ".");
		//			foreach (var Dll in Directory.EnumerateFiles(Path.Combine(NugetFolder, VCRTForwardersName, "runtimes/win10-x64/native/release"), "*_app.dll"))
		//			{
		//				string newDll = Path.Combine(BinariesFolder, Path.GetFileName(Dll));
		//				SafeCopy(Dll, newDll);
		//				RuntimeDependencies.Add(newDll);
		//			}
		//		}
		//	}

		//	// get WinRT package 
		//	string CppWinRTPackage = InstalledPackages.FirstOrDefault(x => x.StartsWith("Microsoft.Windows.CppWinRT"));
		//	if (!string.IsNullOrEmpty(CppWinRTPackage))
		//	{
		//		string CppWinRTName = CppWinRTPackage.Replace(" ", ".");
		//		string CppWinRTExe = Path.Combine(NugetFolder, CppWinRTName, "bin", "cppwinrt.exe");
		//		string CppWinRTFolder = Path.Combine(PluginPath, "Intermediate", CppWinRTName, MyModuleName);
		//		Directory.CreateDirectory(CppWinRTFolder);

		//		// all downloaded winmd file with WinSDK to be processed by cppwinrt.exe
		//		var WinMDFilesStringbuilder = new System.Text.StringBuilder();
		//		foreach (var winmd in WinMDFiles)
		//		{
		//			WinMDFilesStringbuilder.Append(" -input \"");
		//			WinMDFilesStringbuilder.Append(winmd);
		//			WinMDFilesStringbuilder.Append("\"");
		//		}

		//		// generate winrt headers and add them into include paths
		//		var StartInfo = new System.Diagnostics.ProcessStartInfo(CppWinRTExe, string.Format("{0} -input \"{1}\" -output \"{2}\"", WinMDFilesStringbuilder, Target.WindowsPlatform.WindowsSdkVersion, CppWinRTFolder));
		//		StartInfo.UseShellExecute = false;
		//		StartInfo.CreateNoWindow = true;
		//		var ExitCode = Utils.RunLocalProcessAndPrintfOutput(StartInfo);
		//		if (ExitCode < 0)
		//		{
		//			throw new BuildException("Failed to get generate WinRT headers.  See log for details.");
		//		}

		//		PrivateIncludePaths.Add(CppWinRTFolder);
		//	}
		//	else
		//	{
		//		// fall back to default WinSDK headers if no winrt package in our list
		//		PrivateIncludePaths.Add(Path.Combine(Target.WindowsPlatform.WindowsSdkDir, "Include", Target.WindowsPlatform.WindowsSdkVersion, "cppwinrt"));
		//	}
		//}
		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
