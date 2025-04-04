#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_GMCmdButton

#include "Basic.hpp"


namespace SDK::Params
{

// DelegateFunction PyWidget_GMCmdButton.PyWidget_GMCmdButton.OnCmdClicked__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct PyWidget_GMCmdButton_OnCmdClicked__DelegateSignature final
{
public:
	class FString                                 Cmd_0;                                             // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CmdName;                                           // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_GMCmdButton_OnCmdClicked__DelegateSignature) == 0x000008, "Wrong alignment on PyWidget_GMCmdButton_OnCmdClicked__DelegateSignature");
static_assert(sizeof(PyWidget_GMCmdButton_OnCmdClicked__DelegateSignature) == 0x000020, "Wrong size on PyWidget_GMCmdButton_OnCmdClicked__DelegateSignature");
static_assert(offsetof(PyWidget_GMCmdButton_OnCmdClicked__DelegateSignature, Cmd_0) == 0x000000, "Member 'PyWidget_GMCmdButton_OnCmdClicked__DelegateSignature::Cmd_0' has a wrong offset!");
static_assert(offsetof(PyWidget_GMCmdButton_OnCmdClicked__DelegateSignature, CmdName) == 0x000010, "Member 'PyWidget_GMCmdButton_OnCmdClicked__DelegateSignature::CmdName' has a wrong offset!");

// DelegateFunction PyWidget_GMCmdButton.PyWidget_GMCmdButton.OnCmdRightClicked__DelegateSignature
// 0x0030 (0x0030 - 0x0000)
struct PyWidget_GMCmdButton_OnCmdRightClicked__DelegateSignature final
{
public:
	class FString                                 Cmd_0;                                             // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CmdName;                                           // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Description_0;                                     // 0x0020(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_GMCmdButton_OnCmdRightClicked__DelegateSignature) == 0x000008, "Wrong alignment on PyWidget_GMCmdButton_OnCmdRightClicked__DelegateSignature");
static_assert(sizeof(PyWidget_GMCmdButton_OnCmdRightClicked__DelegateSignature) == 0x000030, "Wrong size on PyWidget_GMCmdButton_OnCmdRightClicked__DelegateSignature");
static_assert(offsetof(PyWidget_GMCmdButton_OnCmdRightClicked__DelegateSignature, Cmd_0) == 0x000000, "Member 'PyWidget_GMCmdButton_OnCmdRightClicked__DelegateSignature::Cmd_0' has a wrong offset!");
static_assert(offsetof(PyWidget_GMCmdButton_OnCmdRightClicked__DelegateSignature, CmdName) == 0x000010, "Member 'PyWidget_GMCmdButton_OnCmdRightClicked__DelegateSignature::CmdName' has a wrong offset!");
static_assert(offsetof(PyWidget_GMCmdButton_OnCmdRightClicked__DelegateSignature, Description_0) == 0x000020, "Member 'PyWidget_GMCmdButton_OnCmdRightClicked__DelegateSignature::Description_0' has a wrong offset!");

// DelegateFunction PyWidget_GMCmdButton.PyWidget_GMCmdButton.OnCmdEditor__DelegateSignature
// 0x0030 (0x0030 - 0x0000)
struct PyWidget_GMCmdButton_OnCmdEditor__DelegateSignature final
{
public:
	class FString                                 GroupName;                                         // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CmdName;                                           // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CmdStr;                                            // 0x0020(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_GMCmdButton_OnCmdEditor__DelegateSignature) == 0x000008, "Wrong alignment on PyWidget_GMCmdButton_OnCmdEditor__DelegateSignature");
static_assert(sizeof(PyWidget_GMCmdButton_OnCmdEditor__DelegateSignature) == 0x000030, "Wrong size on PyWidget_GMCmdButton_OnCmdEditor__DelegateSignature");
static_assert(offsetof(PyWidget_GMCmdButton_OnCmdEditor__DelegateSignature, GroupName) == 0x000000, "Member 'PyWidget_GMCmdButton_OnCmdEditor__DelegateSignature::GroupName' has a wrong offset!");
static_assert(offsetof(PyWidget_GMCmdButton_OnCmdEditor__DelegateSignature, CmdName) == 0x000010, "Member 'PyWidget_GMCmdButton_OnCmdEditor__DelegateSignature::CmdName' has a wrong offset!");
static_assert(offsetof(PyWidget_GMCmdButton_OnCmdEditor__DelegateSignature, CmdStr) == 0x000020, "Member 'PyWidget_GMCmdButton_OnCmdEditor__DelegateSignature::CmdStr' has a wrong offset!");

// PythonFunction PyWidget_GMCmdButton.PyWidget_GMCmdButton.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_GMCmdButton_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_GMCmdButton_PreConstruct) == 0x000001, "Wrong alignment on PyWidget_GMCmdButton_PreConstruct");
static_assert(sizeof(PyWidget_GMCmdButton_PreConstruct) == 0x000001, "Wrong size on PyWidget_GMCmdButton_PreConstruct");
static_assert(offsetof(PyWidget_GMCmdButton_PreConstruct, IsDesignTime) == 0x000000, "Member 'PyWidget_GMCmdButton_PreConstruct::IsDesignTime' has a wrong offset!");

// PythonFunction PyWidget_GMCmdButton.PyWidget_GMCmdButton.OnListItemObjectSet
// 0x0008 (0x0008 - 0x0000)
struct PyWidget_GMCmdButton_OnListItemObjectSet final
{
public:
	class UObject*                                ItemObject_0;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_GMCmdButton_OnListItemObjectSet) == 0x000008, "Wrong alignment on PyWidget_GMCmdButton_OnListItemObjectSet");
static_assert(sizeof(PyWidget_GMCmdButton_OnListItemObjectSet) == 0x000008, "Wrong size on PyWidget_GMCmdButton_OnListItemObjectSet");
static_assert(offsetof(PyWidget_GMCmdButton_OnListItemObjectSet, ItemObject_0) == 0x000000, "Member 'PyWidget_GMCmdButton_OnListItemObjectSet::ItemObject_0' has a wrong offset!");

}

