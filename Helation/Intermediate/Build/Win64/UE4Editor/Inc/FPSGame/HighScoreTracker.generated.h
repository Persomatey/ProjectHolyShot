// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSGAME_HighScoreTracker_generated_h
#error "HighScoreTracker.generated.h already included, missing '#pragma once' in HighScoreTracker.h"
#endif
#define FPSGAME_HighScoreTracker_generated_h

#define Helation_Source_FPSGame_HighScoreTracker_h_11_SPARSE_DATA
#define Helation_Source_FPSGame_HighScoreTracker_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSaveText); \
	DECLARE_FUNCTION(execLoadText); \
	DECLARE_FUNCTION(execSaveStringToFile); \
	DECLARE_FUNCTION(execLoadFileToString);


#define Helation_Source_FPSGame_HighScoreTracker_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveText); \
	DECLARE_FUNCTION(execLoadText); \
	DECLARE_FUNCTION(execSaveStringToFile); \
	DECLARE_FUNCTION(execLoadFileToString);


#define Helation_Source_FPSGame_HighScoreTracker_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHighScoreTracker(); \
	friend struct Z_Construct_UClass_UHighScoreTracker_Statics; \
public: \
	DECLARE_CLASS(UHighScoreTracker, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(UHighScoreTracker)


#define Helation_Source_FPSGame_HighScoreTracker_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUHighScoreTracker(); \
	friend struct Z_Construct_UClass_UHighScoreTracker_Statics; \
public: \
	DECLARE_CLASS(UHighScoreTracker, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(UHighScoreTracker)


#define Helation_Source_FPSGame_HighScoreTracker_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHighScoreTracker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHighScoreTracker) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHighScoreTracker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHighScoreTracker); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHighScoreTracker(UHighScoreTracker&&); \
	NO_API UHighScoreTracker(const UHighScoreTracker&); \
public:


#define Helation_Source_FPSGame_HighScoreTracker_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHighScoreTracker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHighScoreTracker(UHighScoreTracker&&); \
	NO_API UHighScoreTracker(const UHighScoreTracker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHighScoreTracker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHighScoreTracker); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHighScoreTracker)


#define Helation_Source_FPSGame_HighScoreTracker_h_11_PRIVATE_PROPERTY_OFFSET
#define Helation_Source_FPSGame_HighScoreTracker_h_8_PROLOG
#define Helation_Source_FPSGame_HighScoreTracker_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Helation_Source_FPSGame_HighScoreTracker_h_11_PRIVATE_PROPERTY_OFFSET \
	Helation_Source_FPSGame_HighScoreTracker_h_11_SPARSE_DATA \
	Helation_Source_FPSGame_HighScoreTracker_h_11_RPC_WRAPPERS \
	Helation_Source_FPSGame_HighScoreTracker_h_11_INCLASS \
	Helation_Source_FPSGame_HighScoreTracker_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Helation_Source_FPSGame_HighScoreTracker_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Helation_Source_FPSGame_HighScoreTracker_h_11_PRIVATE_PROPERTY_OFFSET \
	Helation_Source_FPSGame_HighScoreTracker_h_11_SPARSE_DATA \
	Helation_Source_FPSGame_HighScoreTracker_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Helation_Source_FPSGame_HighScoreTracker_h_11_INCLASS_NO_PURE_DECLS \
	Helation_Source_FPSGame_HighScoreTracker_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class UHighScoreTracker>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Helation_Source_FPSGame_HighScoreTracker_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
