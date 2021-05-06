// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/HighScoreTracker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHighScoreTracker() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_UHighScoreTracker_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_UHighScoreTracker();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_FPSGame();
// End Cross Module References
	DEFINE_FUNCTION(UHighScoreTracker::execSaveText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveTextB);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileNameB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHighScoreTracker::SaveText(Z_Param_SaveTextB,Z_Param_FileNameB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHighScoreTracker::execLoadText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileNameA);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_SaveTextA);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHighScoreTracker::LoadText(Z_Param_FileNameA,Z_Param_Out_SaveTextA);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHighScoreTracker::execSaveStringToFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UHighScoreTracker::SaveStringToFile(Z_Param_Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHighScoreTracker::execLoadFileToString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UHighScoreTracker::LoadFileToString(Z_Param_Filename);
		P_NATIVE_END;
	}
	void UHighScoreTracker::StaticRegisterNativesUHighScoreTracker()
	{
		UClass* Class = UHighScoreTracker::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadFileToString", &UHighScoreTracker::execLoadFileToString },
			{ "LoadText", &UHighScoreTracker::execLoadText },
			{ "SaveStringToFile", &UHighScoreTracker::execSaveStringToFile },
			{ "SaveText", &UHighScoreTracker::execSaveText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHighScoreTracker_LoadFileToString_Statics
	{
		struct HighScoreTracker_eventLoadFileToString_Parms
		{
			FString Filename;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHighScoreTracker_LoadFileToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HighScoreTracker_eventLoadFileToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHighScoreTracker_LoadFileToString_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HighScoreTracker_eventLoadFileToString_Parms, Filename), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighScoreTracker_LoadFileToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighScoreTracker_LoadFileToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighScoreTracker_LoadFileToString_Statics::NewProp_Filename,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHighScoreTracker_LoadFileToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "File I/O" },
		{ "ModuleRelativePath", "HighScoreTracker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighScoreTracker_LoadFileToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHighScoreTracker, nullptr, "LoadFileToString", nullptr, nullptr, sizeof(HighScoreTracker_eventLoadFileToString_Parms), Z_Construct_UFunction_UHighScoreTracker_LoadFileToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighScoreTracker_LoadFileToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHighScoreTracker_LoadFileToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighScoreTracker_LoadFileToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHighScoreTracker_LoadFileToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHighScoreTracker_LoadFileToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHighScoreTracker_LoadText_Statics
	{
		struct HighScoreTracker_eventLoadText_Parms
		{
			FString FileNameA;
			FString SaveTextA;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveTextA;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileNameA;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHighScoreTracker_LoadText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HighScoreTracker_eventLoadText_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHighScoreTracker_LoadText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HighScoreTracker_eventLoadText_Parms), &Z_Construct_UFunction_UHighScoreTracker_LoadText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHighScoreTracker_LoadText_Statics::NewProp_SaveTextA = { "SaveTextA", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HighScoreTracker_eventLoadText_Parms, SaveTextA), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHighScoreTracker_LoadText_Statics::NewProp_FileNameA = { "FileNameA", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HighScoreTracker_eventLoadText_Parms, FileNameA), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighScoreTracker_LoadText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighScoreTracker_LoadText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighScoreTracker_LoadText_Statics::NewProp_SaveTextA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighScoreTracker_LoadText_Statics::NewProp_FileNameA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHighScoreTracker_LoadText_Statics::Function_MetaDataParams[] = {
		{ "Category", "File I/O" },
		{ "ModuleRelativePath", "HighScoreTracker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighScoreTracker_LoadText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHighScoreTracker, nullptr, "LoadText", nullptr, nullptr, sizeof(HighScoreTracker_eventLoadText_Parms), Z_Construct_UFunction_UHighScoreTracker_LoadText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighScoreTracker_LoadText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHighScoreTracker_LoadText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighScoreTracker_LoadText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHighScoreTracker_LoadText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHighScoreTracker_LoadText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHighScoreTracker_SaveStringToFile_Statics
	{
		struct HighScoreTracker_eventSaveStringToFile_Parms
		{
			FString Filename;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHighScoreTracker_SaveStringToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HighScoreTracker_eventSaveStringToFile_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHighScoreTracker_SaveStringToFile_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HighScoreTracker_eventSaveStringToFile_Parms, Filename), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighScoreTracker_SaveStringToFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighScoreTracker_SaveStringToFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighScoreTracker_SaveStringToFile_Statics::NewProp_Filename,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHighScoreTracker_SaveStringToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "File I/O" },
		{ "ModuleRelativePath", "HighScoreTracker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighScoreTracker_SaveStringToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHighScoreTracker, nullptr, "SaveStringToFile", nullptr, nullptr, sizeof(HighScoreTracker_eventSaveStringToFile_Parms), Z_Construct_UFunction_UHighScoreTracker_SaveStringToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighScoreTracker_SaveStringToFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHighScoreTracker_SaveStringToFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighScoreTracker_SaveStringToFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHighScoreTracker_SaveStringToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHighScoreTracker_SaveStringToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHighScoreTracker_SaveText_Statics
	{
		struct HighScoreTracker_eventSaveText_Parms
		{
			FString SaveTextB;
			FString FileNameB;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileNameB;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveTextB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHighScoreTracker_SaveText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HighScoreTracker_eventSaveText_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHighScoreTracker_SaveText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HighScoreTracker_eventSaveText_Parms), &Z_Construct_UFunction_UHighScoreTracker_SaveText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHighScoreTracker_SaveText_Statics::NewProp_FileNameB = { "FileNameB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HighScoreTracker_eventSaveText_Parms, FileNameB), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHighScoreTracker_SaveText_Statics::NewProp_SaveTextB = { "SaveTextB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HighScoreTracker_eventSaveText_Parms, SaveTextB), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighScoreTracker_SaveText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighScoreTracker_SaveText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighScoreTracker_SaveText_Statics::NewProp_FileNameB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighScoreTracker_SaveText_Statics::NewProp_SaveTextB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHighScoreTracker_SaveText_Statics::Function_MetaDataParams[] = {
		{ "Category", "File I/O" },
		{ "Keywords", "Save Text File" },
		{ "ModuleRelativePath", "HighScoreTracker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighScoreTracker_SaveText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHighScoreTracker, nullptr, "SaveText", nullptr, nullptr, sizeof(HighScoreTracker_eventSaveText_Parms), Z_Construct_UFunction_UHighScoreTracker_SaveText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighScoreTracker_SaveText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHighScoreTracker_SaveText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighScoreTracker_SaveText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHighScoreTracker_SaveText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHighScoreTracker_SaveText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHighScoreTracker_NoRegister()
	{
		return UHighScoreTracker::StaticClass();
	}
	struct Z_Construct_UClass_UHighScoreTracker_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHighScoreTracker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHighScoreTracker_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHighScoreTracker_LoadFileToString, "LoadFileToString" }, // 3789798647
		{ &Z_Construct_UFunction_UHighScoreTracker_LoadText, "LoadText" }, // 3812080251
		{ &Z_Construct_UFunction_UHighScoreTracker_SaveStringToFile, "SaveStringToFile" }, // 2101971625
		{ &Z_Construct_UFunction_UHighScoreTracker_SaveText, "SaveText" }, // 3247669817
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHighScoreTracker_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HighScoreTracker.h" },
		{ "ModuleRelativePath", "HighScoreTracker.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHighScoreTracker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHighScoreTracker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHighScoreTracker_Statics::ClassParams = {
		&UHighScoreTracker::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHighScoreTracker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHighScoreTracker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHighScoreTracker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHighScoreTracker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHighScoreTracker, 1243241939);
	template<> FPSGAME_API UClass* StaticClass<UHighScoreTracker>()
	{
		return UHighScoreTracker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHighScoreTracker(Z_Construct_UClass_UHighScoreTracker, &UHighScoreTracker::StaticClass, TEXT("/Script/FPSGame"), TEXT("UHighScoreTracker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHighScoreTracker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
