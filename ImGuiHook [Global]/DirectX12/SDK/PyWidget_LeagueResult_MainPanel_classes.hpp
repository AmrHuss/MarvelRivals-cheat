#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_LeagueResult_MainPanel

#include "Basic.hpp"

#include "PyWidget_ModuleMainPanel_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_LeagueResult_MainPanel.PyWidget_LeagueResult_MainPanel
// 0x0008 (0x0618 - 0x0610)
class UPyWidget_LeagueResult_MainPanel : public UPyWidget_ModuleMainPanel
{
public:
	uint8                                         Pad_609[0x3];                                      // 0x0609(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RoundResult_LastTime;                              // 0x060C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          AkEvent_OnFinalResult;                             // 0x0610(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_LeagueResult_MainPanel">();
	}
	static class UPyWidget_LeagueResult_MainPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_LeagueResult_MainPanel>();
	}
};
static_assert(alignof(UPyWidget_LeagueResult_MainPanel) == 0x000008, "Wrong alignment on UPyWidget_LeagueResult_MainPanel");
static_assert(sizeof(UPyWidget_LeagueResult_MainPanel) == 0x000618, "Wrong size on UPyWidget_LeagueResult_MainPanel");
static_assert(offsetof(UPyWidget_LeagueResult_MainPanel, RoundResult_LastTime) == 0x00060C, "Member 'UPyWidget_LeagueResult_MainPanel::RoundResult_LastTime' has a wrong offset!");
static_assert(offsetof(UPyWidget_LeagueResult_MainPanel, AkEvent_OnFinalResult) == 0x000610, "Member 'UPyWidget_LeagueResult_MainPanel::AkEvent_OnFinalResult' has a wrong offset!");

}

