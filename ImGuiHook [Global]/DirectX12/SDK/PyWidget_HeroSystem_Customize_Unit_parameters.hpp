#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_HeroSystem_Customize_Unit

#include "Basic.hpp"


namespace SDK::Params
{

// DelegateFunction PyWidget_HeroSystem_Customize_Unit.PyWidget_HeroSystem_Customize_Unit.OnItemSelected__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct PyWidget_HeroSystem_Customize_Unit_OnItemSelected__DelegateSignature final
{
public:
	class FString                                 ItemId;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_HeroSystem_Customize_Unit_OnItemSelected__DelegateSignature) == 0x000008, "Wrong alignment on PyWidget_HeroSystem_Customize_Unit_OnItemSelected__DelegateSignature");
static_assert(sizeof(PyWidget_HeroSystem_Customize_Unit_OnItemSelected__DelegateSignature) == 0x000010, "Wrong size on PyWidget_HeroSystem_Customize_Unit_OnItemSelected__DelegateSignature");
static_assert(offsetof(PyWidget_HeroSystem_Customize_Unit_OnItemSelected__DelegateSignature, ItemId) == 0x000000, "Member 'PyWidget_HeroSystem_Customize_Unit_OnItemSelected__DelegateSignature::ItemId' has a wrong offset!");

// DelegateFunction PyWidget_HeroSystem_Customize_Unit.PyWidget_HeroSystem_Customize_Unit.OnItemHovered__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct PyWidget_HeroSystem_Customize_Unit_OnItemHovered__DelegateSignature final
{
public:
	bool                                          IsHover;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         HoverID;                                           // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_HeroSystem_Customize_Unit_OnItemHovered__DelegateSignature) == 0x000004, "Wrong alignment on PyWidget_HeroSystem_Customize_Unit_OnItemHovered__DelegateSignature");
static_assert(sizeof(PyWidget_HeroSystem_Customize_Unit_OnItemHovered__DelegateSignature) == 0x000008, "Wrong size on PyWidget_HeroSystem_Customize_Unit_OnItemHovered__DelegateSignature");
static_assert(offsetof(PyWidget_HeroSystem_Customize_Unit_OnItemHovered__DelegateSignature, IsHover) == 0x000000, "Member 'PyWidget_HeroSystem_Customize_Unit_OnItemHovered__DelegateSignature::IsHover' has a wrong offset!");
static_assert(offsetof(PyWidget_HeroSystem_Customize_Unit_OnItemHovered__DelegateSignature, HoverID) == 0x000004, "Member 'PyWidget_HeroSystem_Customize_Unit_OnItemHovered__DelegateSignature::HoverID' has a wrong offset!");

// DelegateFunction PyWidget_HeroSystem_Customize_Unit.PyWidget_HeroSystem_Customize_Unit.OnSwitchShape__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct PyWidget_HeroSystem_Customize_Unit_OnSwitchShape__DelegateSignature final
{
public:
	int32                                         ShapeID;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_HeroSystem_Customize_Unit_OnSwitchShape__DelegateSignature) == 0x000004, "Wrong alignment on PyWidget_HeroSystem_Customize_Unit_OnSwitchShape__DelegateSignature");
static_assert(sizeof(PyWidget_HeroSystem_Customize_Unit_OnSwitchShape__DelegateSignature) == 0x000004, "Wrong size on PyWidget_HeroSystem_Customize_Unit_OnSwitchShape__DelegateSignature");
static_assert(offsetof(PyWidget_HeroSystem_Customize_Unit_OnSwitchShape__DelegateSignature, ShapeID) == 0x000000, "Member 'PyWidget_HeroSystem_Customize_Unit_OnSwitchShape__DelegateSignature::ShapeID' has a wrong offset!");

// DelegateFunction PyWidget_HeroSystem_Customize_Unit.PyWidget_HeroSystem_Customize_Unit.OnHoverItemList__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_HeroSystem_Customize_Unit_OnHoverItemList__DelegateSignature final
{
public:
	bool                                          IsHover;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_HeroSystem_Customize_Unit_OnHoverItemList__DelegateSignature) == 0x000001, "Wrong alignment on PyWidget_HeroSystem_Customize_Unit_OnHoverItemList__DelegateSignature");
static_assert(sizeof(PyWidget_HeroSystem_Customize_Unit_OnHoverItemList__DelegateSignature) == 0x000001, "Wrong size on PyWidget_HeroSystem_Customize_Unit_OnHoverItemList__DelegateSignature");
static_assert(offsetof(PyWidget_HeroSystem_Customize_Unit_OnHoverItemList__DelegateSignature, IsHover) == 0x000000, "Member 'PyWidget_HeroSystem_Customize_Unit_OnHoverItemList__DelegateSignature::IsHover' has a wrong offset!");

// PythonFunction PyWidget_HeroSystem_Customize_Unit.PyWidget_HeroSystem_Customize_Unit.MarvelSetVisible
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_HeroSystem_Customize_Unit_MarvelSetVisible final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_HeroSystem_Customize_Unit_MarvelSetVisible) == 0x000001, "Wrong alignment on PyWidget_HeroSystem_Customize_Unit_MarvelSetVisible");
static_assert(sizeof(PyWidget_HeroSystem_Customize_Unit_MarvelSetVisible) == 0x000001, "Wrong size on PyWidget_HeroSystem_Customize_Unit_MarvelSetVisible");
static_assert(offsetof(PyWidget_HeroSystem_Customize_Unit_MarvelSetVisible, Visible) == 0x000000, "Member 'PyWidget_HeroSystem_Customize_Unit_MarvelSetVisible::Visible' has a wrong offset!");

}
