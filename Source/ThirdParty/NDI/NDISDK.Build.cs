// Copyright Epic Games, Inc. All Rights Reserved.

using System.IO;
using UnrealBuildTool;

public class NDISDK : ModuleRules
{
    public NDISDK(ReadOnlyTargetRules Target) : base(Target)
    {
        Type = ModuleType.External;

		// The NDI SDK is available for Win64 + Linux, but this plugin only supports Win64
        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            string IncludePath = Path.Combine(ModuleDirectory, "Include");
	        PublicIncludePaths.Add(IncludePath);

            string DllName = Path.Combine("Processing.NDI.Lib.x64.dll");
            string DllPath = Path.Combine(PluginDirectory, "Binaries", "ThirdParty","NDI_Library", "NDI6484", "Win64", DllName);
            RuntimeDependencies.Add(DllPath);

            // Ensure that we define our c++ define
            PublicDefinitions.Add("NDI_SDK_ENABLED");
        }
        
        if (Target.Platform == UnrealTargetPlatform.Linux)
        {

            string IncludePath = Path.Combine(ModuleDirectory, "Include");
            PublicIncludePaths.Add(IncludePath);
            
            
            string PlatformRelativePath = Path.Combine("Binaries", "ThirdParty", "NDI_Library", "NDI6484", Target.Platform.ToString());
            string PlatformPath = Path.Combine(PluginDirectory, PlatformRelativePath);

            string SharedLibFileName = "libndi.so.6.3.1";
            string SharedLibFileNameVersion6 = "libndi.so.6";
            string SharedLibFileNameWithoutVersion = "libndi.so";

            PublicDelayLoadDLLs.Add(Path.Combine(PlatformPath, SharedLibFileNameVersion6));
            PublicDelayLoadDLLs.Add(Path.Combine(PlatformPath, SharedLibFileName));

            RuntimeDependencies.Add(Path.Combine(PlatformPath, SharedLibFileName));

            PublicDefinitions.Add("NDI_SDK_ENABLED");
        }

    }
}
