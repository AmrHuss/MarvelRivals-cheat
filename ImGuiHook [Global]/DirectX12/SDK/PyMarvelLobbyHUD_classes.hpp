#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyMarvelLobbyHUD

#include "Basic.hpp"

#include "PyMarvelHUD_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// PythonClass PyMarvelLobbyHUD.PyMarvelLobbyHUD
// 0x0000 (0x06D8 - 0x06D8)
class APyMarvelLobbyHUD : public APyMarvelHUD
{
public:
	void ReceiveEndPlay(EEndPlayReason Reason);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyMarvelLobbyHUD">();
	}
	static class APyMarvelLobbyHUD* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyMarvelLobbyHUD>();
	}
};
static_assert(alignof(APyMarvelLobbyHUD) == 0x000008, "Wrong alignment on APyMarvelLobbyHUD");
static_assert(sizeof(APyMarvelLobbyHUD) == 0x0006D8, "Wrong size on APyMarvelLobbyHUD");

// PythonClass PyMarvelLobbyHUD.PyLobbyAudioComponent
// 0x0030 (0x0120 - 0x00F0)
class UPyLobbyAudioComponent : public UActorComponent
{
public:
	class UMarvelMusicItem*                       MusicItem_Login;                                   // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelMusicItem*                       MusicItem_Login2LobbyVideo;                        // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelMusicItem*                       MusicItem_Main;                                    // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelMusicItem*                       MusicItem_InSquad;                                 // 0x0108(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelMusicItem*                       MusicItem_Matching;                                // 0x0110(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          AkEvent_BackgroundMain;                            // 0x0118(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyLobbyAudioComponent">();
	}
	static class UPyLobbyAudioComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyLobbyAudioComponent>();
	}
};
static_assert(alignof(UPyLobbyAudioComponent) == 0x000008, "Wrong alignment on UPyLobbyAudioComponent");
static_assert(sizeof(UPyLobbyAudioComponent) == 0x000120, "Wrong size on UPyLobbyAudioComponent");
static_assert(offsetof(UPyLobbyAudioComponent, MusicItem_Login) == 0x0000F0, "Member 'UPyLobbyAudioComponent::MusicItem_Login' has a wrong offset!");
static_assert(offsetof(UPyLobbyAudioComponent, MusicItem_Login2LobbyVideo) == 0x0000F8, "Member 'UPyLobbyAudioComponent::MusicItem_Login2LobbyVideo' has a wrong offset!");
static_assert(offsetof(UPyLobbyAudioComponent, MusicItem_Main) == 0x000100, "Member 'UPyLobbyAudioComponent::MusicItem_Main' has a wrong offset!");
static_assert(offsetof(UPyLobbyAudioComponent, MusicItem_InSquad) == 0x000108, "Member 'UPyLobbyAudioComponent::MusicItem_InSquad' has a wrong offset!");
static_assert(offsetof(UPyLobbyAudioComponent, MusicItem_Matching) == 0x000110, "Member 'UPyLobbyAudioComponent::MusicItem_Matching' has a wrong offset!");
static_assert(offsetof(UPyLobbyAudioComponent, AkEvent_BackgroundMain) == 0x000118, "Member 'UPyLobbyAudioComponent::AkEvent_BackgroundMain' has a wrong offset!");

}

