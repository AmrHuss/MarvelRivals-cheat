#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_SettingOptionEntry

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// DelegateFunction PyWidget_SettingOptionEntry.PyWidget_SettingOptionEntryBase.OnHovered__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct PyWidget_SettingOptionEntryBase_OnHovered__DelegateSignature final
{
public:
	class UWidget*                                HoveredWidget;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_SettingOptionEntryBase_OnHovered__DelegateSignature) == 0x000008, "Wrong alignment on PyWidget_SettingOptionEntryBase_OnHovered__DelegateSignature");
static_assert(sizeof(PyWidget_SettingOptionEntryBase_OnHovered__DelegateSignature) == 0x000008, "Wrong size on PyWidget_SettingOptionEntryBase_OnHovered__DelegateSignature");
static_assert(offsetof(PyWidget_SettingOptionEntryBase_OnHovered__DelegateSignature, HoveredWidget) == 0x000000, "Member 'PyWidget_SettingOptionEntryBase_OnHovered__DelegateSignature::HoveredWidget' has a wrong offset!");

// PythonFunction PyWidget_SettingOptionEntry.PyWidget_SettingOptionEntry.OnMouseEnter
// 0x00B8 (0x00B8 - 0x0000)
struct PyWidget_SettingOptionEntry_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0080)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyWidget_SettingOptionEntry_OnMouseEnter) == 0x000008, "Wrong alignment on PyWidget_SettingOptionEntry_OnMouseEnter");
static_assert(sizeof(PyWidget_SettingOptionEntry_OnMouseEnter) == 0x0000B8, "Wrong size on PyWidget_SettingOptionEntry_OnMouseEnter");
static_assert(offsetof(PyWidget_SettingOptionEntry_OnMouseEnter, MyGeometry) == 0x000000, "Member 'PyWidget_SettingOptionEntry_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(PyWidget_SettingOptionEntry_OnMouseEnter, MouseEvent) == 0x000038, "Member 'PyWidget_SettingOptionEntry_OnMouseEnter::MouseEvent' has a wrong offset!");

// PythonFunction PyWidget_SettingOptionEntry.PyWidget_SettingOptionEntry.OnMouseLeave
// 0x0080 (0x0080 - 0x0000)
struct PyWidget_SettingOptionEntry_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0080)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyWidget_SettingOptionEntry_OnMouseLeave) == 0x000008, "Wrong alignment on PyWidget_SettingOptionEntry_OnMouseLeave");
static_assert(sizeof(PyWidget_SettingOptionEntry_OnMouseLeave) == 0x000080, "Wrong size on PyWidget_SettingOptionEntry_OnMouseLeave");
static_assert(offsetof(PyWidget_SettingOptionEntry_OnMouseLeave, MouseEvent) == 0x000000, "Member 'PyWidget_SettingOptionEntry_OnMouseLeave::MouseEvent' has a wrong offset!");

// PythonFunction PyWidget_SettingOptionEntry.PyWidget_SettingOptionEntry.OnCascadingVisibleChanged
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_SettingOptionEntry_OnCascadingVisibleChanged final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_SettingOptionEntry_OnCascadingVisibleChanged) == 0x000001, "Wrong alignment on PyWidget_SettingOptionEntry_OnCascadingVisibleChanged");
static_assert(sizeof(PyWidget_SettingOptionEntry_OnCascadingVisibleChanged) == 0x000001, "Wrong size on PyWidget_SettingOptionEntry_OnCascadingVisibleChanged");
static_assert(offsetof(PyWidget_SettingOptionEntry_OnCascadingVisibleChanged, Visible) == 0x000000, "Member 'PyWidget_SettingOptionEntry_OnCascadingVisibleChanged::Visible' has a wrong offset!");

}
