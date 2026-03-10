// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NDIMediaOutput.h"

#ifdef NDIMEDIA_NDIMediaOutput_generated_h
#error "NDIMediaOutput.generated.h already included, missing '#pragma once' in NDIMediaOutput.h"
#endif
#define NDIMEDIA_NDIMediaOutput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNDIMediaOutput **********************************************************
NDIMEDIA_API UClass* Z_Construct_UClass_UNDIMediaOutput_NoRegister();

#define FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Public_NDIMediaOutput_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNDIMediaOutput(); \
	friend struct Z_Construct_UClass_UNDIMediaOutput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NDIMEDIA_API UClass* Z_Construct_UClass_UNDIMediaOutput_NoRegister(); \
public: \
	DECLARE_CLASS2(UNDIMediaOutput, UMediaOutput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NDIMedia"), Z_Construct_UClass_UNDIMediaOutput_NoRegister) \
	DECLARE_SERIALIZER(UNDIMediaOutput)


#define FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Public_NDIMediaOutput_h_55_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNDIMediaOutput(UNDIMediaOutput&&) = delete; \
	UNDIMediaOutput(const UNDIMediaOutput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNDIMediaOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNDIMediaOutput); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNDIMediaOutput) \
	NO_API virtual ~UNDIMediaOutput();


#define FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Public_NDIMediaOutput_h_52_PROLOG
#define FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Public_NDIMediaOutput_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Public_NDIMediaOutput_h_55_INCLASS_NO_PURE_DECLS \
	FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Public_NDIMediaOutput_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNDIMediaOutput;

// ********** End Class UNDIMediaOutput ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Public_NDIMediaOutput_h

// ********** Begin Enum ENDIMediaOutputPixelFormat ************************************************
#define FOREACH_ENUM_ENDIMEDIAOUTPUTPIXELFORMAT(op) \
	op(ENDIMediaOutputPixelFormat::B8G8R8A8) 

enum class ENDIMediaOutputPixelFormat;
template<> struct TIsUEnumClass<ENDIMediaOutputPixelFormat> { enum { Value = true }; };
template<> NDIMEDIA_API UEnum* StaticEnum<ENDIMediaOutputPixelFormat>();
// ********** End Enum ENDIMediaOutputPixelFormat **************************************************

// ********** Begin Enum ENDIMediaOutputAudioSampleRate ********************************************
#define FOREACH_ENUM_ENDIMEDIAOUTPUTAUDIOSAMPLERATE(op) \
	op(ENDIMediaOutputAudioSampleRate::SR_44_1k) \
	op(ENDIMediaOutputAudioSampleRate::SR_48k) \
	op(ENDIMediaOutputAudioSampleRate::SR_88_2k) \
	op(ENDIMediaOutputAudioSampleRate::SR_96k) \
	op(ENDIMediaOutputAudioSampleRate::SR_176_4k) \
	op(ENDIMediaOutputAudioSampleRate::SR_192k) 

enum class ENDIMediaOutputAudioSampleRate : uint32;
template<> struct TIsUEnumClass<ENDIMediaOutputAudioSampleRate> { enum { Value = true }; };
template<> NDIMEDIA_API UEnum* StaticEnum<ENDIMediaOutputAudioSampleRate>();
// ********** End Enum ENDIMediaOutputAudioSampleRate **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
