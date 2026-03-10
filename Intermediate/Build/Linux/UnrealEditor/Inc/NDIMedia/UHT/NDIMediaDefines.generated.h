// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NDIMediaDefines.h"

#ifdef NDIMEDIA_NDIMediaDefines_generated_h
#error "NDIMediaDefines.generated.h already included, missing '#pragma once' in NDIMediaDefines.h"
#endif
#define NDIMEDIA_NDIMediaDefines_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Public_NDIMediaDefines_h

// ********** Begin Enum ENDIReceiverBandwidth *****************************************************
#define FOREACH_ENUM_ENDIRECEIVERBANDWIDTH(op) \
	op(ENDIReceiverBandwidth::MetadataOnly) \
	op(ENDIReceiverBandwidth::AudioOnly) \
	op(ENDIReceiverBandwidth::Lowest) \
	op(ENDIReceiverBandwidth::Highest) 

enum class ENDIReceiverBandwidth : uint8;
template<> struct TIsUEnumClass<ENDIReceiverBandwidth> { enum { Value = true }; };
template<> NDIMEDIA_API UEnum* StaticEnum<ENDIReceiverBandwidth>();
// ********** End Enum ENDIReceiverBandwidth *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
