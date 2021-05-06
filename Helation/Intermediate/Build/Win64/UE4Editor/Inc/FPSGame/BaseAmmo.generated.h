// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSGAME_BaseAmmo_generated_h
#error "BaseAmmo.generated.h already included, missing '#pragma once' in BaseAmmo.h"
#endif
#define FPSGAME_BaseAmmo_generated_h

#define Helation_Source_FPSGame_BaseAmmo_h_19_SPARSE_DATA
#define Helation_Source_FPSGame_BaseAmmo_h_19_RPC_WRAPPERS
#define Helation_Source_FPSGame_BaseAmmo_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define Helation_Source_FPSGame_BaseAmmo_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseAmmo(); \
	friend struct Z_Construct_UClass_ABaseAmmo_Statics; \
public: \
	DECLARE_CLASS(ABaseAmmo, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(ABaseAmmo)


#define Helation_Source_FPSGame_BaseAmmo_h_19_INCLASS \
private: \
	static void StaticRegisterNativesABaseAmmo(); \
	friend struct Z_Construct_UClass_ABaseAmmo_Statics; \
public: \
	DECLARE_CLASS(ABaseAmmo, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(ABaseAmmo)


#define Helation_Source_FPSGame_BaseAmmo_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseAmmo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseAmmo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseAmmo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseAmmo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseAmmo(ABaseAmmo&&); \
	NO_API ABaseAmmo(const ABaseAmmo&); \
public:


#define Helation_Source_FPSGame_BaseAmmo_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseAmmo(ABaseAmmo&&); \
	NO_API ABaseAmmo(const ABaseAmmo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseAmmo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseAmmo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseAmmo)


#define Helation_Source_FPSGame_BaseAmmo_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ammoAmount() { return STRUCT_OFFSET(ABaseAmmo, ammoAmount); } \
	FORCEINLINE static uint32 __PPO__ammoType() { return STRUCT_OFFSET(ABaseAmmo, ammoType); }


#define Helation_Source_FPSGame_BaseAmmo_h_16_PROLOG
#define Helation_Source_FPSGame_BaseAmmo_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Helation_Source_FPSGame_BaseAmmo_h_19_PRIVATE_PROPERTY_OFFSET \
	Helation_Source_FPSGame_BaseAmmo_h_19_SPARSE_DATA \
	Helation_Source_FPSGame_BaseAmmo_h_19_RPC_WRAPPERS \
	Helation_Source_FPSGame_BaseAmmo_h_19_INCLASS \
	Helation_Source_FPSGame_BaseAmmo_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Helation_Source_FPSGame_BaseAmmo_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Helation_Source_FPSGame_BaseAmmo_h_19_PRIVATE_PROPERTY_OFFSET \
	Helation_Source_FPSGame_BaseAmmo_h_19_SPARSE_DATA \
	Helation_Source_FPSGame_BaseAmmo_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Helation_Source_FPSGame_BaseAmmo_h_19_INCLASS_NO_PURE_DECLS \
	Helation_Source_FPSGame_BaseAmmo_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class ABaseAmmo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Helation_Source_FPSGame_BaseAmmo_h


#define FOREACH_ENUM_EAMMOTYPE(op) \
	op(EAmmoType::E_AssaultRifle) \
	op(EAmmoType::E_Pistol) \
	op(EAmmoType::E_SniperRifle) \
	op(EAmmoType::E_Shotgun) 

enum class EAmmoType : uint8;
template<> FPSGAME_API UEnum* StaticEnum<EAmmoType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
