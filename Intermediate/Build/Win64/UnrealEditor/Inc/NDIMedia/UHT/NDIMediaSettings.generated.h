// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NDIMediaSettings.h"

#ifdef NDIMEDIA_NDIMediaSettings_generated_h
#error "NDIMediaSettings.generated.h already included, missing '#pragma once' in NDIMediaSettings.h"
#endif
#define NDIMEDIA_NDIMediaSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNDIMediaSettings ********************************************************
NDIMEDIA_API UClass* Z_Construct_UClass_UNDIMediaSettings_NoRegister();

#define FID_FieldPlotLinux_Test_Plugins_NDI_Linux_Source_NDIMedia_Public_NDIMediaSettings_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNDIMediaSettings(); \
	friend struct Z_Construct_UClass_UNDIMediaSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NDIMEDIA_API UClass* Z_Construct_UClass_UNDIMediaSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UNDIMediaSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/NDIMedia"), Z_Construct_UClass_UNDIMediaSettings_NoRegister) \
	DECLARE_SERIALIZER(UNDIMediaSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_FieldPlotLinux_Test_Plugins_NDI_Linux_Source_NDIMedia_Public_NDIMediaSettings_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNDIMediaSettings(UNDIMediaSettings&&) = delete; \
	UNDIMediaSettings(const UNDIMediaSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNDIMediaSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNDIMediaSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNDIMediaSettings) \
	NO_API virtual ~UNDIMediaSettings();


#define FID_FieldPlotLinux_Test_Plugins_NDI_Linux_Source_NDIMedia_Public_NDIMediaSettings_h_9_PROLOG
#define FID_FieldPlotLinux_Test_Plugins_NDI_Linux_Source_NDIMedia_Public_NDIMediaSettings_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FieldPlotLinux_Test_Plugins_NDI_Linux_Source_NDIMedia_Public_NDIMediaSettings_h_12_INCLASS_NO_PURE_DECLS \
	FID_FieldPlotLinux_Test_Plugins_NDI_Linux_Source_NDIMedia_Public_NDIMediaSettings_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNDIMediaSettings;

// ********** End Class UNDIMediaSettings **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FieldPlotLinux_Test_Plugins_NDI_Linux_Source_NDIMedia_Public_NDIMediaSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
