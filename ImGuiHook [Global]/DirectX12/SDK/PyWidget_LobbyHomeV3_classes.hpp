#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_LobbyHomeV3

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "PyWidget_LobbyChildPanel_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_LobbyHomeV3.Lobby_Activity_Reminder_Type
// 0x0000 (0x0030 - 0x0030)
class ULobby_Activity_Reminder_Type final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Lobby_Activity_Reminder_Type">();
	}
	static class ULobby_Activity_Reminder_Type* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULobby_Activity_Reminder_Type>();
	}
};
static_assert(alignof(ULobby_Activity_Reminder_Type) == 0x000008, "Wrong alignment on ULobby_Activity_Reminder_Type");
static_assert(sizeof(ULobby_Activity_Reminder_Type) == 0x000030, "Wrong size on ULobby_Activity_Reminder_Type");

// PythonClass PyWidget_LobbyHomeV3.PyWidget_LobbyHomeV3
// 0x0010 (0x0620 - 0x0610)
class UPyWidget_LobbyHomeV3 : public UPyWidget_LobbyChildPanel
{
public:
	class UAkAudioEvent*                          AKEvent_LobbyStart;                                // 0x0610(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputAction*                           EscAction;                                         // 0x0618(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_LobbyHomeV3">();
	}
	static class UPyWidget_LobbyHomeV3* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_LobbyHomeV3>();
	}
};
static_assert(alignof(UPyWidget_LobbyHomeV3) == 0x000008, "Wrong alignment on UPyWidget_LobbyHomeV3");
static_assert(sizeof(UPyWidget_LobbyHomeV3) == 0x000620, "Wrong size on UPyWidget_LobbyHomeV3");
static_assert(offsetof(UPyWidget_LobbyHomeV3, AKEvent_LobbyStart) == 0x000610, "Member 'UPyWidget_LobbyHomeV3::AKEvent_LobbyStart' has a wrong offset!");
static_assert(offsetof(UPyWidget_LobbyHomeV3, EscAction) == 0x000618, "Member 'UPyWidget_LobbyHomeV3::EscAction' has a wrong offset!");

}
