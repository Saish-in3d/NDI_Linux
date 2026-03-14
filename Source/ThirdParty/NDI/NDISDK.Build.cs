// Copyright Epic Games, Inc. All Rights Reserved.

using System.IO;
using UnrealBuildTool;

public class NDISDK : ModuleRules
{
    public NDISDK(ReadOnlyTargetRules Target) : base(Target)
    {
        Type = ModuleType.External;

		// The NDI SDK is available for Win64 + Linux, but this plugin only supports Win64
        /*if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            string IncludePath = Path.Combine(ModuleDirectory, "Include");
	        PublicIncludePaths.Add(IncludePath);

            string DllName = Path.Combine("Processing.NDI.Lib.x64.dll");
            string DllPath = Path.Combine(PluginDirectory, "Binaries", "ThirdParty", "Win64", DllName);
            RuntimeDependencies.Add(DllPath);

            // Ensure that we define our c++ define
            PublicDefinitions.Add("NDI_SDK_ENABLED");
        }*/
        
        if (Target.Platform == UnrealTargetPlatform.Linux)
        {
            string IncludePath = Path.Combine(ModuleDirectory, "Include");
            PublicIncludePaths.Add(IncludePath);
            
            // ENSURE THIS STRING MATCHES YOUR FOLDER NAME EXACTLY
            // Based on your screenshot, this should be "Linux"
            string LinuxPlatformSubdir = "Linux"; 
    
            string LibDir = Path.Combine(PluginDirectory, "Binaries", "ThirdParty", LinuxPlatformSubdir);
    
            // Add the specific file to runtime dependencies
            // Use libndi.so.6 as it is the standard SONAME the binary expects
            RuntimeDependencies.Add(Path.Combine(LibDir, "libndi.so.6"));
            RuntimeDependencies.Add(Path.Combine(LibDir, "libndi.so.6.3.1"));
    
            // If you are using a loader script in C++, point it here:
            PublicDefinitions.Add("NDI_SDK_ENABLED");
        }

    }
}
