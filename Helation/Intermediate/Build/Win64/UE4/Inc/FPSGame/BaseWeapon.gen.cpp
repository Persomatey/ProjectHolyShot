// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/BaseWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseWeapon() {}
// Cross Module References
	FPSGAME_API UEnum* Z_Construct_UEnum_FPSGame_EWeaponType();
	UPackage* Z_Construct_UPackage__Script_FPSGame();
	FPSGAME_API UClass* Z_Construct_UClass_ABaseWeapon_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_ABaseWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	static UEnum* EWeaponType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FPSGame_EWeaponType, Z_Construct_UPackage__Script_FPSGame(), TEXT("EWeaponType"));
		}
		return Singleton;
	}
	template<> FPSGAME_API UEnum* StaticEnum<EWeaponType>()
	{
		return EWeaponType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWeaponType(EWeaponType_StaticEnum, TEXT("/Script/FPSGame"), TEXT("EWeaponType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FPSGame_EWeaponType_Hash() { return 4177935438U; }
	UEnum* Z_Construct_UEnum_FPSGame_EWeaponType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FPSGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWeaponType"), 0, Get_Z_Construct_UEnum_FPSGame_EWeaponType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWeaponType::E_AssaultRifle", (int64)EWeaponType::E_AssaultRifle },
				{ "EWeaponType::E_Pistol", (int64)EWeaponType::E_Pistol },
				{ "EWeaponType::E_SniperRifle", (int64)EWeaponType::E_SniperRifle },
				{ "EWeaponType::E_Shotgun", (int64)EWeaponType::E_Shotgun },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E_AssaultRifle.DisplayName", "ASSAULT_RIFLE" },
				{ "E_AssaultRifle.Name", "EWeaponType::E_AssaultRifle" },
				{ "E_Pistol.DisplayName", "PISTOL" },
				{ "E_Pistol.Name", "EWeaponType::E_Pistol" },
				{ "E_Shotgun.DisplayName", "SHOTGUN" },
				{ "E_Shotgun.Name", "EWeaponType::E_Shotgun" },
				{ "E_SniperRifle.DisplayName", "SNIPER_RIFLE" },
				{ "E_SniperRifle.Name", "EWeaponType::E_SniperRifle" },
				{ "ModuleRelativePath", "BaseWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FPSGame,
				nullptr,
				"EWeaponType",
				"EWeaponType",
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
	void ABaseWeapon::StaticRegisterNativesABaseWeapon()
	{
	}
	UClass* Z_Construct_UClass_ABaseWeapon_NoRegister()
	{
		return ABaseWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ABaseWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isAutomatic_MetaData[];
#endif
		static void NewProp_isAutomatic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAutomatic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fireRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fireRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isDestroyed_MetaData[];
#endif
		static void NewProp_isDestroyed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDestroyed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isObtained_MetaData[];
#endif
		static void NewProp_isObtained_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isObtained;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weaponType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_weaponType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_weaponType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_reloadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_reloadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_clipAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_clipAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_totalAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_totalAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxClipAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_maxClipAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxTotalAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_maxTotalAmmo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseWeapon.h" },
		{ "ModuleRelativePath", "BaseWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_isAutomatic_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "BaseWeapon.h" },
	};
#endif
	void Z_Construct_UClass_ABaseWeapon_Statics::NewProp_isAutomatic_SetBit(void* Obj)
	{
		((ABaseWeapon*)Obj)->isAutomatic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_isAutomatic = { "isAutomatic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseWeapon), &Z_Construct_UClass_ABaseWeapon_Statics::NewProp_isAutomatic_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_isAutomatic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_isAutomatic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_fireRate_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_fireRate = { "fireRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, fireRate), METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_fireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_fireRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_index_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, index), METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_isDestroyed_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "BaseWeapon.h" },
	};
#endif
	void Z_Construct_UClass_ABaseWeapon_Statics::NewProp_isDestroyed_SetBit(void* Obj)
	{
		((ABaseWeapon*)Obj)->isDestroyed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_isDestroyed = { "isDestroyed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseWeapon), &Z_Construct_UClass_ABaseWeapon_Statics::NewProp_isDestroyed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_isDestroyed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_isDestroyed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_isObtained_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "BaseWeapon.h" },
	};
#endif
	void Z_Construct_UClass_ABaseWeapon_Statics::NewProp_isObtained_SetBit(void* Obj)
	{
		((ABaseWeapon*)Obj)->isObtained = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_isObtained = { "isObtained", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseWeapon), &Z_Construct_UClass_ABaseWeapon_Statics::NewProp_isObtained_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_isObtained_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_isObtained_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_name_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, name), METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_weaponType_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_weaponType = { "weaponType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, weaponType), Z_Construct_UEnum_FPSGame_EWeaponType, METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_weaponType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_weaponType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_weaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_reloadTime_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_reloadTime = { "reloadTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, reloadTime), METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_reloadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_reloadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_clipAmmo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_clipAmmo = { "clipAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, clipAmmo), METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_clipAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_clipAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_totalAmmo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_totalAmmo = { "totalAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, totalAmmo), METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_totalAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_totalAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_maxClipAmmo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_maxClipAmmo = { "maxClipAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, maxClipAmmo), METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_maxClipAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_maxClipAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_maxTotalAmmo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_maxTotalAmmo = { "maxTotalAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, maxTotalAmmo), METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_maxTotalAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_maxTotalAmmo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_isAutomatic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_fireRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_isDestroyed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_isObtained,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_weaponType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_weaponType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_reloadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_clipAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_totalAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_maxClipAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_maxTotalAmmo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseWeapon_Statics::ClassParams = {
		&ABaseWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseWeapon, 4182507664);
	template<> FPSGAME_API UClass* StaticClass<ABaseWeapon>()
	{
		return ABaseWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseWeapon(Z_Construct_UClass_ABaseWeapon, &ABaseWeapon::StaticClass, TEXT("/Script/FPSGame"), TEXT("ABaseWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
