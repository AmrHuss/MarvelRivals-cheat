#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HeroPackageRules

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct HeroPackageRules.MarvelHeroPackageTable
// 0x0020 (0x0040 - 0x0020)
struct FMarvelHeroPackageTable final : public FTableRowBase
{
public:
	int32                                         HeroID;                                            // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Development_Package;                               // 0x0024(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Test_Package;                                      // 0x0025(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Shipping_Package;                                  // 0x0026(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          HeroTable;                                         // 0x0027(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          HeroSkinTable;                                     // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ControlSkinContentPaths;                           // 0x0029(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          UIHeroTables;                                      // 0x002A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          HeroAITables;                                      // 0x002B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bBondAbility;                                      // 0x002C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          HeroCodeModule;                                    // 0x002D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ControlHeroContentPaths;                           // 0x002E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2F[0x1];                                       // 0x002F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FDirectoryPath>                 ControlExternPaths;                                // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMarvelHeroPackageTable) == 0x000008, "Wrong alignment on FMarvelHeroPackageTable");
static_assert(sizeof(FMarvelHeroPackageTable) == 0x000040, "Wrong size on FMarvelHeroPackageTable");
static_assert(offsetof(FMarvelHeroPackageTable, HeroID) == 0x000020, "Member 'FMarvelHeroPackageTable::HeroID' has a wrong offset!");
static_assert(offsetof(FMarvelHeroPackageTable, Development_Package) == 0x000024, "Member 'FMarvelHeroPackageTable::Development_Package' has a wrong offset!");
static_assert(offsetof(FMarvelHeroPackageTable, Test_Package) == 0x000025, "Member 'FMarvelHeroPackageTable::Test_Package' has a wrong offset!");
static_assert(offsetof(FMarvelHeroPackageTable, Shipping_Package) == 0x000026, "Member 'FMarvelHeroPackageTable::Shipping_Package' has a wrong offset!");
static_assert(offsetof(FMarvelHeroPackageTable, HeroTable) == 0x000027, "Member 'FMarvelHeroPackageTable::HeroTable' has a wrong offset!");
static_assert(offsetof(FMarvelHeroPackageTable, HeroSkinTable) == 0x000028, "Member 'FMarvelHeroPackageTable::HeroSkinTable' has a wrong offset!");
static_assert(offsetof(FMarvelHeroPackageTable, ControlSkinContentPaths) == 0x000029, "Member 'FMarvelHeroPackageTable::ControlSkinContentPaths' has a wrong offset!");
static_assert(offsetof(FMarvelHeroPackageTable, UIHeroTables) == 0x00002A, "Member 'FMarvelHeroPackageTable::UIHeroTables' has a wrong offset!");
static_assert(offsetof(FMarvelHeroPackageTable, HeroAITables) == 0x00002B, "Member 'FMarvelHeroPackageTable::HeroAITables' has a wrong offset!");
static_assert(offsetof(FMarvelHeroPackageTable, bBondAbility) == 0x00002C, "Member 'FMarvelHeroPackageTable::bBondAbility' has a wrong offset!");
static_assert(offsetof(FMarvelHeroPackageTable, HeroCodeModule) == 0x00002D, "Member 'FMarvelHeroPackageTable::HeroCodeModule' has a wrong offset!");
static_assert(offsetof(FMarvelHeroPackageTable, ControlHeroContentPaths) == 0x00002E, "Member 'FMarvelHeroPackageTable::ControlHeroContentPaths' has a wrong offset!");
static_assert(offsetof(FMarvelHeroPackageTable, ControlExternPaths) == 0x000030, "Member 'FMarvelHeroPackageTable::ControlExternPaths' has a wrong offset!");

}
