// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AFPSGameProjectile;
enum class EAmmoType : uint8;
struct FVector;
struct FRotator;
enum class EWeaponType : uint8;
#ifdef FPSGAME_FPSGameCharacter_generated_h
#error "FPSGameCharacter.generated.h already included, missing '#pragma once' in FPSGameCharacter.h"
#endif
#define FPSGAME_FPSGameCharacter_generated_h

#define Helation_Source_FPSGame_FPSGameCharacter_h_13_SPARSE_DATA
#define Helation_Source_FPSGame_FPSGameCharacter_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDoAddAllWeapons); \
	DECLARE_FUNCTION(execSwitchToSpecificWeapon); \
	DECLARE_FUNCTION(execDoUnControlTheMouse); \
	DECLARE_FUNCTION(execAddGrenades); \
	DECLARE_FUNCTION(execGrenadeSpawn); \
	DECLARE_FUNCTION(execMeleeSpawn); \
	DECLARE_FUNCTION(execAddAmmo); \
	DECLARE_FUNCTION(execisFullHealth); \
	DECLARE_FUNCTION(execSetNewSpawnLoc); \
	DECLARE_FUNCTION(execRespawn); \
	DECLARE_FUNCTION(execDie); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execRegenHealth); \
	DECLARE_FUNCTION(execSwitchToNewPrimaryWeapon); \
	DECLARE_FUNCTION(execSwitchToNextPrimaryWeapon); \
	DECLARE_FUNCTION(execEndCrouch); \
	DECLARE_FUNCTION(execReloadWeaponAmmoAdded); \
	DECLARE_FUNCTION(execStopZoom);


#define Helation_Source_FPSGame_FPSGameCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDoAddAllWeapons); \
	DECLARE_FUNCTION(execSwitchToSpecificWeapon); \
	DECLARE_FUNCTION(execDoUnControlTheMouse); \
	DECLARE_FUNCTION(execAddGrenades); \
	DECLARE_FUNCTION(execGrenadeSpawn); \
	DECLARE_FUNCTION(execMeleeSpawn); \
	DECLARE_FUNCTION(execAddAmmo); \
	DECLARE_FUNCTION(execisFullHealth); \
	DECLARE_FUNCTION(execSetNewSpawnLoc); \
	DECLARE_FUNCTION(execRespawn); \
	DECLARE_FUNCTION(execDie); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execRegenHealth); \
	DECLARE_FUNCTION(execSwitchToNewPrimaryWeapon); \
	DECLARE_FUNCTION(execSwitchToNextPrimaryWeapon); \
	DECLARE_FUNCTION(execEndCrouch); \
	DECLARE_FUNCTION(execReloadWeaponAmmoAdded); \
	DECLARE_FUNCTION(execStopZoom);


#define Helation_Source_FPSGame_FPSGameCharacter_h_13_EVENT_PARMS \
	struct FPSGameCharacter_eventSwitchWeaponMesh_Parms \
	{ \
		int32 _index; \
	};


#define Helation_Source_FPSGame_FPSGameCharacter_h_13_CALLBACK_WRAPPERS
#define Helation_Source_FPSGame_FPSGameCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSGameCharacter(); \
	friend struct Z_Construct_UClass_AFPSGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSGameCharacter)


#define Helation_Source_FPSGame_FPSGameCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAFPSGameCharacter(); \
	friend struct Z_Construct_UClass_AFPSGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSGameCharacter)


#define Helation_Source_FPSGame_FPSGameCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSGameCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSGameCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSGameCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSGameCharacter(AFPSGameCharacter&&); \
	NO_API AFPSGameCharacter(const AFPSGameCharacter&); \
public:


#define Helation_Source_FPSGame_FPSGameCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSGameCharacter(AFPSGameCharacter&&); \
	NO_API AFPSGameCharacter(const AFPSGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSGameCharacter)


#define Helation_Source_FPSGame_FPSGameCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AFPSGameCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AFPSGameCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AFPSGameCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AFPSGameCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AFPSGameCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AFPSGameCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AFPSGameCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AFPSGameCharacter, L_MotionController); }


#define Helation_Source_FPSGame_FPSGameCharacter_h_10_PROLOG \
	Helation_Source_FPSGame_FPSGameCharacter_h_13_EVENT_PARMS


#define Helation_Source_FPSGame_FPSGameCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Helation_Source_FPSGame_FPSGameCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	Helation_Source_FPSGame_FPSGameCharacter_h_13_SPARSE_DATA \
	Helation_Source_FPSGame_FPSGameCharacter_h_13_RPC_WRAPPERS \
	Helation_Source_FPSGame_FPSGameCharacter_h_13_CALLBACK_WRAPPERS \
	Helation_Source_FPSGame_FPSGameCharacter_h_13_INCLASS \
	Helation_Source_FPSGame_FPSGameCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Helation_Source_FPSGame_FPSGameCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Helation_Source_FPSGame_FPSGameCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	Helation_Source_FPSGame_FPSGameCharacter_h_13_SPARSE_DATA \
	Helation_Source_FPSGame_FPSGameCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Helation_Source_FPSGame_FPSGameCharacter_h_13_CALLBACK_WRAPPERS \
	Helation_Source_FPSGame_FPSGameCharacter_h_13_INCLASS_NO_PURE_DECLS \
	Helation_Source_FPSGame_FPSGameCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class AFPSGameCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Helation_Source_FPSGame_FPSGameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
