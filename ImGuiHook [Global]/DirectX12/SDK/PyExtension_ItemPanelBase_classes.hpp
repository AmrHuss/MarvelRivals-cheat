#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyExtension_ItemPanelBase

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyExtension_ItemPanelBase.PyExtension_ItemPanelBase
// 0x0000 (0x0030 - 0x0030)
class UPyExtension_ItemPanelBase : public UMarvelUserWidgetExtension
{
public:
	void BP_OnInitialize();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyExtension_ItemPanelBase">();
	}
	static class UPyExtension_ItemPanelBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyExtension_ItemPanelBase>();
	}
};
static_assert(alignof(UPyExtension_ItemPanelBase) == 0x000008, "Wrong alignment on UPyExtension_ItemPanelBase");
static_assert(sizeof(UPyExtension_ItemPanelBase) == 0x000030, "Wrong size on UPyExtension_ItemPanelBase");

}

