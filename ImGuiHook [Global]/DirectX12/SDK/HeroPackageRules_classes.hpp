#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HeroPackageRules

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "DeveloperSettings_classes.hpp"


namespace SDK
{

// Class HeroPackageRules.HeroPackageFuncLibrary
// 0x0000 (0x0030 - 0x0030)
class UHeroPackageFuncLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void UpdatePackageDataTables();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HeroPackageFuncLibrary">();
	}
	static class UHeroPackageFuncLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHeroPackageFuncLibrary>();
	}
};
static_assert(alignof(UHeroPackageFuncLibrary) == 0x000008, "Wrong alignment on UHeroPackageFuncLibrary");
static_assert(sizeof(UHeroPackageFuncLibrary) == 0x000030, "Wrong size on UHeroPackageFuncLibrary");

// Class HeroPackageRules.HeroPackageSettings
// 0x0010 (0x0058 - 0x0048)
class UHeroPackageSettings final : public UDeveloperSettings
{
public:
	TArray<class FString>                         Package_DataTables;                                // 0x0048(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HeroPackageSettings">();
	}
	static class UHeroPackageSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHeroPackageSettings>();
	}
};
static_assert(alignof(UHeroPackageSettings) == 0x000008, "Wrong alignment on UHeroPackageSettings");
static_assert(sizeof(UHeroPackageSettings) == 0x000058, "Wrong size on UHeroPackageSettings");
static_assert(offsetof(UHeroPackageSettings, Package_DataTables) == 0x000048, "Member 'UHeroPackageSettings::Package_DataTables' has a wrong offset!");

}

