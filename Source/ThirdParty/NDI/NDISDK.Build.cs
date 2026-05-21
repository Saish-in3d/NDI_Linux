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
            string DllPath = Path.Combine(PluginDirectory, "Binaries", "ThirdParty", "Win64", DllName);
            RuntimeDependencies.Add(DllPath);

            // Ensure that we define our c++ define
            PublicDefinitions.Add("NDI_SDK_ENABLED");
        }
        
        if (Target.Platform == UnrealTargetPlatform.Linux)
        {
            /*string IncludePath = Path.Combine(ModuleDirectory, "Include");
            PublicIncludePaths.Add(IncludePath);
    
            string LibDir1 = Path.Combine("$(PluginDir)", "Binaries", "ThirdParty", "NDI_Library", "NDI6484","Linux","libndi.so.6.3.1");
            string LibDir2 = Path.Combine("$(PluginDir)", "Binaries", "ThirdParty", "NDI_Library", "NDI6484","Linux","libndi.so.6");
            string LibDir3 = Path.Combine("$(PluginDir)", "Binaries", "ThirdParty", "NDI_Library", "NDI6484","Linux","libndi.so");
            
            PublicAdditionalLibraries.Add(LibDir1);
            PublicDelayLoadDLLs.Add(LibDir1);
            RuntimeDependencies.Add(LibDir1);
            
            PublicAdditionalLibraries.Add(LibDir2);
            PublicDelayLoadDLLs.Add(LibDir2);
            RuntimeDependencies.Add(LibDir2);
            
            PublicAdditionalLibraries.Add(LibDir3);
            PublicDelayLoadDLLs.Add(LibDir3);
            RuntimeDependencies.Add(LibDir3);
            
            PublicDefinitions.Add("NDI_SDK_ENABLED");*/
            
            /*string IncludePath = Path.Combine(ModuleDirectory, "Include");
            PublicIncludePaths.Add(IncludePath);

            // Get the exact directory where the source libraries are currently located
            string LinuxLibDir = Path.GetFullPath(Path.Combine(PluginDirectory, "Binaries", "ThirdParty", "NDI_Library", "NDI6484", "Linux"));

            PublicRuntimeLibraryPaths.Add(LinuxLibDir);

            string LibFile = Path.Combine(LinuxLibDir, "libndi.so");
            PublicSystemLibraries.Add(LibFile);

            // Define the source file paths
            string SourceRealLib = Path.Combine(LinuxLibDir, "libndi.so.6.3.1");
            string SourceSymLink6 = Path.Combine(LinuxLibDir, "libndi.so.6");
            string SourceSymLink = Path.Combine(LinuxLibDir, "libndi.so");

            // CRITICAL: Tell UBT to stage these files directly into the packaged output binaries directory
            RuntimeDependencies.Add(Path.Combine("$(BinaryOutputDir)", "libndi.so.6.3.1"), SourceRealLib);
            RuntimeDependencies.Add(Path.Combine("$(BinaryOutputDir)", "libndi.so.6"), SourceSymLink6);
            RuntimeDependencies.Add(Path.Combine("$(BinaryOutputDir)", "libndi.so"), SourceSymLink);

            PublicDefinitions.Add("NDI_SDK_ENABLED");*/
            
            /*string IncludePath = Path.Combine(ModuleDirectory, "Include");
    PublicIncludePaths.Add(IncludePath);

    // 1. Locate the exact source folder containing your healthy symlinks
    string LinuxLibDir = Path.GetFullPath(Path.Combine(PluginDirectory, "Binaries", "ThirdParty", "NDI_Library", "NDI6484", "Linux"));

    // 2. Instruct the output executable to search for .so files locally ($ORIGIN)
    PublicRuntimeLibraryPaths.Add("$ORIGIN");

    string LibFile = Path.Combine(LinuxLibDir, "libndi.so");
    PublicSystemLibraries.Add(LibFile);

    // 3. FORCE AUTOMATION HOOK: Manually write files to the staging directory
    // This executes during compilation, bypassing UAT's filtering engine
    if (Target.ProjectFile != null)
    {
        // Find where the final game binary executable is going to live
        string ProjectDir = Path.GetDirectoryName(Target.ProjectFile.FullName);
        string TargetBinaryDir = Path.Combine(ProjectDir, "Binaries", "Linux");

        // Ensure the game's output binary folder exists before copying
        if (!Directory.Exists(TargetBinaryDir))
        {
            Directory.CreateDirectory(TargetBinaryDir);
        }

        // Define our explicit source and destination file sets
        string[] FilesToCopy = new string[] { "libndi.so", "libndi.so.6", "libndi.so.6.3.1" };

        foreach (string FileName in FilesToCopy)
        {
            string SourcePath = Path.Combine(LinuxLibDir, FileName);
            string DestPath = Path.Combine(TargetBinaryDir, FileName);

            try
            {
                // Force copy the binary directly to the project's output folder
                if (File.Exists(SourcePath))
                {
                    File.Copy(SourcePath, DestPath, true);
                    //Log.TraceInformation($"NDI SDK: Successfully deployed {FileName} to local output directory.");
                }
            }
            catch (System.Exception Ex)
            {
                //Log.TraceWarning($"NDI SDK: Automation copy failed for {FileName}: {Ex.Message}");
            }
        }
    }

    PublicDefinitions.Add("NDI_SDK_ENABLED");*/
            
            
            
            
            
            
            
            string IncludePath = Path.Combine(ModuleDirectory, "Include");
            PublicIncludePaths.Add(IncludePath);
            
            // Match Epic's structural approach using PluginDirectory and Target.Platform
            string OrtPlatformRelativePath = Path.Combine("Binaries", "ThirdParty", "NDI_Library", "NDI6484", Target.Platform.ToString());
            string OrtPlatformPath = Path.Combine(PluginDirectory, OrtPlatformRelativePath);

            string SharedLibFileName = "libndi.so.6.3.1";
            string SharedLibFileNameVersion6 = "libndi.so.6";
            string SharedLibFileNameWithoutVersion = "libndi.so";

            // Add the absolute paths to DelayLoadDLLs just like Epic does for .so files
            //PublicDelayLoadDLLs.Add(Path.Combine(OrtPlatformPath, SharedLibFileNameWithoutVersion));
            PublicDelayLoadDLLs.Add(Path.Combine(OrtPlatformPath, SharedLibFileNameVersion6));
            PublicDelayLoadDLLs.Add(Path.Combine(OrtPlatformPath, SharedLibFileName));

            // Explicitly register them as packaged RuntimeDependencies
            //RuntimeDependencies.Add(Path.Combine(OrtPlatformPath, SharedLibFileNameWithoutVersion));
            //RuntimeDependencies.Add(Path.Combine(OrtPlatformPath, SharedLibFileNameVersion6));
            RuntimeDependencies.Add(Path.Combine(OrtPlatformPath, SharedLibFileName));

            PublicDefinitions.Add("NDI_SDK_ENABLED");
        }

    }
}
