#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyExitMenuPanel

#include "Basic.hpp"

#include "PyWidget_ModuleMainPanel_classes.hpp"


namespace SDK
{

// PythonClass PyExitMenuPanel.PyExitMenuPanel
// 0x0000 (0x0610 - 0x0610)
class UPyExitMenuPanel : public UPyWidget_ModuleMainPanel
{
public:
	void OnInitialized();
	void Construct();
	void Destruct();
	void OnBecomeTop();
	void OnBecomeNoneTop();
	void MarvelSetVisible(bool Visible);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyExitMenuPanel">();
	}
	static class UPyExitMenuPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyExitMenuPanel>();
	}
};
static_assert(alignof(UPyExitMenuPanel) == 0x000008, "Wrong alignment on UPyExitMenuPanel");
static_assert(sizeof(UPyExitMenuPanel) == 0x000610, "Wrong size on UPyExitMenuPanel");

}
