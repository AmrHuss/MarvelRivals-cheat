#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_LobbyBond_SkillIntroduction

#include "Basic.hpp"

#include "PyWidget_ModuleMainPanel_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_LobbyBond_SkillIntroduction.PyWidget_LobbyBond_SkillIntroduction
// 0x0000 (0x0610 - 0x0610)
class UPyWidget_LobbyBond_SkillIntroduction : public UPyWidget_ModuleMainPanel
{
public:
	void OnInitialized();
	void Construct();
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_LobbyBond_SkillIntroduction">();
	}
	static class UPyWidget_LobbyBond_SkillIntroduction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_LobbyBond_SkillIntroduction>();
	}
};
static_assert(alignof(UPyWidget_LobbyBond_SkillIntroduction) == 0x000008, "Wrong alignment on UPyWidget_LobbyBond_SkillIntroduction");
static_assert(sizeof(UPyWidget_LobbyBond_SkillIntroduction) == 0x000610, "Wrong size on UPyWidget_LobbyBond_SkillIntroduction");

}

