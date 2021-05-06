// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/EliteEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEliteEnemy() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_AEliteEnemy_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AEliteEnemy();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_FPSGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FPSGAME_API UClass* Z_Construct_UClass_AFPSGameProjectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AEliteEnemy::execGenerateDropIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GenerateDropIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEliteEnemy::execShootBullets)
	{
		P_GET_OBJECT(UClass,Z_Param_passedProj);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShootBullets(Z_Param_passedProj);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEliteEnemy::execBeginDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginDeath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEliteEnemy::execTakeDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_damageTaken);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeDamage(Z_Param_damageTaken);
		P_NATIVE_END;
	}
	void AEliteEnemy::StaticRegisterNativesAEliteEnemy()
	{
		UClass* Class = AEliteEnemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginDeath", &AEliteEnemy::execBeginDeath },
			{ "GenerateDropIndex", &AEliteEnemy::execGenerateDropIndex },
			{ "ShootBullets", &AEliteEnemy::execShootBullets },
			{ "TakeDamage", &AEliteEnemy::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEliteEnemy_BeginDeath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEliteEnemy_BeginDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EliteEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEliteEnemy_BeginDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEliteEnemy, nullptr, "BeginDeath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEliteEnemy_BeginDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEliteEnemy_BeginDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEliteEnemy_BeginDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEliteEnemy_BeginDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEliteEnemy_GenerateDropIndex_Statics
	{
		struct EliteEnemy_eventGenerateDropIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AEliteEnemy_GenerateDropIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EliteEnemy_eventGenerateDropIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEliteEnemy_GenerateDropIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEliteEnemy_GenerateDropIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEliteEnemy_GenerateDropIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EliteEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEliteEnemy_GenerateDropIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEliteEnemy, nullptr, "GenerateDropIndex", nullptr, nullptr, sizeof(EliteEnemy_eventGenerateDropIndex_Parms), Z_Construct_UFunction_AEliteEnemy_GenerateDropIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEliteEnemy_GenerateDropIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEliteEnemy_GenerateDropIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEliteEnemy_GenerateDropIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEliteEnemy_GenerateDropIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEliteEnemy_GenerateDropIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEliteEnemy_ShootBullets_Statics
	{
		struct EliteEnemy_eventShootBullets_Parms
		{
			TSubclassOf<AFPSGameProjectile>  passedProj;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_passedProj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AEliteEnemy_ShootBullets_Statics::NewProp_passedProj = { "passedProj", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EliteEnemy_eventShootBullets_Parms, passedProj), Z_Construct_UClass_AFPSGameProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEliteEnemy_ShootBullets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEliteEnemy_ShootBullets_Statics::NewProp_passedProj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEliteEnemy_ShootBullets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EliteEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEliteEnemy_ShootBullets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEliteEnemy, nullptr, "ShootBullets", nullptr, nullptr, sizeof(EliteEnemy_eventShootBullets_Parms), Z_Construct_UFunction_AEliteEnemy_ShootBullets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEliteEnemy_ShootBullets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEliteEnemy_ShootBullets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEliteEnemy_ShootBullets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEliteEnemy_ShootBullets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEliteEnemy_ShootBullets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEliteEnemy_TakeDamage_Statics
	{
		struct EliteEnemy_eventTakeDamage_Parms
		{
			float damageTaken;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damageTaken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEliteEnemy_TakeDamage_Statics::NewProp_damageTaken = { "damageTaken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EliteEnemy_eventTakeDamage_Parms, damageTaken), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEliteEnemy_TakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEliteEnemy_TakeDamage_Statics::NewProp_damageTaken,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEliteEnemy_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EliteEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEliteEnemy_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEliteEnemy, nullptr, "TakeDamage", nullptr, nullptr, sizeof(EliteEnemy_eventTakeDamage_Parms), Z_Construct_UFunction_AEliteEnemy_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEliteEnemy_TakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEliteEnemy_TakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEliteEnemy_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEliteEnemy_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEliteEnemy_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEliteEnemy_NoRegister()
	{
		return AEliteEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AEliteEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isDead_MetaData[];
#endif
		static void NewProp_isDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasTakenDamage_MetaData[];
#endif
		static void NewProp_hasTakenDamage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasTakenDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enemyExplosionSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_enemyExplosionSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enemySparksSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_enemySparksSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enemyShootSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_enemyShootSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isAlerted_MetaData[];
#endif
		static void NewProp_isAlerted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAlerted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_canSeePlayer_MetaData[];
#endif
		static void NewProp_canSeePlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_canSeePlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEliteEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEliteEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEliteEnemy_BeginDeath, "BeginDeath" }, // 2400244085
		{ &Z_Construct_UFunction_AEliteEnemy_GenerateDropIndex, "GenerateDropIndex" }, // 2898349579
		{ &Z_Construct_UFunction_AEliteEnemy_ShootBullets, "ShootBullets" }, // 678870850
		{ &Z_Construct_UFunction_AEliteEnemy_TakeDamage, "TakeDamage" }, // 2220802074
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEliteEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EliteEnemy.h" },
		{ "ModuleRelativePath", "EliteEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEliteEnemy_Statics::NewProp_isDead_MetaData[] = {
		{ "Category", "EliteEnemy" },
		{ "ModuleRelativePath", "EliteEnemy.h" },
	};
#endif
	void Z_Construct_UClass_AEliteEnemy_Statics::NewProp_isDead_SetBit(void* Obj)
	{
		((AEliteEnemy*)Obj)->isDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEliteEnemy_Statics::NewProp_isDead = { "isDead", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEliteEnemy), &Z_Construct_UClass_AEliteEnemy_Statics::NewProp_isDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEliteEnemy_Statics::NewProp_isDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEliteEnemy_Statics::NewProp_isDead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEliteEnemy_Statics::NewProp_hasTakenDamage_MetaData[] = {
		{ "Category", "EliteEnemy" },
		{ "ModuleRelativePath", "EliteEnemy.h" },
	};
#endif
	void Z_Construct_UClass_AEliteEnemy_Statics::NewProp_hasTakenDamage_SetBit(void* Obj)
	{
		((AEliteEnemy*)Obj)->hasTakenDamage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEliteEnemy_Statics::NewProp_hasTakenDamage = { "hasTakenDamage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEliteEnemy), &Z_Construct_UClass_AEliteEnemy_Statics::NewProp_hasTakenDamage_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEliteEnemy_Statics::NewProp_hasTakenDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEliteEnemy_Statics::NewProp_hasTakenDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEliteEnemy_Statics::NewProp_health_MetaData[] = {
		{ "Category", "EliteEnemy" },
		{ "ModuleRelativePath", "EliteEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEliteEnemy_Statics::NewProp_health = { "health", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEliteEnemy, health), METADATA_PARAMS(Z_Construct_UClass_AEliteEnemy_Statics::NewProp_health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEliteEnemy_Statics::NewProp_health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEliteEnemy_Statics::NewProp_enemyExplosionSound_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "EliteEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEliteEnemy_Statics::NewProp_enemyExplosionSound = { "enemyExplosionSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEliteEnemy, enemyExplosionSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEliteEnemy_Statics::NewProp_enemyExplosionSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEliteEnemy_Statics::NewProp_enemyExplosionSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEliteEnemy_Statics::NewProp_enemySparksSound_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "EliteEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEliteEnemy_Statics::NewProp_enemySparksSound = { "enemySparksSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEliteEnemy, enemySparksSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEliteEnemy_Statics::NewProp_enemySparksSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEliteEnemy_Statics::NewProp_enemySparksSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEliteEnemy_Statics::NewProp_enemyShootSound_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "EliteEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEliteEnemy_Statics::NewProp_enemyShootSound = { "enemyShootSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEliteEnemy, enemyShootSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEliteEnemy_Statics::NewProp_enemyShootSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEliteEnemy_Statics::NewProp_enemyShootSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEliteEnemy_Statics::NewProp_isAlerted_MetaData[] = {
		{ "Category", "EliteEnemy" },
		{ "ModuleRelativePath", "EliteEnemy.h" },
	};
#endif
	void Z_Construct_UClass_AEliteEnemy_Statics::NewProp_isAlerted_SetBit(void* Obj)
	{
		((AEliteEnemy*)Obj)->isAlerted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEliteEnemy_Statics::NewProp_isAlerted = { "isAlerted", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEliteEnemy), &Z_Construct_UClass_AEliteEnemy_Statics::NewProp_isAlerted_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEliteEnemy_Statics::NewProp_isAlerted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEliteEnemy_Statics::NewProp_isAlerted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEliteEnemy_Statics::NewProp_canSeePlayer_MetaData[] = {
		{ "Category", "EliteEnemy" },
		{ "ModuleRelativePath", "EliteEnemy.h" },
	};
#endif
	void Z_Construct_UClass_AEliteEnemy_Statics::NewProp_canSeePlayer_SetBit(void* Obj)
	{
		((AEliteEnemy*)Obj)->canSeePlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEliteEnemy_Statics::NewProp_canSeePlayer = { "canSeePlayer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEliteEnemy), &Z_Construct_UClass_AEliteEnemy_Statics::NewProp_canSeePlayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEliteEnemy_Statics::NewProp_canSeePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEliteEnemy_Statics::NewProp_canSeePlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEliteEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEliteEnemy_Statics::NewProp_isDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEliteEnemy_Statics::NewProp_hasTakenDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEliteEnemy_Statics::NewProp_health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEliteEnemy_Statics::NewProp_enemyExplosionSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEliteEnemy_Statics::NewProp_enemySparksSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEliteEnemy_Statics::NewProp_enemyShootSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEliteEnemy_Statics::NewProp_isAlerted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEliteEnemy_Statics::NewProp_canSeePlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEliteEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEliteEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEliteEnemy_Statics::ClassParams = {
		&AEliteEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEliteEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEliteEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEliteEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEliteEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEliteEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEliteEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEliteEnemy, 3824631747);
	template<> FPSGAME_API UClass* StaticClass<AEliteEnemy>()
	{
		return AEliteEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEliteEnemy(Z_Construct_UClass_AEliteEnemy, &AEliteEnemy::StaticClass, TEXT("/Script/FPSGame"), TEXT("AEliteEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEliteEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
