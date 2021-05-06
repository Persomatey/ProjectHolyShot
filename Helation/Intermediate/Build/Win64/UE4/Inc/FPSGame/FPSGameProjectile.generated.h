// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef FPSGAME_FPSGameProjectile_generated_h
#error "FPSGameProjectile.generated.h already included, missing '#pragma once' in FPSGameProjectile.h"
#endif
#define FPSGAME_FPSGameProjectile_generated_h

#define Helation_Source_FPSGame_FPSGameProjectile_h_12_SPARSE_DATA
#define Helation_Source_FPSGame_FPSGameProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Helation_Source_FPSGame_FPSGameProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Helation_Source_FPSGame_FPSGameProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSGameProjectile(); \
	friend struct Z_Construct_UClass_AFPSGameProjectile_Statics; \
public: \
	DECLARE_CLASS(AFPSGameProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSGameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Helation_Source_FPSGame_FPSGameProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFPSGameProjectile(); \
	friend struct Z_Construct_UClass_AFPSGameProjectile_Statics; \
public: \
	DECLARE_CLASS(AFPSGameProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSGameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Helation_Source_FPSGame_FPSGameProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSGameProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSGameProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSGameProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSGameProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSGameProjectile(AFPSGameProjectile&&); \
	NO_API AFPSGameProjectile(const AFPSGameProjectile&); \
public:


#define Helation_Source_FPSGame_FPSGameProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSGameProjectile(AFPSGameProjectile&&); \
	NO_API AFPSGameProjectile(const AFPSGameProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSGameProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSGameProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSGameProjectile)


#define Helation_Source_FPSGame_FPSGameProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AFPSGameProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AFPSGameProjectile, ProjectileMovement); }


#define Helation_Source_FPSGame_FPSGameProjectile_h_9_PROLOG
#define Helation_Source_FPSGame_FPSGameProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Helation_Source_FPSGame_FPSGameProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Helation_Source_FPSGame_FPSGameProjectile_h_12_SPARSE_DATA \
	Helation_Source_FPSGame_FPSGameProjectile_h_12_RPC_WRAPPERS \
	Helation_Source_FPSGame_FPSGameProjectile_h_12_INCLASS \
	Helation_Source_FPSGame_FPSGameProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Helation_Source_FPSGame_FPSGameProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Helation_Source_FPSGame_FPSGameProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Helation_Source_FPSGame_FPSGameProjectile_h_12_SPARSE_DATA \
	Helation_Source_FPSGame_FPSGameProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Helation_Source_FPSGame_FPSGameProjectile_h_12_INCLASS_NO_PURE_DECLS \
	Helation_Source_FPSGame_FPSGameProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class AFPSGameProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Helation_Source_FPSGame_FPSGameProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
