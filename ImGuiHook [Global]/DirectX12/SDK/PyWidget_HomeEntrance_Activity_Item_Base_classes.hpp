#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_HomeEntrance_Activity_Item_Base

#include "Basic.hpp"

#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_HomeEntrance_Activity_Item_Base.PyWidget_HomeEntrance_Activity_Item_Widget_Base
// 0x0000 (0x05E8 - 0x05E8)
class UPyWidget_HomeEntrance_Activity_Item_Widget_Base : public UPyMarvelUserWidget
{
public:
	void OnInitialized();
	void Construct();
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_HomeEntrance_Activity_Item_Widget_Base">();
	}
	static class UPyWidget_HomeEntrance_Activity_Item_Widget_Base* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_HomeEntrance_Activity_Item_Widget_Base>();
	}
};
static_assert(alignof(UPyWidget_HomeEntrance_Activity_Item_Widget_Base) == 0x000008, "Wrong alignment on UPyWidget_HomeEntrance_Activity_Item_Widget_Base");
static_assert(sizeof(UPyWidget_HomeEntrance_Activity_Item_Widget_Base) == 0x0005E8, "Wrong size on UPyWidget_HomeEntrance_Activity_Item_Widget_Base");

}

