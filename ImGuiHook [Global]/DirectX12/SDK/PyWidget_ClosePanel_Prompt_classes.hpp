#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_ClosePanel_Prompt

#include "Basic.hpp"

#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_ClosePanel_Prompt.PyWidget_ClosePanel_Prompt
// 0x0000 (0x05E8 - 0x05E8)
class UPyWidget_ClosePanel_Prompt : public UPyMarvelUserWidget
{
public:
	void OnInitialized();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_ClosePanel_Prompt">();
	}
	static class UPyWidget_ClosePanel_Prompt* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_ClosePanel_Prompt>();
	}
};
static_assert(alignof(UPyWidget_ClosePanel_Prompt) == 0x000008, "Wrong alignment on UPyWidget_ClosePanel_Prompt");
static_assert(sizeof(UPyWidget_ClosePanel_Prompt) == 0x0005E8, "Wrong size on UPyWidget_ClosePanel_Prompt");

}
