// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/FPSGameCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSGameCharacter() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_AFPSGameCharacter_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AFPSGameCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_FPSGame();
	FPSGAME_API UEnum* Z_Construct_UEnum_FPSGame_EAmmoType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AFPSGameProjectile_NoRegister();
	FPSGAME_API UEnum* Z_Construct_UEnum_FPSGame_EWeaponType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_ABaseWeapon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFPSGameCharacter::execDoAddAllWeapons)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DoAddAllWeapons();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSGameCharacter::execSwitchToSpecificWeapon)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_passedIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchToSpecificWeapon(Z_Param_passedIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSGameCharacter::execDoUnControlTheMouse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DoUnControlTheMouse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSGameCharacter::execAddGrenades)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddGrenades();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSGameCharacter::execGrenadeSpawn)
	{
		P_GET_OBJECT(UClass,Z_Param_nade);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GrenadeSpawn(Z_Param_nade);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSGameCharacter::execMeleeSpawn)
	{
		P_GET_OBJECT(UClass,Z_Param_meleeProj);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MeleeSpawn(Z_Param_meleeProj);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSGameCharacter::execAddAmmo)
	{
		P_GET_ENUM(EAmmoType,Z_Param__ammoType);
		P_GET_PROPERTY(FIntProperty,Z_Param__ammoAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAmmo(EAmmoType(Z_Param__ammoType),Z_Param__ammoAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSGameCharacter::execisFullHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->isFullHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSGameCharacter::execSetNewSpawnLoc)
	{
		P_GET_STRUCT(FVector,Z_Param_newLoc);
		P_GET_STRUCT(FRotator,Z_Param_newRot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNewSpawnLoc(Z_Param_newLoc,Z_Param_newRot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSGameCharacter::execRespawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Respawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSGameCharacter::execDie)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Die();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSGameCharacter::execTakeDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_damageAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeDamage(Z_Param_damageAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSGameCharacter::execRegenHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegenHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSGameCharacter::execSwitchToNewPrimaryWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchToNewPrimaryWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSGameCharacter::execSwitchToNextPrimaryWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchToNextPrimaryWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSGameCharacter::execEndCrouch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndCrouch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSGameCharacter::execReloadWeaponAmmoAdded)
	{
		P_GET_ENUM(EWeaponType,Z_Param__weaponType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReloadWeaponAmmoAdded(EWeaponType(Z_Param__weaponType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSGameCharacter::execStopZoom)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopZoom();
		P_NATIVE_END;
	}
	static FName NAME_AFPSGameCharacter_AddAllWeapons = FName(TEXT("AddAllWeapons"));
	void AFPSGameCharacter::AddAllWeapons()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSGameCharacter_AddAllWeapons),NULL);
	}
	static FName NAME_AFPSGameCharacter_AlterGunSize = FName(TEXT("AlterGunSize"));
	void AFPSGameCharacter::AlterGunSize()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSGameCharacter_AlterGunSize),NULL);
	}
	static FName NAME_AFPSGameCharacter_AmmoCounterFlashRed = FName(TEXT("AmmoCounterFlashRed"));
	void AFPSGameCharacter::AmmoCounterFlashRed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSGameCharacter_AmmoCounterFlashRed),NULL);
	}
	static FName NAME_AFPSGameCharacter_ControlTheMouse = FName(TEXT("ControlTheMouse"));
	void AFPSGameCharacter::ControlTheMouse()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSGameCharacter_ControlTheMouse),NULL);
	}
	static FName NAME_AFPSGameCharacter_DamageShake = FName(TEXT("DamageShake"));
	void AFPSGameCharacter::DamageShake()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSGameCharacter_DamageShake),NULL);
	}
	static FName NAME_AFPSGameCharacter_GrenadeAttack = FName(TEXT("GrenadeAttack"));
	void AFPSGameCharacter::GrenadeAttack()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSGameCharacter_GrenadeAttack),NULL);
	}
	static FName NAME_AFPSGameCharacter_MeleeAttack = FName(TEXT("MeleeAttack"));
	void AFPSGameCharacter::MeleeAttack()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSGameCharacter_MeleeAttack),NULL);
	}
	static FName NAME_AFPSGameCharacter_MuzzleFlash = FName(TEXT("MuzzleFlash"));
	void AFPSGameCharacter::MuzzleFlash()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSGameCharacter_MuzzleFlash),NULL);
	}
	static FName NAME_AFPSGameCharacter_PlayerDeath = FName(TEXT("PlayerDeath"));
	void AFPSGameCharacter::PlayerDeath()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSGameCharacter_PlayerDeath),NULL);
	}
	static FName NAME_AFPSGameCharacter_ReloadAnim = FName(TEXT("ReloadAnim"));
	void AFPSGameCharacter::ReloadAnim()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSGameCharacter_ReloadAnim),NULL);
	}
	static FName NAME_AFPSGameCharacter_StartHealingSFX = FName(TEXT("StartHealingSFX"));
	void AFPSGameCharacter::StartHealingSFX()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSGameCharacter_StartHealingSFX),NULL);
	}
	static FName NAME_AFPSGameCharacter_StopHealingSFX = FName(TEXT("StopHealingSFX"));
	void AFPSGameCharacter::StopHealingSFX()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSGameCharacter_StopHealingSFX),NULL);
	}
	static FName NAME_AFPSGameCharacter_SwitchWeaponMesh = FName(TEXT("SwitchWeaponMesh"));
	void AFPSGameCharacter::SwitchWeaponMesh(int32 _index)
	{
		FPSGameCharacter_eventSwitchWeaponMesh_Parms Parms;
		Parms._index=_index;
		ProcessEvent(FindFunctionChecked(NAME_AFPSGameCharacter_SwitchWeaponMesh),&Parms);
	}
	static FName NAME_AFPSGameCharacter_TraceAThreat = FName(TEXT("TraceAThreat"));
	void AFPSGameCharacter::TraceAThreat()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSGameCharacter_TraceAThreat),NULL);
	}
	static FName NAME_AFPSGameCharacter_TriggerOutOfAmmoPopUp = FName(TEXT("TriggerOutOfAmmoPopUp"));
	void AFPSGameCharacter::TriggerOutOfAmmoPopUp()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSGameCharacter_TriggerOutOfAmmoPopUp),NULL);
	}
	static FName NAME_AFPSGameCharacter_UnControlTheMouse = FName(TEXT("UnControlTheMouse"));
	void AFPSGameCharacter::UnControlTheMouse()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSGameCharacter_UnControlTheMouse),NULL);
	}
	void AFPSGameCharacter::StaticRegisterNativesAFPSGameCharacter()
	{
		UClass* Class = AFPSGameCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAmmo", &AFPSGameCharacter::execAddAmmo },
			{ "AddGrenades", &AFPSGameCharacter::execAddGrenades },
			{ "Die", &AFPSGameCharacter::execDie },
			{ "DoAddAllWeapons", &AFPSGameCharacter::execDoAddAllWeapons },
			{ "DoUnControlTheMouse", &AFPSGameCharacter::execDoUnControlTheMouse },
			{ "EndCrouch", &AFPSGameCharacter::execEndCrouch },
			{ "GrenadeSpawn", &AFPSGameCharacter::execGrenadeSpawn },
			{ "isFullHealth", &AFPSGameCharacter::execisFullHealth },
			{ "MeleeSpawn", &AFPSGameCharacter::execMeleeSpawn },
			{ "RegenHealth", &AFPSGameCharacter::execRegenHealth },
			{ "ReloadWeaponAmmoAdded", &AFPSGameCharacter::execReloadWeaponAmmoAdded },
			{ "Respawn", &AFPSGameCharacter::execRespawn },
			{ "SetNewSpawnLoc", &AFPSGameCharacter::execSetNewSpawnLoc },
			{ "StopZoom", &AFPSGameCharacter::execStopZoom },
			{ "SwitchToNewPrimaryWeapon", &AFPSGameCharacter::execSwitchToNewPrimaryWeapon },
			{ "SwitchToNextPrimaryWeapon", &AFPSGameCharacter::execSwitchToNextPrimaryWeapon },
			{ "SwitchToSpecificWeapon", &AFPSGameCharacter::execSwitchToSpecificWeapon },
			{ "TakeDamage", &AFPSGameCharacter::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSGameCharacter_AddAllWeapons_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameCharacter_AddAllWeapons_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameCharacter_AddAllWeapons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameCharacter, nullptr, "AddAllWeapons", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameCharacter_AddAllWeapons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_AddAllWeapons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameCharacter_AddAllWeapons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameCharacter_AddAllWeapons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSGameCharacter_AddAmmo_Statics
	{
		struct FPSGameCharacter_eventAddAmmo_Parms
		{
			EAmmoType _ammoType;
			int32 _ammoAmount;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp__ammoAmount;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__ammoType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__ammoType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFPSGameCharacter_AddAmmo_Statics::NewProp__ammoAmount = { "_ammoAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSGameCharacter_eventAddAmmo_Parms, _ammoAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFPSGameCharacter_AddAmmo_Statics::NewProp__ammoType = { "_ammoType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSGameCharacter_eventAddAmmo_Parms, _ammoType), Z_Construct_UEnum_FPSGame_EAmmoType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFPSGameCharacter_AddAmmo_Statics::NewProp__ammoType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSGameCharacter_AddAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGameCharacter_AddAmmo_Statics::NewProp__ammoAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGameCharacter_AddAmmo_Statics::NewProp__ammoType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGameCharacter_AddAmmo_Statics::NewProp__ammoType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameCharacter_AddAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameCharacter_AddAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameCharacter, nullptr, "AddAmmo", nullptr, nullptr, sizeof(FPSGameCharacter_eventAddAmmo_Parms), Z_Construct_UFunction_AFPSGameCharacter_AddAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_AddAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameCharacter_AddAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_AddAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameCharacter_AddAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameCharacter_AddAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSGameCharacter_AddGrenades_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameCharacter_AddGrenades_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameCharacter_AddGrenades_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameCharacter, nullptr, "AddGrenades", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameCharacter_AddGrenades_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_AddGrenades_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameCharacter_AddGrenades()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameCharacter_AddGrenades_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSGameCharacter_AlterGunSize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameCharacter_AlterGunSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameCharacter_AlterGunSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameCharacter, nullptr, "AlterGunSize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameCharacter_AlterGunSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_AlterGunSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameCharacter_AlterGunSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameCharacter_AlterGunSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSGameCharacter_AmmoCounterFlashRed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameCharacter_AmmoCounterFlashRed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameCharacter_AmmoCounterFlashRed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameCharacter, nullptr, "AmmoCounterFlashRed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameCharacter_AmmoCounterFlashRed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_AmmoCounterFlashRed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameCharacter_AmmoCounterFlashRed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameCharacter_AmmoCounterFlashRed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSGameCharacter_ControlTheMouse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameCharacter_ControlTheMouse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameCharacter_ControlTheMouse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameCharacter, nullptr, "ControlTheMouse", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameCharacter_ControlTheMouse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_ControlTheMouse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameCharacter_ControlTheMouse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameCharacter_ControlTheMouse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSGameCharacter_DamageShake_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameCharacter_DamageShake_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameCharacter_DamageShake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameCharacter, nullptr, "DamageShake", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameCharacter_DamageShake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_DamageShake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameCharacter_DamageShake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameCharacter_DamageShake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSGameCharacter_Die_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameCharacter_Die_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameCharacter_Die_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameCharacter, nullptr, "Die", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameCharacter_Die_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_Die_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameCharacter_Die()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameCharacter_Die_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSGameCharacter_DoAddAllWeapons_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameCharacter_DoAddAllWeapons_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameCharacter_DoAddAllWeapons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameCharacter, nullptr, "DoAddAllWeapons", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameCharacter_DoAddAllWeapons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_DoAddAllWeapons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameCharacter_DoAddAllWeapons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameCharacter_DoAddAllWeapons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSGameCharacter_DoUnControlTheMouse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameCharacter_DoUnControlTheMouse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameCharacter_DoUnControlTheMouse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameCharacter, nullptr, "DoUnControlTheMouse", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameCharacter_DoUnControlTheMouse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_DoUnControlTheMouse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameCharacter_DoUnControlTheMouse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameCharacter_DoUnControlTheMouse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSGameCharacter_EndCrouch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameCharacter_EndCrouch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameCharacter_EndCrouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameCharacter, nullptr, "EndCrouch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameCharacter_EndCrouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_EndCrouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameCharacter_EndCrouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameCharacter_EndCrouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSGameCharacter_GrenadeAttack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameCharacter_GrenadeAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameCharacter_GrenadeAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameCharacter, nullptr, "GrenadeAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameCharacter_GrenadeAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_GrenadeAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameCharacter_GrenadeAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameCharacter_GrenadeAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSGameCharacter_GrenadeSpawn_Statics
	{
		struct FPSGameCharacter_eventGrenadeSpawn_Parms
		{
			TSubclassOf<AActor>  nade;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_nade;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFPSGameCharacter_GrenadeSpawn_Statics::NewProp_nade = { "nade", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSGameCharacter_eventGrenadeSpawn_Parms, nade), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSGameCharacter_GrenadeSpawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGameCharacter_GrenadeSpawn_Statics::NewProp_nade,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameCharacter_GrenadeSpawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameCharacter_GrenadeSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameCharacter, nullptr, "GrenadeSpawn", nullptr, nullptr, sizeof(FPSGameCharacter_eventGrenadeSpawn_Parms), Z_Construct_UFunction_AFPSGameCharacter_GrenadeSpawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_GrenadeSpawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameCharacter_GrenadeSpawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_GrenadeSpawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameCharacter_GrenadeSpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameCharacter_GrenadeSpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSGameCharacter_isFullHealth_Statics
	{
		struct FPSGameCharacter_eventisFullHealth_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSGameCharacter_isFullHealth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSGameCharacter_eventisFullHealth_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSGameCharacter_isFullHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSGameCharacter_eventisFullHealth_Parms), &Z_Construct_UFunction_AFPSGameCharacter_isFullHealth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSGameCharacter_isFullHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGameCharacter_isFullHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameCharacter_isFullHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameCharacter_isFullHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameCharacter, nullptr, "isFullHealth", nullptr, nullptr, sizeof(FPSGameCharacter_eventisFullHealth_Parms), Z_Construct_UFunction_AFPSGameCharacter_isFullHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_isFullHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameCharacter_isFullHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_isFullHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameCharacter_isFullHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameCharacter_isFullHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSGameCharacter_MeleeAttack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameCharacter_MeleeAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameCharacter_MeleeAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameCharacter, nullptr, "MeleeAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameCharacter_MeleeAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_MeleeAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameCharacter_MeleeAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameCharacter_MeleeAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSGameCharacter_MeleeSpawn_Statics
	{
		struct FPSGameCharacter_eventMeleeSpawn_Parms
		{
			TSubclassOf<AFPSGameProjectile>  meleeProj;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_meleeProj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFPSGameCharacter_MeleeSpawn_Statics::NewProp_meleeProj = { "meleeProj", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSGameCharacter_eventMeleeSpawn_Parms, meleeProj), Z_Construct_UClass_AFPSGameProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSGameCharacter_MeleeSpawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGameCharacter_MeleeSpawn_Statics::NewProp_meleeProj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameCharacter_MeleeSpawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameCharacter_MeleeSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameCharacter, nullptr, "MeleeSpawn", nullptr, nullptr, sizeof(FPSGameCharacter_eventMeleeSpawn_Parms), Z_Construct_UFunction_AFPSGameCharacter_MeleeSpawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_MeleeSpawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameCharacter_MeleeSpawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_MeleeSpawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameCharacter_MeleeSpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameCharacter_MeleeSpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSGameCharacter_MuzzleFlash_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameCharacter_MuzzleFlash_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameCharacter_MuzzleFlash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameCharacter, nullptr, "MuzzleFlash", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameCharacter_MuzzleFlash_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_MuzzleFlash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameCharacter_MuzzleFlash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameCharacter_MuzzleFlash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSGameCharacter_PlayerDeath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameCharacter_PlayerDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameCharacter_PlayerDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameCharacter, nullptr, "PlayerDeath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameCharacter_PlayerDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_PlayerDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameCharacter_PlayerDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameCharacter_PlayerDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSGameCharacter_RegenHealth_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameCharacter_RegenHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameCharacter_RegenHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameCharacter, nullptr, "RegenHealth", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameCharacter_RegenHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_RegenHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameCharacter_RegenHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameCharacter_RegenHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSGameCharacter_ReloadAnim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameCharacter_ReloadAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameCharacter_ReloadAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameCharacter, nullptr, "ReloadAnim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameCharacter_ReloadAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_ReloadAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameCharacter_ReloadAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameCharacter_ReloadAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSGameCharacter_ReloadWeaponAmmoAdded_Statics
	{
		struct FPSGameCharacter_eventReloadWeaponAmmoAdded_Parms
		{
			EWeaponType _weaponType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__weaponType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__weaponType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFPSGameCharacter_ReloadWeaponAmmoAdded_Statics::NewProp__weaponType = { "_weaponType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSGameCharacter_eventReloadWeaponAmmoAdded_Parms, _weaponType), Z_Construct_UEnum_FPSGame_EWeaponType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFPSGameCharacter_ReloadWeaponAmmoAdded_Statics::NewProp__weaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSGameCharacter_ReloadWeaponAmmoAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGameCharacter_ReloadWeaponAmmoAdded_Statics::NewProp__weaponType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGameCharacter_ReloadWeaponAmmoAdded_Statics::NewProp__weaponType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameCharacter_ReloadWeaponAmmoAdded_Statics::Function_MetaDataParams[] = {
		{ "Category", "weapon" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameCharacter_ReloadWeaponAmmoAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameCharacter, nullptr, "ReloadWeaponAmmoAdded", nullptr, nullptr, sizeof(FPSGameCharacter_eventReloadWeaponAmmoAdded_Parms), Z_Construct_UFunction_AFPSGameCharacter_ReloadWeaponAmmoAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_ReloadWeaponAmmoAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameCharacter_ReloadWeaponAmmoAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_ReloadWeaponAmmoAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameCharacter_ReloadWeaponAmmoAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameCharacter_ReloadWeaponAmmoAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSGameCharacter_Respawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameCharacter_Respawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameCharacter_Respawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameCharacter, nullptr, "Respawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameCharacter_Respawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_Respawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameCharacter_Respawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameCharacter_Respawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSGameCharacter_SetNewSpawnLoc_Statics
	{
		struct FPSGameCharacter_eventSetNewSpawnLoc_Parms
		{
			FVector newLoc;
			FRotator newRot;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newRot;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newLoc;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSGameCharacter_SetNewSpawnLoc_Statics::NewProp_newRot = { "newRot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSGameCharacter_eventSetNewSpawnLoc_Parms, newRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSGameCharacter_SetNewSpawnLoc_Statics::NewProp_newLoc = { "newLoc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSGameCharacter_eventSetNewSpawnLoc_Parms, newLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSGameCharacter_SetNewSpawnLoc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGameCharacter_SetNewSpawnLoc_Statics::NewProp_newRot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGameCharacter_SetNewSpawnLoc_Statics::NewProp_newLoc,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameCharacter_SetNewSpawnLoc_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameCharacter_SetNewSpawnLoc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameCharacter, nullptr, "SetNewSpawnLoc", nullptr, nullptr, sizeof(FPSGameCharacter_eventSetNewSpawnLoc_Parms), Z_Construct_UFunction_AFPSGameCharacter_SetNewSpawnLoc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_SetNewSpawnLoc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameCharacter_SetNewSpawnLoc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_SetNewSpawnLoc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameCharacter_SetNewSpawnLoc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameCharacter_SetNewSpawnLoc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSGameCharacter_StartHealingSFX_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameCharacter_StartHealingSFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameCharacter_StartHealingSFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameCharacter, nullptr, "StartHealingSFX", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameCharacter_StartHealingSFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_StartHealingSFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameCharacter_StartHealingSFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameCharacter_StartHealingSFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSGameCharacter_StopHealingSFX_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameCharacter_StopHealingSFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameCharacter_StopHealingSFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameCharacter, nullptr, "StopHealingSFX", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameCharacter_StopHealingSFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_StopHealingSFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameCharacter_StopHealingSFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameCharacter_StopHealingSFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSGameCharacter_StopZoom_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameCharacter_StopZoom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameCharacter_StopZoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameCharacter, nullptr, "StopZoom", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameCharacter_StopZoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_StopZoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameCharacter_StopZoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameCharacter_StopZoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSGameCharacter_SwitchToNewPrimaryWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameCharacter_SwitchToNewPrimaryWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "weapon" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameCharacter_SwitchToNewPrimaryWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameCharacter, nullptr, "SwitchToNewPrimaryWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameCharacter_SwitchToNewPrimaryWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_SwitchToNewPrimaryWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameCharacter_SwitchToNewPrimaryWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameCharacter_SwitchToNewPrimaryWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSGameCharacter_SwitchToNextPrimaryWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameCharacter_SwitchToNextPrimaryWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "weapon" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameCharacter_SwitchToNextPrimaryWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameCharacter, nullptr, "SwitchToNextPrimaryWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameCharacter_SwitchToNextPrimaryWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_SwitchToNextPrimaryWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameCharacter_SwitchToNextPrimaryWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameCharacter_SwitchToNextPrimaryWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSGameCharacter_SwitchToSpecificWeapon_Statics
	{
		struct FPSGameCharacter_eventSwitchToSpecificWeapon_Parms
		{
			int32 passedIndex;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_passedIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFPSGameCharacter_SwitchToSpecificWeapon_Statics::NewProp_passedIndex = { "passedIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSGameCharacter_eventSwitchToSpecificWeapon_Parms, passedIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSGameCharacter_SwitchToSpecificWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGameCharacter_SwitchToSpecificWeapon_Statics::NewProp_passedIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameCharacter_SwitchToSpecificWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameCharacter_SwitchToSpecificWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameCharacter, nullptr, "SwitchToSpecificWeapon", nullptr, nullptr, sizeof(FPSGameCharacter_eventSwitchToSpecificWeapon_Parms), Z_Construct_UFunction_AFPSGameCharacter_SwitchToSpecificWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_SwitchToSpecificWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameCharacter_SwitchToSpecificWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_SwitchToSpecificWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameCharacter_SwitchToSpecificWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameCharacter_SwitchToSpecificWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSGameCharacter_SwitchWeaponMesh_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp__index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFPSGameCharacter_SwitchWeaponMesh_Statics::NewProp__index = { "_index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSGameCharacter_eventSwitchWeaponMesh_Parms, _index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSGameCharacter_SwitchWeaponMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGameCharacter_SwitchWeaponMesh_Statics::NewProp__index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameCharacter_SwitchWeaponMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameCharacter_SwitchWeaponMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameCharacter, nullptr, "SwitchWeaponMesh", nullptr, nullptr, sizeof(FPSGameCharacter_eventSwitchWeaponMesh_Parms), Z_Construct_UFunction_AFPSGameCharacter_SwitchWeaponMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_SwitchWeaponMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameCharacter_SwitchWeaponMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_SwitchWeaponMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameCharacter_SwitchWeaponMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameCharacter_SwitchWeaponMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSGameCharacter_TakeDamage_Statics
	{
		struct FPSGameCharacter_eventTakeDamage_Parms
		{
			float damageAmount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damageAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSGameCharacter_TakeDamage_Statics::NewProp_damageAmount = { "damageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSGameCharacter_eventTakeDamage_Parms, damageAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSGameCharacter_TakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGameCharacter_TakeDamage_Statics::NewProp_damageAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameCharacter_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Not using this at the moment \n" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
		{ "ToolTip", "Not using this at the moment" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameCharacter_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameCharacter, nullptr, "TakeDamage", nullptr, nullptr, sizeof(FPSGameCharacter_eventTakeDamage_Parms), Z_Construct_UFunction_AFPSGameCharacter_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_TakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameCharacter_TakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameCharacter_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameCharacter_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSGameCharacter_TraceAThreat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameCharacter_TraceAThreat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameCharacter_TraceAThreat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameCharacter, nullptr, "TraceAThreat", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameCharacter_TraceAThreat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_TraceAThreat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameCharacter_TraceAThreat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameCharacter_TraceAThreat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSGameCharacter_TriggerOutOfAmmoPopUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameCharacter_TriggerOutOfAmmoPopUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameCharacter_TriggerOutOfAmmoPopUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameCharacter, nullptr, "TriggerOutOfAmmoPopUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameCharacter_TriggerOutOfAmmoPopUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_TriggerOutOfAmmoPopUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameCharacter_TriggerOutOfAmmoPopUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameCharacter_TriggerOutOfAmmoPopUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSGameCharacter_UnControlTheMouse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameCharacter_UnControlTheMouse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameCharacter_UnControlTheMouse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameCharacter, nullptr, "UnControlTheMouse", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameCharacter_UnControlTheMouse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameCharacter_UnControlTheMouse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameCharacter_UnControlTheMouse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameCharacter_UnControlTheMouse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSGameCharacter_NoRegister()
	{
		return AFPSGameCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFPSGameCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isCrouching_MetaData[];
#endif
		static void NewProp_isCrouching_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isCrouching;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_grenadeStash_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_grenadeStash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxGrenades_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_maxGrenades;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isTossingGrenade_MetaData[];
#endif
		static void NewProp_isTossingGrenade_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isTossingGrenade;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_grenade_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_grenade;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isMeleeing_MetaData[];
#endif
		static void NewProp_isMeleeing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isMeleeing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_meleeSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_meleeSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_unZoomSFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_unZoomSFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_zoom10xSFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_zoom10xSFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_zoom5xSFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_zoom5xSFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ableToGrenade_MetaData[];
#endif
		static void NewProp_ableToGrenade_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ableToGrenade;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ableToMelee_MetaData[];
#endif
		static void NewProp_ableToMelee_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ableToMelee;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ableToZoom_MetaData[];
#endif
		static void NewProp_ableToZoom_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ableToZoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ableToFire_MetaData[];
#endif
		static void NewProp_ableToFire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ableToFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ableToReload_MetaData[];
#endif
		static void NewProp_ableToReload_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ableToReload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_curZoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_curZoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_reloadSFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_reloadSFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_outOfAmmoSFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_outOfAmmoSFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weaponSwitched_MetaData[];
#endif
		static void NewProp_weaponSwitched_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_weaponSwitched;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ableToSwitchWeapon_MetaData[];
#endif
		static void NewProp_ableToSwitchWeapon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ableToSwitchWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxShotgunAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_maxShotgunAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxSniperAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_maxSniperAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxPistolAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_maxPistolAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxAssaultAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_maxAssaultAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weaponsSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_weaponsSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_reloadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_reloadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_readyToFire_MetaData[];
#endif
		static void NewProp_readyToFire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_readyToFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isShooting_MetaData[];
#endif
		static void NewProp_isShooting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isShooting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shotgunObtained_MetaData[];
#endif
		static void NewProp_shotgunObtained_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_shotgunObtained;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sniperObtained_MetaData[];
#endif
		static void NewProp_sniperObtained_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_sniperObtained;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pistolObtained_MetaData[];
#endif
		static void NewProp_pistolObtained_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_pistolObtained;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_assaultObtained_MetaData[];
#endif
		static void NewProp_assaultObtained_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_assaultObtained;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weaponIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_weaponIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weapons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_weapons;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_weapons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shotgunAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_shotgunAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sniperRifleAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_sniperRifleAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pistolAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_pistolAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_assaultRifleAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_assaultRifleAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stopLooping_MetaData[];
#endif
		static void NewProp_stopLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_stopLooping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_healing_MetaData[];
#endif
		static void NewProp_healing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_healing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_healAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_healAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_healWait_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_healWait;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_healTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_healTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_healDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_healDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isFirstLife_MetaData[];
#endif
		static void NewProp_isFirstLife_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isFirstLife;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_justDamaged_MetaData[];
#endif
		static void NewProp_justDamaged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_justDamaged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_justDied_MetaData[];
#endif
		static void NewProp_justDied_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_justDied;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isSameLoc_MetaData[];
#endif
		static void NewProp_isSameLoc_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSameLoc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hudMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_hudMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_messageAppear_MetaData[];
#endif
		static void NewProp_messageAppear_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_messageAppear;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_respawnRot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_respawnRot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_respawnLoc_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_respawnLoc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isDead_MetaData[];
#endif
		static void NewProp_isDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ability2CooldownTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ability2CooldownTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ability1CooldownTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ability1CooldownTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasUsedAbility2_MetaData[];
#endif
		static void NewProp_hasUsedAbility2_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasUsedAbility2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasUsedAbility1_MetaData[];
#endif
		static void NewProp_hasUsedAbility1_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasUsedAbility1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_weapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isZoomedIn_MetaData[];
#endif
		static void NewProp_isZoomedIn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isZoomedIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isSprinting_MetaData[];
#endif
		static void NewProp_isSprinting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSprinting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsingMotionControllers_MetaData[];
#endif
		static void NewProp_bUsingMotionControllers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsingMotionControllers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_healSFXisPlaying_MetaData[];
#endif
		static void NewProp_healSFXisPlaying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_healSFXisPlaying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_healSFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_healSFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_landSFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_landSFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jumpSFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_jumpSFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_grenadeThrowSFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_grenadeThrowSFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_switchWeaponSFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_switchWeaponSFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shotgunSFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_shotgunSFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sniperSFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sniperSFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_assaultSFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_assaultSFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pistolSFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pistolSFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_L_MotionController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_L_MotionController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_R_MotionController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_R_MotionController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VR_MuzzleLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VR_MuzzleLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VR_Gun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VR_Gun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FP_MuzzleLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FP_MuzzleLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FP_Gun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FP_Gun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSGameCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSGameCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSGameCharacter_AddAllWeapons, "AddAllWeapons" }, // 1750426266
		{ &Z_Construct_UFunction_AFPSGameCharacter_AddAmmo, "AddAmmo" }, // 3215052919
		{ &Z_Construct_UFunction_AFPSGameCharacter_AddGrenades, "AddGrenades" }, // 3332063591
		{ &Z_Construct_UFunction_AFPSGameCharacter_AlterGunSize, "AlterGunSize" }, // 58281600
		{ &Z_Construct_UFunction_AFPSGameCharacter_AmmoCounterFlashRed, "AmmoCounterFlashRed" }, // 1137345515
		{ &Z_Construct_UFunction_AFPSGameCharacter_ControlTheMouse, "ControlTheMouse" }, // 672775352
		{ &Z_Construct_UFunction_AFPSGameCharacter_DamageShake, "DamageShake" }, // 3792495514
		{ &Z_Construct_UFunction_AFPSGameCharacter_Die, "Die" }, // 2184620669
		{ &Z_Construct_UFunction_AFPSGameCharacter_DoAddAllWeapons, "DoAddAllWeapons" }, // 5008905
		{ &Z_Construct_UFunction_AFPSGameCharacter_DoUnControlTheMouse, "DoUnControlTheMouse" }, // 3015594462
		{ &Z_Construct_UFunction_AFPSGameCharacter_EndCrouch, "EndCrouch" }, // 2745673402
		{ &Z_Construct_UFunction_AFPSGameCharacter_GrenadeAttack, "GrenadeAttack" }, // 558325185
		{ &Z_Construct_UFunction_AFPSGameCharacter_GrenadeSpawn, "GrenadeSpawn" }, // 2472682140
		{ &Z_Construct_UFunction_AFPSGameCharacter_isFullHealth, "isFullHealth" }, // 1969719830
		{ &Z_Construct_UFunction_AFPSGameCharacter_MeleeAttack, "MeleeAttack" }, // 1673252236
		{ &Z_Construct_UFunction_AFPSGameCharacter_MeleeSpawn, "MeleeSpawn" }, // 38635410
		{ &Z_Construct_UFunction_AFPSGameCharacter_MuzzleFlash, "MuzzleFlash" }, // 78165204
		{ &Z_Construct_UFunction_AFPSGameCharacter_PlayerDeath, "PlayerDeath" }, // 4097728324
		{ &Z_Construct_UFunction_AFPSGameCharacter_RegenHealth, "RegenHealth" }, // 3842945780
		{ &Z_Construct_UFunction_AFPSGameCharacter_ReloadAnim, "ReloadAnim" }, // 1065729669
		{ &Z_Construct_UFunction_AFPSGameCharacter_ReloadWeaponAmmoAdded, "ReloadWeaponAmmoAdded" }, // 3594854887
		{ &Z_Construct_UFunction_AFPSGameCharacter_Respawn, "Respawn" }, // 1806081932
		{ &Z_Construct_UFunction_AFPSGameCharacter_SetNewSpawnLoc, "SetNewSpawnLoc" }, // 1105838588
		{ &Z_Construct_UFunction_AFPSGameCharacter_StartHealingSFX, "StartHealingSFX" }, // 3777806454
		{ &Z_Construct_UFunction_AFPSGameCharacter_StopHealingSFX, "StopHealingSFX" }, // 3085940764
		{ &Z_Construct_UFunction_AFPSGameCharacter_StopZoom, "StopZoom" }, // 2974929733
		{ &Z_Construct_UFunction_AFPSGameCharacter_SwitchToNewPrimaryWeapon, "SwitchToNewPrimaryWeapon" }, // 1852195270
		{ &Z_Construct_UFunction_AFPSGameCharacter_SwitchToNextPrimaryWeapon, "SwitchToNextPrimaryWeapon" }, // 3144160846
		{ &Z_Construct_UFunction_AFPSGameCharacter_SwitchToSpecificWeapon, "SwitchToSpecificWeapon" }, // 1878113199
		{ &Z_Construct_UFunction_AFPSGameCharacter_SwitchWeaponMesh, "SwitchWeaponMesh" }, // 2182500209
		{ &Z_Construct_UFunction_AFPSGameCharacter_TakeDamage, "TakeDamage" }, // 441984064
		{ &Z_Construct_UFunction_AFPSGameCharacter_TraceAThreat, "TraceAThreat" }, // 3391271130
		{ &Z_Construct_UFunction_AFPSGameCharacter_TriggerOutOfAmmoPopUp, "TriggerOutOfAmmoPopUp" }, // 1676126757
		{ &Z_Construct_UFunction_AFPSGameCharacter_UnControlTheMouse, "UnControlTheMouse" }, // 244878552
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FPSGameCharacter.h" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isCrouching_MetaData[] = {
		{ "Category", "FPSGameCharacter" },
		{ "Comment", "// Miscellaneous \n" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
		{ "ToolTip", "Miscellaneous" },
	};
#endif
	void Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isCrouching_SetBit(void* Obj)
	{
		((AFPSGameCharacter*)Obj)->isCrouching = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isCrouching = { "isCrouching", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSGameCharacter), &Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isCrouching_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isCrouching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isCrouching_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_grenadeStash_MetaData[] = {
		{ "Category", "Grenades" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_grenadeStash = { "grenadeStash", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, grenadeStash), METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_grenadeStash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_grenadeStash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_maxGrenades_MetaData[] = {
		{ "Category", "Grenades" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_maxGrenades = { "maxGrenades", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, maxGrenades), METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_maxGrenades_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_maxGrenades_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isTossingGrenade_MetaData[] = {
		{ "Category", "Grenades" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isTossingGrenade_SetBit(void* Obj)
	{
		((AFPSGameCharacter*)Obj)->isTossingGrenade = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isTossingGrenade = { "isTossingGrenade", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSGameCharacter), &Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isTossingGrenade_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isTossingGrenade_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isTossingGrenade_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_grenade_MetaData[] = {
		{ "Category", "FPSGameCharacter" },
		{ "Comment", "// Grenade Stuff \n" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
		{ "ToolTip", "Grenade Stuff" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_grenade = { "grenade", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, grenade), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_grenade_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_grenade_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isMeleeing_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isMeleeing_SetBit(void* Obj)
	{
		((AFPSGameCharacter*)Obj)->isMeleeing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isMeleeing = { "isMeleeing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSGameCharacter), &Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isMeleeing_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isMeleeing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isMeleeing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_meleeSound_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "// Melee Stuff \n" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
		{ "ToolTip", "Melee Stuff" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_meleeSound = { "meleeSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, meleeSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_meleeSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_meleeSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_unZoomSFX_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_unZoomSFX = { "unZoomSFX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, unZoomSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_unZoomSFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_unZoomSFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_zoom10xSFX_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_zoom10xSFX = { "zoom10xSFX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, zoom10xSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_zoom10xSFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_zoom10xSFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_zoom5xSFX_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_zoom5xSFX = { "zoom5xSFX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, zoom5xSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_zoom5xSFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_zoom5xSFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToGrenade_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToGrenade_SetBit(void* Obj)
	{
		((AFPSGameCharacter*)Obj)->ableToGrenade = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToGrenade = { "ableToGrenade", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSGameCharacter), &Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToGrenade_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToGrenade_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToGrenade_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToMelee_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToMelee_SetBit(void* Obj)
	{
		((AFPSGameCharacter*)Obj)->ableToMelee = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToMelee = { "ableToMelee", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSGameCharacter), &Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToMelee_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToMelee_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToMelee_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToZoom_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToZoom_SetBit(void* Obj)
	{
		((AFPSGameCharacter*)Obj)->ableToZoom = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToZoom = { "ableToZoom", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSGameCharacter), &Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToZoom_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToZoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToZoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToFire_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToFire_SetBit(void* Obj)
	{
		((AFPSGameCharacter*)Obj)->ableToFire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToFire = { "ableToFire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSGameCharacter), &Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToFire_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToReload_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToReload_SetBit(void* Obj)
	{
		((AFPSGameCharacter*)Obj)->ableToReload = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToReload = { "ableToReload", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSGameCharacter), &Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToReload_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToReload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToReload_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_curZoom_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_curZoom = { "curZoom", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, curZoom), METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_curZoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_curZoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_reloadSFX_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_reloadSFX = { "reloadSFX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, reloadSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_reloadSFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_reloadSFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_outOfAmmoSFX_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_outOfAmmoSFX = { "outOfAmmoSFX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, outOfAmmoSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_outOfAmmoSFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_outOfAmmoSFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_weaponSwitched_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_weaponSwitched_SetBit(void* Obj)
	{
		((AFPSGameCharacter*)Obj)->weaponSwitched = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_weaponSwitched = { "weaponSwitched", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSGameCharacter), &Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_weaponSwitched_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_weaponSwitched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_weaponSwitched_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToSwitchWeapon_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToSwitchWeapon_SetBit(void* Obj)
	{
		((AFPSGameCharacter*)Obj)->ableToSwitchWeapon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToSwitchWeapon = { "ableToSwitchWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSGameCharacter), &Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToSwitchWeapon_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToSwitchWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToSwitchWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_maxShotgunAmmo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_maxShotgunAmmo = { "maxShotgunAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, maxShotgunAmmo), METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_maxShotgunAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_maxShotgunAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_maxSniperAmmo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_maxSniperAmmo = { "maxSniperAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, maxSniperAmmo), METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_maxSniperAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_maxSniperAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_maxPistolAmmo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_maxPistolAmmo = { "maxPistolAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, maxPistolAmmo), METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_maxPistolAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_maxPistolAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_maxAssaultAmmo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_maxAssaultAmmo = { "maxAssaultAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, maxAssaultAmmo), METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_maxAssaultAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_maxAssaultAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_weaponsSize_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_weaponsSize = { "weaponsSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, weaponsSize), METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_weaponsSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_weaponsSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_reloadTime_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_reloadTime = { "reloadTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, reloadTime), METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_reloadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_reloadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_readyToFire_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_readyToFire_SetBit(void* Obj)
	{
		((AFPSGameCharacter*)Obj)->readyToFire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_readyToFire = { "readyToFire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSGameCharacter), &Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_readyToFire_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_readyToFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_readyToFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isShooting_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isShooting_SetBit(void* Obj)
	{
		((AFPSGameCharacter*)Obj)->isShooting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isShooting = { "isShooting", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSGameCharacter), &Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isShooting_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isShooting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isShooting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_shotgunObtained_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_shotgunObtained_SetBit(void* Obj)
	{
		((AFPSGameCharacter*)Obj)->shotgunObtained = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_shotgunObtained = { "shotgunObtained", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSGameCharacter), &Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_shotgunObtained_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_shotgunObtained_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_shotgunObtained_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_sniperObtained_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_sniperObtained_SetBit(void* Obj)
	{
		((AFPSGameCharacter*)Obj)->sniperObtained = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_sniperObtained = { "sniperObtained", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSGameCharacter), &Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_sniperObtained_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_sniperObtained_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_sniperObtained_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_pistolObtained_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_pistolObtained_SetBit(void* Obj)
	{
		((AFPSGameCharacter*)Obj)->pistolObtained = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_pistolObtained = { "pistolObtained", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSGameCharacter), &Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_pistolObtained_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_pistolObtained_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_pistolObtained_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_assaultObtained_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "// 0 = Default, 1 = AR, 2 = Pistol, 3 = Sniper, 4 = Shotgun \n" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
		{ "ToolTip", "0 = Default, 1 = AR, 2 = Pistol, 3 = Sniper, 4 = Shotgun" },
	};
#endif
	void Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_assaultObtained_SetBit(void* Obj)
	{
		((AFPSGameCharacter*)Obj)->assaultObtained = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_assaultObtained = { "assaultObtained", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSGameCharacter), &Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_assaultObtained_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_assaultObtained_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_assaultObtained_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_weaponIndex_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_weaponIndex = { "weaponIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, weaponIndex), METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_weaponIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_weaponIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_weapons_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_weapons = { "weapons", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, weapons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_weapons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_weapons_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_weapons_Inner = { "weapons", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABaseWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_shotgunAmmo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_shotgunAmmo = { "shotgunAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, shotgunAmmo), METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_shotgunAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_shotgunAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_sniperRifleAmmo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_sniperRifleAmmo = { "sniperRifleAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, sniperRifleAmmo), METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_sniperRifleAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_sniperRifleAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_pistolAmmo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_pistolAmmo = { "pistolAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, pistolAmmo), METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_pistolAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_pistolAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_assaultRifleAmmo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "// Weapon / Ammo Stuff \n" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
		{ "ToolTip", "Weapon / Ammo Stuff" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_assaultRifleAmmo = { "assaultRifleAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, assaultRifleAmmo), METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_assaultRifleAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_assaultRifleAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_stopLooping_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_stopLooping_SetBit(void* Obj)
	{
		((AFPSGameCharacter*)Obj)->stopLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_stopLooping = { "stopLooping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSGameCharacter), &Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_stopLooping_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_stopLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_stopLooping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_healing_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_healing_SetBit(void* Obj)
	{
		((AFPSGameCharacter*)Obj)->healing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_healing = { "healing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSGameCharacter), &Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_healing_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_healing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_healing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_healAmount_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_healAmount = { "healAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, healAmount), METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_healAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_healAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_healWait_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_healWait = { "healWait", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, healWait), METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_healWait_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_healWait_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_healTime_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_healTime = { "healTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, healTime), METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_healTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_healTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_healDelay_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_healDelay = { "healDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, healDelay), METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_healDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_healDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isFirstLife_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isFirstLife_SetBit(void* Obj)
	{
		((AFPSGameCharacter*)Obj)->isFirstLife = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isFirstLife = { "isFirstLife", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSGameCharacter), &Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isFirstLife_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isFirstLife_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isFirstLife_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_justDamaged_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_justDamaged_SetBit(void* Obj)
	{
		((AFPSGameCharacter*)Obj)->justDamaged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_justDamaged = { "justDamaged", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSGameCharacter), &Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_justDamaged_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_justDamaged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_justDamaged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_justDied_MetaData[] = {
		{ "Category", "Respawn" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_justDied_SetBit(void* Obj)
	{
		((AFPSGameCharacter*)Obj)->justDied = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_justDied = { "justDied", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSGameCharacter), &Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_justDied_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_justDied_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_justDied_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isSameLoc_MetaData[] = {
		{ "Category", "Respawn" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isSameLoc_SetBit(void* Obj)
	{
		((AFPSGameCharacter*)Obj)->isSameLoc = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isSameLoc = { "isSameLoc", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSGameCharacter), &Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isSameLoc_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isSameLoc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isSameLoc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_hudMessage_MetaData[] = {
		{ "Category", "Respawn" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_hudMessage = { "hudMessage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, hudMessage), METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_hudMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_hudMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_messageAppear_MetaData[] = {
		{ "Category", "Respawn" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_messageAppear_SetBit(void* Obj)
	{
		((AFPSGameCharacter*)Obj)->messageAppear = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_messageAppear = { "messageAppear", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSGameCharacter), &Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_messageAppear_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_messageAppear_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_messageAppear_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_respawnRot_MetaData[] = {
		{ "Category", "Respawn" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_respawnRot = { "respawnRot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, respawnRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_respawnRot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_respawnRot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_respawnLoc_MetaData[] = {
		{ "Category", "Respawn" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_respawnLoc = { "respawnLoc", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, respawnLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_respawnLoc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_respawnLoc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_health_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_health = { "health", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, health), METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isDead_MetaData[] = {
		{ "Category", "FPSGameCharacter" },
		{ "Comment", "// Health / Respawn Stuff \n" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
		{ "ToolTip", "Health / Respawn Stuff" },
	};
#endif
	void Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isDead_SetBit(void* Obj)
	{
		((AFPSGameCharacter*)Obj)->isDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isDead = { "isDead", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSGameCharacter), &Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isDead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ability2CooldownTime_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ability2CooldownTime = { "ability2CooldownTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, ability2CooldownTime), METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ability2CooldownTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ability2CooldownTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ability1CooldownTime_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ability1CooldownTime = { "ability1CooldownTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, ability1CooldownTime), METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ability1CooldownTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ability1CooldownTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_hasUsedAbility2_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_hasUsedAbility2_SetBit(void* Obj)
	{
		((AFPSGameCharacter*)Obj)->hasUsedAbility2 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_hasUsedAbility2 = { "hasUsedAbility2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSGameCharacter), &Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_hasUsedAbility2_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_hasUsedAbility2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_hasUsedAbility2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_hasUsedAbility1_MetaData[] = {
		{ "Category", "Abilities" },
		{ "Comment", "// Ability Stuff \n" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
		{ "ToolTip", "Ability Stuff" },
	};
#endif
	void Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_hasUsedAbility1_SetBit(void* Obj)
	{
		((AFPSGameCharacter*)Obj)->hasUsedAbility1 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_hasUsedAbility1 = { "hasUsedAbility1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSGameCharacter), &Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_hasUsedAbility1_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_hasUsedAbility1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_hasUsedAbility1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_weapon_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "// right here\n" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
		{ "ToolTip", "right here" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_weapon = { "weapon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, weapon), Z_Construct_UClass_ABaseWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_weapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_weapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isZoomedIn_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isZoomedIn_SetBit(void* Obj)
	{
		((AFPSGameCharacter*)Obj)->isZoomedIn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isZoomedIn = { "isZoomedIn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSGameCharacter), &Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isZoomedIn_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isZoomedIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isZoomedIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isSprinting_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isSprinting_SetBit(void* Obj)
	{
		((AFPSGameCharacter*)Obj)->isSprinting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isSprinting = { "isSprinting", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSGameCharacter), &Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isSprinting_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isSprinting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isSprinting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_bUsingMotionControllers_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_bUsingMotionControllers_SetBit(void* Obj)
	{
		((AFPSGameCharacter*)Obj)->bUsingMotionControllers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_bUsingMotionControllers = { "bUsingMotionControllers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AFPSGameCharacter), &Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_bUsingMotionControllers_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_bUsingMotionControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_bUsingMotionControllers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_healSFXisPlaying_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_healSFXisPlaying_SetBit(void* Obj)
	{
		((AFPSGameCharacter*)Obj)->healSFXisPlaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_healSFXisPlaying = { "healSFXisPlaying", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSGameCharacter), &Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_healSFXisPlaying_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_healSFXisPlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_healSFXisPlaying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_healSFX_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_healSFX = { "healSFX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, healSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_healSFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_healSFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_landSFX_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_landSFX = { "landSFX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, landSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_landSFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_landSFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_jumpSFX_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_jumpSFX = { "jumpSFX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, jumpSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_jumpSFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_jumpSFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_grenadeThrowSFX_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "// Sound to play each time we switch the weapon\n" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
		{ "ToolTip", "Sound to play each time we switch the weapon" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_grenadeThrowSFX = { "grenadeThrowSFX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, grenadeThrowSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_grenadeThrowSFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_grenadeThrowSFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_switchWeaponSFX_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "// AnimMontage to play each time we fire \n" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
		{ "ToolTip", "AnimMontage to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_switchWeaponSFX = { "switchWeaponSFX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, switchWeaponSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_switchWeaponSFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_switchWeaponSFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_FireAnimation_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "// Sound to play each time we fire a Shotgun\n" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
		{ "ToolTip", "Sound to play each time we fire a Shotgun" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_FireAnimation = { "FireAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, FireAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_FireAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_FireAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_shotgunSFX_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "// Sound to play each time we fire a Sniper \n" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
		{ "ToolTip", "Sound to play each time we fire a Sniper" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_shotgunSFX = { "shotgunSFX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, shotgunSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_shotgunSFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_shotgunSFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_sniperSFX_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "// Sound to play each time we fire an AR\n" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
		{ "ToolTip", "Sound to play each time we fire an AR" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_sniperSFX = { "sniperSFX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, sniperSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_sniperSFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_sniperSFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_assaultSFX_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "// Sound to play each time we fire a Pistol\n" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
		{ "ToolTip", "Sound to play each time we fire a Pistol" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_assaultSFX = { "assaultSFX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, assaultSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_assaultSFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_assaultSFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_pistolSFX_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09// right here \n//\x09GameObject MeleeClass;\n" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)                                                                                                                           right here\n       GameObject MeleeClass;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_pistolSFX = { "pistolSFX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, pistolSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_pistolSFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_pistolSFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "// Gun muzzle's offset from the characters location \n" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
		{ "ToolTip", "Gun muzzle's offset from the characters location" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000004, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, ProjectileClass), Z_Construct_UClass_AFPSGameProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_GunOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "// Base look up/down rate, in deg/sec. Other scaling may affect final rate. \n" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_GunOffset = { "GunOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, GunOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_GunOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_GunOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// Base turn rate, in deg/sec. Other scaling may affect final turn rate. \n" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_L_MotionController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "FPSGameCharacter" },
		{ "Comment", "// Motion controller (right hand)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
		{ "ToolTip", "Motion controller (right hand)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_L_MotionController = { "L_MotionController", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, L_MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_L_MotionController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_L_MotionController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_R_MotionController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "FPSGameCharacter" },
		{ "Comment", "// First person camera\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_R_MotionController = { "R_MotionController", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, R_MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_R_MotionController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_R_MotionController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "// Location on VR gun mesh where projectiles should spawn.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
		{ "ToolTip", "Location on VR gun mesh where projectiles should spawn." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_VR_MuzzleLocation_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "// Gun mesh: VR view (attached to the VR controller directly, no arm, just the actual gun)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
		{ "ToolTip", "Gun mesh: VR view (attached to the VR controller directly, no arm, just the actual gun)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_VR_MuzzleLocation = { "VR_MuzzleLocation", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, VR_MuzzleLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_VR_MuzzleLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_VR_MuzzleLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_VR_Gun_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "// Location on gun mesh where projectiles should spawn.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
		{ "ToolTip", "Location on gun mesh where projectiles should spawn." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_VR_Gun = { "VR_Gun", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, VR_Gun), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_VR_Gun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_VR_Gun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_FP_MuzzleLocation_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "// Gun mesh: 1st person view (seen only by self)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
		{ "ToolTip", "Gun mesh: 1st person view (seen only by self)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_FP_MuzzleLocation = { "FP_MuzzleLocation", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, FP_MuzzleLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_FP_MuzzleLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_FP_MuzzleLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_FP_Gun_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "// UPROPERTY(BlueprintReadWrite, Category = Mesh) \n// UPROPERTY(VisibleDefaultsOnly, Category = Mesh) \n// UPROPERTY(EditAnywhere, Category = Mesh) \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
		{ "ToolTip", "UPROPERTY(BlueprintReadWrite, Category = Mesh)\nUPROPERTY(VisibleDefaultsOnly, Category = Mesh)\nUPROPERTY(EditAnywhere, Category = Mesh)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_FP_Gun = { "FP_Gun", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, FP_Gun), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_FP_Gun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_FP_Gun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FPSGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_Mesh1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_Mesh1P_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSGameCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isCrouching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_grenadeStash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_maxGrenades,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isTossingGrenade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_grenade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isMeleeing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_meleeSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_unZoomSFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_zoom10xSFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_zoom5xSFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToGrenade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToMelee,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToZoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToReload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_curZoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_reloadSFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_outOfAmmoSFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_weaponSwitched,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ableToSwitchWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_maxShotgunAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_maxSniperAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_maxPistolAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_maxAssaultAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_weaponsSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_reloadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_readyToFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isShooting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_shotgunObtained,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_sniperObtained,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_pistolObtained,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_assaultObtained,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_weaponIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_weapons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_weapons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_shotgunAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_sniperRifleAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_pistolAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_assaultRifleAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_stopLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_healing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_healAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_healWait,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_healTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_healDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isFirstLife,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_justDamaged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_justDied,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isSameLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_hudMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_messageAppear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_respawnRot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_respawnLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ability2CooldownTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ability1CooldownTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_hasUsedAbility2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_hasUsedAbility1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_weapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isZoomedIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_isSprinting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_bUsingMotionControllers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_healSFXisPlaying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_healSFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_landSFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_jumpSFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_grenadeThrowSFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_switchWeaponSFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_FireAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_shotgunSFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_sniperSFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_assaultSFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_pistolSFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_ProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_GunOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_L_MotionController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_R_MotionController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_VR_MuzzleLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_VR_Gun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_FP_MuzzleLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_FP_Gun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameCharacter_Statics::NewProp_Mesh1P,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSGameCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSGameCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSGameCharacter_Statics::ClassParams = {
		&AFPSGameCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFPSGameCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSGameCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSGameCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSGameCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSGameCharacter, 234543804);
	template<> FPSGAME_API UClass* StaticClass<AFPSGameCharacter>()
	{
		return AFPSGameCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSGameCharacter(Z_Construct_UClass_AFPSGameCharacter, &AFPSGameCharacter::StaticClass, TEXT("/Script/FPSGame"), TEXT("AFPSGameCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSGameCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
