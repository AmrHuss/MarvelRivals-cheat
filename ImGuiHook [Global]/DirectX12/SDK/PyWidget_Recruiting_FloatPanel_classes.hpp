#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Recruiting_FloatPanel

#include "Basic.hpp"

#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_Recruiting_FloatPanel.PyWidget_Recruiting_FloatPanel
// 0x0000 (0x05E8 - 0x05E8)
class UPyWidget_Recruiting_FloatPanel : public UPyMarvelUserWidget
{
public:
	void OnInitialized();
	void Construct();
	void Destruct();
	void MarvelSetVisible(bool Visible);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Recruiting_FloatPanel">();
	}
	static class UPyWidget_Recruiting_FloatPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Recruiting_FloatPanel>();
	}
};
static_assert(alignof(UPyWidget_Recruiting_FloatPanel) == 0x000008, "Wrong alignment on UPyWidget_Recruiting_FloatPanel");
static_assert(sizeof(UPyWidget_Recruiting_FloatPanel) == 0x0005E8, "Wrong size on UPyWidget_Recruiting_FloatPanel");

}
