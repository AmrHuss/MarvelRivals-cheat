#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_League_MatchResult

#include "Basic.hpp"

#include "Python_enums_structs.hpp"
#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_League_MatchResult.PyWidget_League_RankingTitle
// 0x0028 (0x0610 - 0x05E8)
class UPyWidget_League_RankingTitle : public UPyMarvelUserWidget
{
public:
	ELeagueRankingTitle                           Initial_State;                                     // 0x05E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5E2[0x2];                                      // 0x05E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Preview_RankN;                                     // 0x05E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                     MaterialChampion;                                  // 0x05E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                     MaterialRunnerUp;                                  // 0x05F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                     MaterialThird;                                     // 0x05F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                     MaterialOther;                                     // 0x0600(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                     MaterialNone;                                      // 0x0608(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_League_RankingTitle">();
	}
	static class UPyWidget_League_RankingTitle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_League_RankingTitle>();
	}
};
static_assert(alignof(UPyWidget_League_RankingTitle) == 0x000008, "Wrong alignment on UPyWidget_League_RankingTitle");
static_assert(sizeof(UPyWidget_League_RankingTitle) == 0x000610, "Wrong size on UPyWidget_League_RankingTitle");
static_assert(offsetof(UPyWidget_League_RankingTitle, Initial_State) == 0x0005E1, "Member 'UPyWidget_League_RankingTitle::Initial_State' has a wrong offset!");
static_assert(offsetof(UPyWidget_League_RankingTitle, Preview_RankN) == 0x0005E4, "Member 'UPyWidget_League_RankingTitle::Preview_RankN' has a wrong offset!");
static_assert(offsetof(UPyWidget_League_RankingTitle, MaterialChampion) == 0x0005E8, "Member 'UPyWidget_League_RankingTitle::MaterialChampion' has a wrong offset!");
static_assert(offsetof(UPyWidget_League_RankingTitle, MaterialRunnerUp) == 0x0005F0, "Member 'UPyWidget_League_RankingTitle::MaterialRunnerUp' has a wrong offset!");
static_assert(offsetof(UPyWidget_League_RankingTitle, MaterialThird) == 0x0005F8, "Member 'UPyWidget_League_RankingTitle::MaterialThird' has a wrong offset!");
static_assert(offsetof(UPyWidget_League_RankingTitle, MaterialOther) == 0x000600, "Member 'UPyWidget_League_RankingTitle::MaterialOther' has a wrong offset!");
static_assert(offsetof(UPyWidget_League_RankingTitle, MaterialNone) == 0x000608, "Member 'UPyWidget_League_RankingTitle::MaterialNone' has a wrong offset!");

// PythonClass PyWidget_League_MatchResult.PyWidget_League_MatchResult
// 0x0020 (0x0608 - 0x05E8)
class UPyWidget_League_MatchResult : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x7];                                      // 0x05E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          AkEvent_Champion;                                  // 0x05E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          AkEvent_RunnerUp;                                  // 0x05F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          AkEvent_Third;                                     // 0x05F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          AkEvent_Other;                                     // 0x0600(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_League_MatchResult">();
	}
	static class UPyWidget_League_MatchResult* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_League_MatchResult>();
	}
};
static_assert(alignof(UPyWidget_League_MatchResult) == 0x000008, "Wrong alignment on UPyWidget_League_MatchResult");
static_assert(sizeof(UPyWidget_League_MatchResult) == 0x000608, "Wrong size on UPyWidget_League_MatchResult");
static_assert(offsetof(UPyWidget_League_MatchResult, AkEvent_Champion) == 0x0005E8, "Member 'UPyWidget_League_MatchResult::AkEvent_Champion' has a wrong offset!");
static_assert(offsetof(UPyWidget_League_MatchResult, AkEvent_RunnerUp) == 0x0005F0, "Member 'UPyWidget_League_MatchResult::AkEvent_RunnerUp' has a wrong offset!");
static_assert(offsetof(UPyWidget_League_MatchResult, AkEvent_Third) == 0x0005F8, "Member 'UPyWidget_League_MatchResult::AkEvent_Third' has a wrong offset!");
static_assert(offsetof(UPyWidget_League_MatchResult, AkEvent_Other) == 0x000600, "Member 'UPyWidget_League_MatchResult::AkEvent_Other' has a wrong offset!");

}
