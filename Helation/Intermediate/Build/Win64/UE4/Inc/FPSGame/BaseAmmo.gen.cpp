// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/BaseAmmo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseAmmo() {}
// Cross Module References
	FPSGAME_API UEnum* Z_Construct_UEnum_FPSGame_EAmmoType();
	UPackage* Z_Construct_UPackage__Script_FPSGame();
	FPSGAME_API UClass* Z_Construct_UClass_ABaseAmmo_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_ABaseAmmo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	static UEnum* EAmmoType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FPSGame_EAmmoType, Z_Construct_UPackage__Script_FPSGame(), TEXT("EAmmoType"));
		}
		return Singleton;
	}
	template<> FPSGAME_API UEnum* StaticEnum<EAmmoType>()
	{
		return EAmmoType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAmmoType(EAmmoType_StaticEnum, TEXT("/Script/FPSGame"), TEXT("EAmmoType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FPSGame_EAmmoType_Hash() { return 1328137402U; }
	UEnum* Z_Construct_UEnum_FPSGame_EAmmoType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FPSGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAmmoType"), 0, Get_Z_Construct_UEnum_FPSGame_EAmmoType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAmmoType::E_AssaultRifle", (int64)EAmmoType::E_AssaultRifle },
				{ "EAmmoType::E_Pistol", (int64)EAmmoType::E_Pistol },
				{ "EAmmoType::E_SniperRifle", (int64)EAmmoType::E_SniperRifle },
				{ "EAmmoType::E_Shotgun", (int64)EAmmoType::E_Shotgun },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E_AssaultRifle.DisplayName", "ASSAULT_RIFLE" },
				{ "E_AssaultRifle.Name", "EAmmoType::E_AssaultRifle" },
				{ "E_Pistol.DisplayName", "PISTOL" },
				{ "E_Pistol.Name", "EAmmoType::E_Pistol" },
				{ "E_Shotgun.DisplayName", "SHOTGUN" },
				{ "E_Shotgun.Name", "EAmmoType::E_Shotgun" },
				{ "E_SniperRifle.DisplayName", "SNIPER_RIFLE" },
				{ "E_SniperRifle.Name", "EAmmoType::E_SniperRifle" },
				{ "ModuleRelativePath", "BaseAmmo.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FPSGame,
				nullptr,
				"EAmmoType",
				"EAmmoType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ABaseAmmo::StaticRegisterNativesABaseAmmo()
	{
	}
	UClass* Z_Construct_UClass_ABaseAmmo_NoRegister()
	{
		return ABaseAmmo::StaticClass();
	}
	struct Z_Construct_UClass_ABaseAmmo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ammoType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ammoType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ammoType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ammoAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ammoAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseAmmo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAmmo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseAmmo.h" },
		{ "ModuleRelativePath", "BaseAmmo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAmmo_Statics::NewProp_ammoType_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "BaseAmmo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABaseAmmo_Statics::NewProp_ammoType = { "ammoType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseAmmo, ammoType), Z_Construct_UEnum_FPSGame_EAmmoType, METADATA_PARAMS(Z_Construct_UClass_ABaseAmmo_Statics::NewProp_ammoType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAmmo_Statics::NewProp_ammoType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABaseAmmo_Statics::NewProp_ammoType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAmmo_Statics::NewProp_ammoAmount_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "BaseAmmo.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABaseAmmo_Statics::NewProp_ammoAmount = { "ammoAmount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseAmmo, ammoAmount), METADATA_PARAMS(Z_Construct_UClass_ABaseAmmo_Statics::NewProp_ammoAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAmmo_Statics::NewProp_ammoAmount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAmmo_Statics::NewProp_ammoType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAmmo_Statics::NewProp_ammoType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAmmo_Statics::NewProp_ammoAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseAmmo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseAmmo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseAmmo_Statics::ClassParams = {
		&ABaseAmmo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseAmmo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAmmo_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseAmmo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAmmo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseAmmo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseAmmo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseAmmo, 2709889264);
	template<> FPSGAME_API UClass* StaticClass<ABaseAmmo>()
	{
		return ABaseAmmo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseAmmo(Z_Construct_UClass_ABaseAmmo, &ABaseAmmo::StaticClass, TEXT("/Script/FPSGame"), TEXT("ABaseAmmo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseAmmo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
