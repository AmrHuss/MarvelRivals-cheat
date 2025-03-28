#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SettingOptionEntryUtils

#include "Basic.hpp"


namespace SDK::Params
{

// PythonFunction SettingOptionEntryUtils.PySettingOptionEntryUtilsBluePrintLib.request_tag_refresh
// 0x0018 (0x0018 - 0x0000)
struct PySettingOptionEntryUtilsBluePrintLib_Request_tag_refresh final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         Refresh_tags;                                      // 0x0008(0x0010)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PySettingOptionEntryUtilsBluePrintLib_Request_tag_refresh) == 0x000008, "Wrong alignment on PySettingOptionEntryUtilsBluePrintLib_Request_tag_refresh");
static_assert(sizeof(PySettingOptionEntryUtilsBluePrintLib_Request_tag_refresh) == 0x000018, "Wrong size on PySettingOptionEntryUtilsBluePrintLib_Request_tag_refresh");
static_assert(offsetof(PySettingOptionEntryUtilsBluePrintLib_Request_tag_refresh, Obj) == 0x000000, "Member 'PySettingOptionEntryUtilsBluePrintLib_Request_tag_refresh::Obj' has a wrong offset!");
static_assert(offsetof(PySettingOptionEntryUtilsBluePrintLib_Request_tag_refresh, Refresh_tags) == 0x000008, "Member 'PySettingOptionEntryUtilsBluePrintLib_Request_tag_refresh::Refresh_tags' has a wrong offset!");

// PythonFunction SettingOptionEntryUtils.PySettingOptionEntryUtilsBluePrintLib.request_parent_setting_page_refresh
// 0x0008 (0x0008 - 0x0000)
struct PySettingOptionEntryUtilsBluePrintLib_Request_parent_setting_page_refresh final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PySettingOptionEntryUtilsBluePrintLib_Request_parent_setting_page_refresh) == 0x000008, "Wrong alignment on PySettingOptionEntryUtilsBluePrintLib_Request_parent_setting_page_refresh");
static_assert(sizeof(PySettingOptionEntryUtilsBluePrintLib_Request_parent_setting_page_refresh) == 0x000008, "Wrong size on PySettingOptionEntryUtilsBluePrintLib_Request_parent_setting_page_refresh");
static_assert(offsetof(PySettingOptionEntryUtilsBluePrintLib_Request_parent_setting_page_refresh, Obj) == 0x000000, "Member 'PySettingOptionEntryUtilsBluePrintLib_Request_parent_setting_page_refresh::Obj' has a wrong offset!");

}

