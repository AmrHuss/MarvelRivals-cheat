#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Mall_Bundle_Discount

#include "Basic.hpp"

#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_Mall_Bundle_Discount.PyWidget_Mall_Bundle_Discount
// 0x0000 (0x05E8 - 0x05E8)
class UPyWidget_Mall_Bundle_Discount : public UPyMarvelUserWidget
{
public:
	void Construct();
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Mall_Bundle_Discount">();
	}
	static class UPyWidget_Mall_Bundle_Discount* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Mall_Bundle_Discount>();
	}
};
static_assert(alignof(UPyWidget_Mall_Bundle_Discount) == 0x000008, "Wrong alignment on UPyWidget_Mall_Bundle_Discount");
static_assert(sizeof(UPyWidget_Mall_Bundle_Discount) == 0x0005E8, "Wrong size on UPyWidget_Mall_Bundle_Discount");

}

