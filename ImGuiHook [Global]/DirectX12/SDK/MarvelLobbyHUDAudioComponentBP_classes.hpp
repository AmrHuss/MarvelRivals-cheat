#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MarvelLobbyHUDAudioComponentBP

#include "Basic.hpp"

#include "PyMarvelLobbyHUD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MarvelLobbyHUDAudioComponentBP.MarvelLobbyHUDAudioComponentBP_C
// 0x0000 (0x0120 - 0x0120)
class UMarvelLobbyHUDAudioComponentBP_C final : public UPyLobbyAudioComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MarvelLobbyHUDAudioComponentBP_C">();
	}
	static class UMarvelLobbyHUDAudioComponentBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMarvelLobbyHUDAudioComponentBP_C>();
	}
};
static_assert(alignof(UMarvelLobbyHUDAudioComponentBP_C) == 0x000008, "Wrong alignment on UMarvelLobbyHUDAudioComponentBP_C");
static_assert(sizeof(UMarvelLobbyHUDAudioComponentBP_C) == 0x000120, "Wrong size on UMarvelLobbyHUDAudioComponentBP_C");

}

