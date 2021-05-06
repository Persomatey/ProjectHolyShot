// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSGAME_TurretEnemy_generated_h
#error "TurretEnemy.generated.h already included, missing '#pragma once' in TurretEnemy.h"
#endif
#define FPSGAME_TurretEnemy_generated_h

#define Helation_Source_FPSGame_TurretEnemy_h_10_SPARSE_DATA
#define Helation_Source_FPSGame_TurretEnemy_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBeginDeath); \
	DECLARE_FUNCTION(execTakeDamage);


#define Helation_Source_FPSGame_TurretEnemy_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBeginDeath); \
	DECLARE_FUNCTION(execTakeDamage);


#define Helation_Source_FPSGame_TurretEnemy_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATurretEnemy(); \
	friend struct Z_Construct_UClass_ATurretEnemy_Statics; \
public: \
	DECLARE_CLASS(ATurretEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(ATurretEnemy)


#define Helation_Source_FPSGame_TurretEnemy_h_10_INCLASS \
private: \
	static void StaticRegisterNativesATurretEnemy(); \
	friend struct Z_Construct_UClass_ATurretEnemy_Statics; \
public: \
	DECLARE_CLASS(ATurretEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(ATurretEnemy)


#define Helation_Source_FPSGame_TurretEnemy_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATurretEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATurretEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurretEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurretEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATurretEnemy(ATurretEnemy&&); \
	NO_API ATurretEnemy(const ATurretEnemy&); \
public:


#define Helation_Source_FPSGame_TurretEnemy_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATurretEnemy(ATurretEnemy&&); \
	NO_API ATurretEnemy(const ATurretEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurretEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurretEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATurretEnemy)


#define Helation_Source_FPSGame_TurretEnemy_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__health() { return STRUCT_OFFSET(ATurretEnemy, health); } \
	FORCEINLINE static uint32 __PPO__isIdling() { return STRUCT_OFFSET(ATurretEnemy, isIdling); } \
	FORCEINLINE static uint32 __PPO__isLookingLeft() { return STRUCT_OFFSET(ATurretEnemy, isLookingLeft); } \
	FORCEINLINE static uint32 __PPO__startNewLoop() { return STRUCT_OFFSET(ATurretEnemy, startNewLoop); } \
	FORCEINLINE static uint32 __PPO__isDead() { return STRUCT_OFFSET(ATurretEnemy, isDead); }


#define Helation_Source_FPSGame_TurretEnemy_h_7_PROLOG
#define Helation_Source_FPSGame_TurretEnemy_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Helation_Source_FPSGame_TurretEnemy_h_10_PRIVATE_PROPERTY_OFFSET \
	Helation_Source_FPSGame_TurretEnemy_h_10_SPARSE_DATA \
	Helation_Source_FPSGame_TurretEnemy_h_10_RPC_WRAPPERS \
	Helation_Source_FPSGame_TurretEnemy_h_10_INCLASS \
	Helation_Source_FPSGame_TurretEnemy_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Helation_Source_FPSGame_TurretEnemy_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Helation_Source_FPSGame_TurretEnemy_h_10_PRIVATE_PROPERTY_OFFSET \
	Helation_Source_FPSGame_TurretEnemy_h_10_SPARSE_DATA \
	Helation_Source_FPSGame_TurretEnemy_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Helation_Source_FPSGame_TurretEnemy_h_10_INCLASS_NO_PURE_DECLS \
	Helation_Source_FPSGame_TurretEnemy_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class ATurretEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Helation_Source_FPSGame_TurretEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
