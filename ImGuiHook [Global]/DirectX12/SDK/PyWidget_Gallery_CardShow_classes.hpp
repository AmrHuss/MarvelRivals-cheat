#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Gallery_CardShow

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_Gallery_CardShow.PyWidget_Gallery_CardShow
// 0x0000 (0x03B8 - 0x03B8)
class UPyWidget_Gallery_CardShow : public UUserWidget
{
public:
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Gallery_CardShow">();
	}
	static class UPyWidget_Gallery_CardShow* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Gallery_CardShow>();
	}
};
static_assert(alignof(UPyWidget_Gallery_CardShow) == 0x000008, "Wrong alignment on UPyWidget_Gallery_CardShow");
static_assert(sizeof(UPyWidget_Gallery_CardShow) == 0x0003B8, "Wrong size on UPyWidget_Gallery_CardShow");

}
