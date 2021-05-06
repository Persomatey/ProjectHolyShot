// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/TurretEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurretEnemy() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_ATurretEnemy_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_ATurretEnemy();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_FPSGame();
// End Cross Module References
	DEFINE_FUNCTION(ATurretEnemy::execBeginDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginDeath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATurretEnemy::execTakeDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_damageTaken);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeDamage(Z_Param_damageTaken);
		P_NATIVE_END;
	}
	void ATurretEnemy::StaticRegisterNativesATurretEnemy()
	{
		UClass* Class = ATurretEnemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginDeath", &ATurretEnemy::execBeginDeath },
			{ "TakeDamage", &ATurretEnemy::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATurretEnemy_BeginDeath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATurretEnemy_BeginDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TurretEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurretEnemy_BeginDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATurretEnemy, nullptr, "BeginDeath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATurretEnemy_BeginDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurretEnemy_BeginDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATurretEnemy_BeginDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATurretEnemy_BeginDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATurretEnemy_TakeDamage_Statics
	{
		struct TurretEnemy_eventTakeDamage_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATurretEnemy_TakeDamage_Statics::NewProp_damageTaken = { "damageTaken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TurretEnemy_eventTakeDamage_Parms, damageTaken), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurretEnemy_TakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurretEnemy_TakeDamage_Statics::NewProp_damageTaken,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATurretEnemy_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TurretEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurretEnemy_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATurretEnemy, nullptr, "TakeDamage", nullptr, nullptr, sizeof(TurretEnemy_eventTakeDamage_Parms), Z_Construct_UFunction_ATurretEnemy_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurretEnemy_TakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATurretEnemy_TakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurretEnemy_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATurretEnemy_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATurretEnemy_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATurretEnemy_NoRegister()
	{
		return ATurretEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ATurretEnemy_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_startNewLoop_MetaData[];
#endif
		static void NewProp_startNewLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_startNewLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isLookingLeft_MetaData[];
#endif
		static void NewProp_isLookingLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLookingLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isIdling_MetaData[];
#endif
		static void NewProp_isIdling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isIdling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATurretEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATurretEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATurretEnemy_BeginDeath, "BeginDeath" }, // 2598448931
		{ &Z_Construct_UFunction_ATurretEnemy_TakeDamage, "TakeDamage" }, // 2816263547
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurretEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TurretEnemy.h" },
		{ "ModuleRelativePath", "TurretEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurretEnemy_Statics::NewProp_isDead_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "TurretEnemy.h" },
	};
#endif
	void Z_Construct_UClass_ATurretEnemy_Statics::NewProp_isDead_SetBit(void* Obj)
	{
		((ATurretEnemy*)Obj)->isDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATurretEnemy_Statics::NewProp_isDead = { "isDead", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATurretEnemy), &Z_Construct_UClass_ATurretEnemy_Statics::NewProp_isDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATurretEnemy_Statics::NewProp_isDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurretEnemy_Statics::NewProp_isDead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurretEnemy_Statics::NewProp_startNewLoop_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "TurretEnemy.h" },
	};
#endif
	void Z_Construct_UClass_ATurretEnemy_Statics::NewProp_startNewLoop_SetBit(void* Obj)
	{
		((ATurretEnemy*)Obj)->startNewLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATurretEnemy_Statics::NewProp_startNewLoop = { "startNewLoop", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATurretEnemy), &Z_Construct_UClass_ATurretEnemy_Statics::NewProp_startNewLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATurretEnemy_Statics::NewProp_startNewLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurretEnemy_Statics::NewProp_startNewLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurretEnemy_Statics::NewProp_isLookingLeft_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "TurretEnemy.h" },
	};
#endif
	void Z_Construct_UClass_ATurretEnemy_Statics::NewProp_isLookingLeft_SetBit(void* Obj)
	{
		((ATurretEnemy*)Obj)->isLookingLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATurretEnemy_Statics::NewProp_isLookingLeft = { "isLookingLeft", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATurretEnemy), &Z_Construct_UClass_ATurretEnemy_Statics::NewProp_isLookingLeft_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATurretEnemy_Statics::NewProp_isLookingLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurretEnemy_Statics::NewProp_isLookingLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurretEnemy_Statics::NewProp_isIdling_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "TurretEnemy.h" },
	};
#endif
	void Z_Construct_UClass_ATurretEnemy_Statics::NewProp_isIdling_SetBit(void* Obj)
	{
		((ATurretEnemy*)Obj)->isIdling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATurretEnemy_Statics::NewProp_isIdling = { "isIdling", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATurretEnemy), &Z_Construct_UClass_ATurretEnemy_Statics::NewProp_isIdling_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATurretEnemy_Statics::NewProp_isIdling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurretEnemy_Statics::NewProp_isIdling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurretEnemy_Statics::NewProp_health_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "TurretEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATurretEnemy_Statics::NewProp_health = { "health", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurretEnemy, health), METADATA_PARAMS(Z_Construct_UClass_ATurretEnemy_Statics::NewProp_health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurretEnemy_Statics::NewProp_health_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATurretEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurretEnemy_Statics::NewProp_isDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurretEnemy_Statics::NewProp_startNewLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurretEnemy_Statics::NewProp_isLookingLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurretEnemy_Statics::NewProp_isIdling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurretEnemy_Statics::NewProp_health,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATurretEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATurretEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATurretEnemy_Statics::ClassParams = {
		&ATurretEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATurretEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATurretEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATurretEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATurretEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATurretEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATurretEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATurretEnemy, 3892303681);
	template<> FPSGAME_API UClass* StaticClass<ATurretEnemy>()
	{
		return ATurretEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATurretEnemy(Z_Construct_UClass_ATurretEnemy, &ATurretEnemy::StaticClass, TEXT("/Script/FPSGame"), TEXT("ATurretEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATurretEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
