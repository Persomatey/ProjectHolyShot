// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSGAME_DroneEnemy_generated_h
#error "DroneEnemy.generated.h already included, missing '#pragma once' in DroneEnemy.h"
#endif
#define FPSGAME_DroneEnemy_generated_h

#define Helation_Source_FPSGame_DroneEnemy_h_10_SPARSE_DATA
#define Helation_Source_FPSGame_DroneEnemy_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBeginDeath); \
	DECLARE_FUNCTION(execTakeDamage);


#define Helation_Source_FPSGame_DroneEnemy_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBeginDeath); \
	DECLARE_FUNCTION(execTakeDamage);


#define Helation_Source_FPSGame_DroneEnemy_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADroneEnemy(); \
	friend struct Z_Construct_UClass_ADroneEnemy_Statics; \
public: \
	DECLARE_CLASS(ADroneEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(ADroneEnemy)


#define Helation_Source_FPSGame_DroneEnemy_h_10_INCLASS \
private: \
	static void StaticRegisterNativesADroneEnemy(); \
	friend struct Z_Construct_UClass_ADroneEnemy_Statics; \
public: \
	DECLARE_CLASS(ADroneEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(ADroneEnemy)


#define Helation_Source_FPSGame_DroneEnemy_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADroneEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADroneEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADroneEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADroneEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADroneEnemy(ADroneEnemy&&); \
	NO_API ADroneEnemy(const ADroneEnemy&); \
public:


#define Helation_Source_FPSGame_DroneEnemy_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADroneEnemy(ADroneEnemy&&); \
	NO_API ADroneEnemy(const ADroneEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADroneEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADroneEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADroneEnemy)


#define Helation_Source_FPSGame_DroneEnemy_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__health() { return STRUCT_OFFSET(ADroneEnemy, health); } \
	FORCEINLINE static uint32 __PPO__isDead() { return STRUCT_OFFSET(ADroneEnemy, isDead); }


#define Helation_Source_FPSGame_DroneEnemy_h_7_PROLOG
#define Helation_Source_FPSGame_DroneEnemy_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Helation_Source_FPSGame_DroneEnemy_h_10_PRIVATE_PROPERTY_OFFSET \
	Helation_Source_FPSGame_DroneEnemy_h_10_SPARSE_DATA \
	Helation_Source_FPSGame_DroneEnemy_h_10_RPC_WRAPPERS \
	Helation_Source_FPSGame_DroneEnemy_h_10_INCLASS \
	Helation_Source_FPSGame_DroneEnemy_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Helation_Source_FPSGame_DroneEnemy_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Helation_Source_FPSGame_DroneEnemy_h_10_PRIVATE_PROPERTY_OFFSET \
	Helation_Source_FPSGame_DroneEnemy_h_10_SPARSE_DATA \
	Helation_Source_FPSGame_DroneEnemy_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Helation_Source_FPSGame_DroneEnemy_h_10_INCLASS_NO_PURE_DECLS \
	Helation_Source_FPSGame_DroneEnemy_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class ADroneEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Helation_Source_FPSGame_DroneEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
