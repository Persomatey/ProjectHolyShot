// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/DefaultEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultEnemy() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_ADefaultEnemy_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_ADefaultEnemy();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_FPSGame();
// End Cross Module References
	DEFINE_FUNCTION(ADefaultEnemy::execBeginDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginDeath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADefaultEnemy::execTakeDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_damageTaken);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeDamage(Z_Param_damageTaken);
		P_NATIVE_END;
	}
	void ADefaultEnemy::StaticRegisterNativesADefaultEnemy()
	{
		UClass* Class = ADefaultEnemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginDeath", &ADefaultEnemy::execBeginDeath },
			{ "TakeDamage", &ADefaultEnemy::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADefaultEnemy_BeginDeath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultEnemy_BeginDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DefaultEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultEnemy_BeginDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultEnemy, nullptr, "BeginDeath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefaultEnemy_BeginDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultEnemy_BeginDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefaultEnemy_BeginDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefaultEnemy_BeginDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefaultEnemy_TakeDamage_Statics
	{
		struct DefaultEnemy_eventTakeDamage_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADefaultEnemy_TakeDamage_Statics::NewProp_damageTaken = { "damageTaken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefaultEnemy_eventTakeDamage_Parms, damageTaken), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefaultEnemy_TakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefaultEnemy_TakeDamage_Statics::NewProp_damageTaken,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultEnemy_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called when the game starts or when spawned\n//virtual void BeginPlay() override;\n" },
		{ "ModuleRelativePath", "DefaultEnemy.h" },
		{ "ToolTip", "Called when the game starts or when spawned\nvirtual void BeginPlay() override;" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultEnemy_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultEnemy, nullptr, "TakeDamage", nullptr, nullptr, sizeof(DefaultEnemy_eventTakeDamage_Parms), Z_Construct_UFunction_ADefaultEnemy_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultEnemy_TakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefaultEnemy_TakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultEnemy_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefaultEnemy_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefaultEnemy_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADefaultEnemy_NoRegister()
	{
		return ADefaultEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ADefaultEnemy_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADefaultEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADefaultEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADefaultEnemy_BeginDeath, "BeginDeath" }, // 875041080
		{ &Z_Construct_UFunction_ADefaultEnemy_TakeDamage, "TakeDamage" }, // 408479559
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DefaultEnemy.h" },
		{ "ModuleRelativePath", "DefaultEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_isDead_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "DefaultEnemy.h" },
	};
#endif
	void Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_isDead_SetBit(void* Obj)
	{
		((ADefaultEnemy*)Obj)->isDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_isDead = { "isDead", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADefaultEnemy), &Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_isDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_isDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_isDead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_health_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "DefaultEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_health = { "health", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultEnemy, health), METADATA_PARAMS(Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_health_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADefaultEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_isDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_health,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADefaultEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefaultEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADefaultEnemy_Statics::ClassParams = {
		&ADefaultEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADefaultEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADefaultEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADefaultEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADefaultEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADefaultEnemy, 834691558);
	template<> FPSGAME_API UClass* StaticClass<ADefaultEnemy>()
	{
		return ADefaultEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADefaultEnemy(Z_Construct_UClass_ADefaultEnemy, &ADefaultEnemy::StaticClass, TEXT("/Script/FPSGame"), TEXT("ADefaultEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADefaultEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
