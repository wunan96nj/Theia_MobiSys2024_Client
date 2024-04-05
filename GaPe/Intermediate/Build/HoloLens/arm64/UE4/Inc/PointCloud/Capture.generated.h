// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POINTCLOUD_Capture_generated_h
#error "Capture.generated.h already included, missing '#pragma once' in Capture.h"
#endif
#define POINTCLOUD_Capture_generated_h

#define GaPe_Source_PointCloud_Capture_h_12_SPARSE_DATA
#define GaPe_Source_PointCloud_Capture_h_12_RPC_WRAPPERS
#define GaPe_Source_PointCloud_Capture_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define GaPe_Source_PointCloud_Capture_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACapture(); \
	friend struct Z_Construct_UClass_ACapture_Statics; \
public: \
	DECLARE_CLASS(ACapture, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PointCloud"), NO_API) \
	DECLARE_SERIALIZER(ACapture)


#define GaPe_Source_PointCloud_Capture_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACapture(); \
	friend struct Z_Construct_UClass_ACapture_Statics; \
public: \
	DECLARE_CLASS(ACapture, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PointCloud"), NO_API) \
	DECLARE_SERIALIZER(ACapture)


#define GaPe_Source_PointCloud_Capture_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACapture(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACapture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACapture); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACapture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACapture(ACapture&&); \
	NO_API ACapture(const ACapture&); \
public:


#define GaPe_Source_PointCloud_Capture_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACapture(ACapture&&); \
	NO_API ACapture(const ACapture&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACapture); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACapture); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACapture)


#define GaPe_Source_PointCloud_Capture_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CaptureInterval() { return STRUCT_OFFSET(ACapture, CaptureInterval); }


#define GaPe_Source_PointCloud_Capture_h_9_PROLOG
#define GaPe_Source_PointCloud_Capture_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GaPe_Source_PointCloud_Capture_h_12_PRIVATE_PROPERTY_OFFSET \
	GaPe_Source_PointCloud_Capture_h_12_SPARSE_DATA \
	GaPe_Source_PointCloud_Capture_h_12_RPC_WRAPPERS \
	GaPe_Source_PointCloud_Capture_h_12_INCLASS \
	GaPe_Source_PointCloud_Capture_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GaPe_Source_PointCloud_Capture_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GaPe_Source_PointCloud_Capture_h_12_PRIVATE_PROPERTY_OFFSET \
	GaPe_Source_PointCloud_Capture_h_12_SPARSE_DATA \
	GaPe_Source_PointCloud_Capture_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GaPe_Source_PointCloud_Capture_h_12_INCLASS_NO_PURE_DECLS \
	GaPe_Source_PointCloud_Capture_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POINTCLOUD_API UClass* StaticClass<class ACapture>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GaPe_Source_PointCloud_Capture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
