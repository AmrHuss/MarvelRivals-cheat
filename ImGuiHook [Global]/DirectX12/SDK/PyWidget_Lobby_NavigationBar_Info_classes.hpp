#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Lobby_NavigationBar_Info

#include "Basic.hpp"

#include "PyWidget_Common_NavigationBar_Info_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_Lobby_NavigationBar_Info.PyWidget_Lobby_NavigationBar_FirstInfo
// 0x0010 (0x0668 - 0x0658)
class UPyWidget_Lobby_NavigationBar_FirstInfo : public UPyWidget_Common_NavigationBar_FirstInfo
{
public:
	TSubclassOf<class UUserWidget>                PlayBtnClass;                                      // 0x0658(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UUserWidget>                HomeBtnClass;                                      // 0x0660(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Lobby_NavigationBar_FirstInfo">();
	}
	static class UPyWidget_Lobby_NavigationBar_FirstInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Lobby_NavigationBar_FirstInfo>();
	}
};
static_assert(alignof(UPyWidget_Lobby_NavigationBar_FirstInfo) == 0x000008, "Wrong alignment on UPyWidget_Lobby_NavigationBar_FirstInfo");
static_assert(sizeof(UPyWidget_Lobby_NavigationBar_FirstInfo) == 0x000668, "Wrong size on UPyWidget_Lobby_NavigationBar_FirstInfo");
static_assert(offsetof(UPyWidget_Lobby_NavigationBar_FirstInfo, PlayBtnClass) == 0x000658, "Member 'UPyWidget_Lobby_NavigationBar_FirstInfo::PlayBtnClass' has a wrong offset!");
static_assert(offsetof(UPyWidget_Lobby_NavigationBar_FirstInfo, HomeBtnClass) == 0x000660, "Member 'UPyWidget_Lobby_NavigationBar_FirstInfo::HomeBtnClass' has a wrong offset!");

}

