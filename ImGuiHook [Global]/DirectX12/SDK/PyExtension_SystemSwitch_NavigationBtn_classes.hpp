#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyExtension_SystemSwitch_NavigationBtn

#include "Basic.hpp"

#include "PyExtension_SystemSwitch_classes.hpp"


namespace SDK
{

// PythonClass PyExtension_SystemSwitch_NavigationBtn.PyExtension_SystemSwitch_NavigationBtn
// 0x0000 (0x0030 - 0x0030)
class UPyExtension_SystemSwitch_NavigationBtn final : public UPyExtension_SystemSwitch_UserWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyExtension_SystemSwitch_NavigationBtn">();
	}
	static class UPyExtension_SystemSwitch_NavigationBtn* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyExtension_SystemSwitch_NavigationBtn>();
	}
};
static_assert(alignof(UPyExtension_SystemSwitch_NavigationBtn) == 0x000008, "Wrong alignment on UPyExtension_SystemSwitch_NavigationBtn");
static_assert(sizeof(UPyExtension_SystemSwitch_NavigationBtn) == 0x000030, "Wrong size on UPyExtension_SystemSwitch_NavigationBtn");

}
