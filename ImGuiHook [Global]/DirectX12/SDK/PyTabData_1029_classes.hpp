#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyTabData_1029

#include "Basic.hpp"

#include "Hero_1029_classes.hpp"


namespace SDK
{

// PythonClass PyTabData_1029.PyTabData_1029
// 0x0000 (0x0050 - 0x0050)
class UPyTabData_1029 final : public UTabData_1029
{
public:
	void K2_Initialize();
	void OnAbilityInitialize(int32 AbilityID);
	void OnAbilityActivate(int32 AbilityID);
	void K2_Shutdown();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyTabData_1029">();
	}
	static class UPyTabData_1029* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyTabData_1029>();
	}
};
static_assert(alignof(UPyTabData_1029) == 0x000008, "Wrong alignment on UPyTabData_1029");
static_assert(sizeof(UPyTabData_1029) == 0x000050, "Wrong size on UPyTabData_1029");

}
