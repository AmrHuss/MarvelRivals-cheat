#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_BanPickUnit

#include "Basic.hpp"

#include "PyMarvelUserWidget_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// PythonClass PyWidget_BanPickUnit.PyWidget_BanPickInfoUnit
// 0x0008 (0x05F0 - 0x05E8)
class UPyWidget_BanPickInfoUnit : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x7];                                      // 0x05E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UPyMarvelUserWidget>        BanPickConfirmedUnitClass;                         // 0x05E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();
	void MarvelSetVisible(bool Visible);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_BanPickInfoUnit">();
	}
	static class UPyWidget_BanPickInfoUnit* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_BanPickInfoUnit>();
	}
};
static_assert(alignof(UPyWidget_BanPickInfoUnit) == 0x000008, "Wrong alignment on UPyWidget_BanPickInfoUnit");
static_assert(sizeof(UPyWidget_BanPickInfoUnit) == 0x0005F0, "Wrong size on UPyWidget_BanPickInfoUnit");
static_assert(offsetof(UPyWidget_BanPickInfoUnit, BanPickConfirmedUnitClass) == 0x0005E8, "Member 'UPyWidget_BanPickInfoUnit::BanPickConfirmedUnitClass' has a wrong offset!");

// PythonClass PyWidget_BanPickUnit.PyWidget_BanPickConfirmedUnitBase
// 0x0000 (0x05E8 - 0x05E8)
#pragma pack(push, 0x1)
class alignas(0x08) UPyWidget_BanPickConfirmedUnitBase : public UPyMarvelUserWidget
{
public:
	bool                                          IsEmpty;                                           // 0x05E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_BanPickConfirmedUnitBase">();
	}
	static class UPyWidget_BanPickConfirmedUnitBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_BanPickConfirmedUnitBase>();
	}
};
#pragma pack(pop)
static_assert(alignof(UPyWidget_BanPickConfirmedUnitBase) == 0x000008, "Wrong alignment on UPyWidget_BanPickConfirmedUnitBase");
static_assert(sizeof(UPyWidget_BanPickConfirmedUnitBase) == 0x0005E8, "Wrong size on UPyWidget_BanPickConfirmedUnitBase");
static_assert(offsetof(UPyWidget_BanPickConfirmedUnitBase, IsEmpty) == 0x0005E1, "Member 'UPyWidget_BanPickConfirmedUnitBase::IsEmpty' has a wrong offset!");

// PythonClass PyWidget_BanPickUnit.PyWidget_BanPickConfirmedUnit
// 0x0068 (0x0650 - 0x05E8)
class UPyWidget_BanPickConfirmedUnit : public UPyWidget_BanPickConfirmedUnitBase
{
public:
	uint8                                         Pad_5E2[0x2];                                      // 0x05E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Color_Frame_Red;                                   // 0x05E4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           Color_Frame_Blue;                                  // 0x05F4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           Color_Empty_Red;                                   // 0x0604(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           Color_Empty_Blue;                                  // 0x0614(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           Color_VX_Frame_Red;                                // 0x0624(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           Color_VX_Frame_Blue;                               // 0x0634(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BG_BanPick_NoStart_Opacity;                        // 0x0644(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Defalut_NoStart_Opacity;                           // 0x0648(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void Destruct();
	void OnInitialized();
	void MarvelSetVisible(bool Visible);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_BanPickConfirmedUnit">();
	}
	static class UPyWidget_BanPickConfirmedUnit* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_BanPickConfirmedUnit>();
	}
};
static_assert(alignof(UPyWidget_BanPickConfirmedUnit) == 0x000008, "Wrong alignment on UPyWidget_BanPickConfirmedUnit");
static_assert(sizeof(UPyWidget_BanPickConfirmedUnit) == 0x000650, "Wrong size on UPyWidget_BanPickConfirmedUnit");
static_assert(offsetof(UPyWidget_BanPickConfirmedUnit, Color_Frame_Red) == 0x0005E4, "Member 'UPyWidget_BanPickConfirmedUnit::Color_Frame_Red' has a wrong offset!");
static_assert(offsetof(UPyWidget_BanPickConfirmedUnit, Color_Frame_Blue) == 0x0005F4, "Member 'UPyWidget_BanPickConfirmedUnit::Color_Frame_Blue' has a wrong offset!");
static_assert(offsetof(UPyWidget_BanPickConfirmedUnit, Color_Empty_Red) == 0x000604, "Member 'UPyWidget_BanPickConfirmedUnit::Color_Empty_Red' has a wrong offset!");
static_assert(offsetof(UPyWidget_BanPickConfirmedUnit, Color_Empty_Blue) == 0x000614, "Member 'UPyWidget_BanPickConfirmedUnit::Color_Empty_Blue' has a wrong offset!");
static_assert(offsetof(UPyWidget_BanPickConfirmedUnit, Color_VX_Frame_Red) == 0x000624, "Member 'UPyWidget_BanPickConfirmedUnit::Color_VX_Frame_Red' has a wrong offset!");
static_assert(offsetof(UPyWidget_BanPickConfirmedUnit, Color_VX_Frame_Blue) == 0x000634, "Member 'UPyWidget_BanPickConfirmedUnit::Color_VX_Frame_Blue' has a wrong offset!");
static_assert(offsetof(UPyWidget_BanPickConfirmedUnit, BG_BanPick_NoStart_Opacity) == 0x000644, "Member 'UPyWidget_BanPickConfirmedUnit::BG_BanPick_NoStart_Opacity' has a wrong offset!");
static_assert(offsetof(UPyWidget_BanPickConfirmedUnit, Defalut_NoStart_Opacity) == 0x000648, "Member 'UPyWidget_BanPickConfirmedUnit::Defalut_NoStart_Opacity' has a wrong offset!");

}
