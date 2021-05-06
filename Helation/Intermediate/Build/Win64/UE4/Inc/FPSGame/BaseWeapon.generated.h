// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSGAME_BaseWeapon_generated_h
#error "BaseWeapon.generated.h already included, missing '#pragma once' in BaseWeapon.h"
#endif
#define FPSGAME_BaseWeapon_generated_h

#define Helation_Source_FPSGame_BaseWeapon_h_18_SPARSE_DATA
#define Helation_Source_FPSGame_BaseWeapon_h_18_RPC_WRAPPERS
#define Helation_Source_FPSGame_BaseWeapon_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Helation_Source_FPSGame_BaseWeapon_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseWeapon(); \
	friend struct Z_Construct_UClass_ABaseWeapon_Statics; \
public: \
	DECLARE_CLASS(ABaseWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(ABaseWeapon)


#define Helation_Source_FPSGame_BaseWeapon_h_18_INCLASS \
private: \
	static void StaticRegisterNativesABaseWeapon(); \
	friend struct Z_Construct_UClass_ABaseWeapon_Statics; \
public: \
	DECLARE_CLASS(ABaseWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(ABaseWeapon)


#define Helation_Source_FPSGame_BaseWeapon_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseWeapon(ABaseWeapon&&); \
	NO_API ABaseWeapon(const ABaseWeapon&); \
public:


#define Helation_Source_FPSGame_BaseWeapon_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseWeapon(ABaseWeapon&&); \
	NO_API ABaseWeapon(const ABaseWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseWeapon)


#define Helation_Source_FPSGame_BaseWeapon_h_18_PRIVATE_PROPERTY_OFFSET
#define Helation_Source_FPSGame_BaseWeapon_h_15_PROLOG
#define Helation_Source_FPSGame_BaseWeapon_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Helation_Source_FPSGame_BaseWeapon_h_18_PRIVATE_PROPERTY_OFFSET \
	Helation_Source_FPSGame_BaseWeapon_h_18_SPARSE_DATA \
	Helation_Source_FPSGame_BaseWeapon_h_18_RPC_WRAPPERS \
	Helation_Source_FPSGame_BaseWeapon_h_18_INCLASS \
	Helation_Source_FPSGame_BaseWeapon_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Helation_Source_FPSGame_BaseWeapon_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Helation_Source_FPSGame_BaseWeapon_h_18_PRIVATE_PROPERTY_OFFSET \
	Helation_Source_FPSGame_BaseWeapon_h_18_SPARSE_DATA \
	Helation_Source_FPSGame_BaseWeapon_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Helation_Source_FPSGame_BaseWeapon_h_18_INCLASS_NO_PURE_DECLS \
	Helation_Source_FPSGame_BaseWeapon_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class ABaseWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Helation_Source_FPSGame_BaseWeapon_h


#define FOREACH_ENUM_EWEAPONTYPE(op) \
	op(EWeaponType::E_AssaultRifle) \
	op(EWeaponType::E_Pistol) \
	op(EWeaponType::E_SniperRifle) \
	op(EWeaponType::E_Shotgun) 

enum class EWeaponType : uint8;
template<> FPSGAME_API UEnum* StaticEnum<EWeaponType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
