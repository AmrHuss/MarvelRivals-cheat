#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyLevelTeamDeathMatchAudioComponent

#include "Basic.hpp"

#include "MarvelLevel_structs.hpp"
#include "MarvelLevel_classes.hpp"
#include "PyLevelDeathMatchAudioComponent_classes.hpp"


namespace SDK
{

// PythonClass PyLevelTeamDeathMatchAudioComponent.PyLevelTeamDeathMatchAudioComponent
// 0x0000 (0x0108 - 0x0108)
class UPyLevelTeamDeathMatchAudioComponent final : public UPyLevelDeathMatchAudioComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyLevelTeamDeathMatchAudioComponent">();
	}
	static class UPyLevelTeamDeathMatchAudioComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyLevelTeamDeathMatchAudioComponent>();
	}
};
static_assert(alignof(UPyLevelTeamDeathMatchAudioComponent) == 0x000008, "Wrong alignment on UPyLevelTeamDeathMatchAudioComponent");
static_assert(sizeof(UPyLevelTeamDeathMatchAudioComponent) == 0x000108, "Wrong size on UPyLevelTeamDeathMatchAudioComponent");

// PythonClass PyLevelTeamDeathMatchAudioComponent.PyLevelTeamDeathMatchArcadeAudioComponent
// 0x0000 (0x0108 - 0x0108)
class UPyLevelTeamDeathMatchArcadeAudioComponent final : public UPyLevelDeathMatchAudioComponent
{
public:
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyLevelTeamDeathMatchArcadeAudioComponent">();
	}
	static class UPyLevelTeamDeathMatchArcadeAudioComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyLevelTeamDeathMatchArcadeAudioComponent>();
	}
};
static_assert(alignof(UPyLevelTeamDeathMatchArcadeAudioComponent) == 0x000008, "Wrong alignment on UPyLevelTeamDeathMatchArcadeAudioComponent");
static_assert(sizeof(UPyLevelTeamDeathMatchArcadeAudioComponent) == 0x000108, "Wrong size on UPyLevelTeamDeathMatchArcadeAudioComponent");

// PythonClass PyLevelTeamDeathMatchAudioComponent.PyLevelTeamDeathMatchAudioItem
// 0x01B0 (0x01E8 - 0x0038)
class UPyLevelTeamDeathMatchAudioItem final : public UMarvelLevelAudioItem
{
public:
	class FString                                 SwitchAudioNumberKey;                              // 0x0038(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLevelAudioContent>             SelectStage;                                       // 0x0048(0x0010)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FLevelAudioContent>             PrepareStage;                                      // 0x0058(0x0010)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FLevelAudioContent>             FightStage;                                        // 0x0068(0x0010)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FLevelAudioContent>             OverTimeStage;                                     // 0x0078(0x0010)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FLevelAudioContent>             GameResult;                                        // 0x0088(0x0010)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FLevelAudioContent>             DrawResult;                                        // 0x0098(0x0010)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FLevelAudioContent>             Respawn;                                           // 0x00A8(0x0010)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FLevelAudioContent>             WinScoreCheck;                                     // 0x00B8(0x0010)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FLevelAudioContent>             AddScore;                                          // 0x00C8(0x0010)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FLevelAudioContent>             SubScore;                                          // 0x00D8(0x0010)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FLevelAudioContent>             SelfScoreWin1;                                     // 0x00E8(0x0010)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FLevelAudioContent>             SelfScoreWin2;                                     // 0x00F8(0x0010)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FLevelAudioContent>             SelfScoreWin3;                                     // 0x0108(0x0010)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FLevelAudioContent>             SelfScoreWin4;                                     // 0x0118(0x0010)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FLevelAudioContent>             SelfScoreWin5;                                     // 0x0128(0x0010)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FLevelAudioContent>             SelfScoreWin10;                                    // 0x0138(0x0010)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FLevelAudioContent>             SelfScoreWin15;                                    // 0x0148(0x0010)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FLevelAudioContent>             EnemyScoreWin1;                                    // 0x0158(0x0010)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FLevelAudioContent>             EnemyScoreWin2;                                    // 0x0168(0x0010)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FLevelAudioContent>             EnemyScoreWin3;                                    // 0x0178(0x0010)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FLevelAudioContent>             EnemyScoreWin4;                                    // 0x0188(0x0010)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FLevelAudioContent>             EnemyScoreWin5;                                    // 0x0198(0x0010)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FLevelAudioContent>             EnemyScoreWin10;                                   // 0x01A8(0x0010)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FLevelAudioContent>             EnemyScoreWin15;                                   // 0x01B8(0x0010)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FLevelAudioContent>             GainAdvantage;                                     // 0x01C8(0x0010)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FLevelAudioContent>             LostAdvantage;                                     // 0x01D8(0x0010)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyLevelTeamDeathMatchAudioItem">();
	}
	static class UPyLevelTeamDeathMatchAudioItem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyLevelTeamDeathMatchAudioItem>();
	}
};
static_assert(alignof(UPyLevelTeamDeathMatchAudioItem) == 0x000008, "Wrong alignment on UPyLevelTeamDeathMatchAudioItem");
static_assert(sizeof(UPyLevelTeamDeathMatchAudioItem) == 0x0001E8, "Wrong size on UPyLevelTeamDeathMatchAudioItem");
static_assert(offsetof(UPyLevelTeamDeathMatchAudioItem, SwitchAudioNumberKey) == 0x000038, "Member 'UPyLevelTeamDeathMatchAudioItem::SwitchAudioNumberKey' has a wrong offset!");
static_assert(offsetof(UPyLevelTeamDeathMatchAudioItem, SelectStage) == 0x000048, "Member 'UPyLevelTeamDeathMatchAudioItem::SelectStage' has a wrong offset!");
static_assert(offsetof(UPyLevelTeamDeathMatchAudioItem, PrepareStage) == 0x000058, "Member 'UPyLevelTeamDeathMatchAudioItem::PrepareStage' has a wrong offset!");
static_assert(offsetof(UPyLevelTeamDeathMatchAudioItem, FightStage) == 0x000068, "Member 'UPyLevelTeamDeathMatchAudioItem::FightStage' has a wrong offset!");
static_assert(offsetof(UPyLevelTeamDeathMatchAudioItem, OverTimeStage) == 0x000078, "Member 'UPyLevelTeamDeathMatchAudioItem::OverTimeStage' has a wrong offset!");
static_assert(offsetof(UPyLevelTeamDeathMatchAudioItem, GameResult) == 0x000088, "Member 'UPyLevelTeamDeathMatchAudioItem::GameResult' has a wrong offset!");
static_assert(offsetof(UPyLevelTeamDeathMatchAudioItem, DrawResult) == 0x000098, "Member 'UPyLevelTeamDeathMatchAudioItem::DrawResult' has a wrong offset!");
static_assert(offsetof(UPyLevelTeamDeathMatchAudioItem, Respawn) == 0x0000A8, "Member 'UPyLevelTeamDeathMatchAudioItem::Respawn' has a wrong offset!");
static_assert(offsetof(UPyLevelTeamDeathMatchAudioItem, WinScoreCheck) == 0x0000B8, "Member 'UPyLevelTeamDeathMatchAudioItem::WinScoreCheck' has a wrong offset!");
static_assert(offsetof(UPyLevelTeamDeathMatchAudioItem, AddScore) == 0x0000C8, "Member 'UPyLevelTeamDeathMatchAudioItem::AddScore' has a wrong offset!");
static_assert(offsetof(UPyLevelTeamDeathMatchAudioItem, SubScore) == 0x0000D8, "Member 'UPyLevelTeamDeathMatchAudioItem::SubScore' has a wrong offset!");
static_assert(offsetof(UPyLevelTeamDeathMatchAudioItem, SelfScoreWin1) == 0x0000E8, "Member 'UPyLevelTeamDeathMatchAudioItem::SelfScoreWin1' has a wrong offset!");
static_assert(offsetof(UPyLevelTeamDeathMatchAudioItem, SelfScoreWin2) == 0x0000F8, "Member 'UPyLevelTeamDeathMatchAudioItem::SelfScoreWin2' has a wrong offset!");
static_assert(offsetof(UPyLevelTeamDeathMatchAudioItem, SelfScoreWin3) == 0x000108, "Member 'UPyLevelTeamDeathMatchAudioItem::SelfScoreWin3' has a wrong offset!");
static_assert(offsetof(UPyLevelTeamDeathMatchAudioItem, SelfScoreWin4) == 0x000118, "Member 'UPyLevelTeamDeathMatchAudioItem::SelfScoreWin4' has a wrong offset!");
static_assert(offsetof(UPyLevelTeamDeathMatchAudioItem, SelfScoreWin5) == 0x000128, "Member 'UPyLevelTeamDeathMatchAudioItem::SelfScoreWin5' has a wrong offset!");
static_assert(offsetof(UPyLevelTeamDeathMatchAudioItem, SelfScoreWin10) == 0x000138, "Member 'UPyLevelTeamDeathMatchAudioItem::SelfScoreWin10' has a wrong offset!");
static_assert(offsetof(UPyLevelTeamDeathMatchAudioItem, SelfScoreWin15) == 0x000148, "Member 'UPyLevelTeamDeathMatchAudioItem::SelfScoreWin15' has a wrong offset!");
static_assert(offsetof(UPyLevelTeamDeathMatchAudioItem, EnemyScoreWin1) == 0x000158, "Member 'UPyLevelTeamDeathMatchAudioItem::EnemyScoreWin1' has a wrong offset!");
static_assert(offsetof(UPyLevelTeamDeathMatchAudioItem, EnemyScoreWin2) == 0x000168, "Member 'UPyLevelTeamDeathMatchAudioItem::EnemyScoreWin2' has a wrong offset!");
static_assert(offsetof(UPyLevelTeamDeathMatchAudioItem, EnemyScoreWin3) == 0x000178, "Member 'UPyLevelTeamDeathMatchAudioItem::EnemyScoreWin3' has a wrong offset!");
static_assert(offsetof(UPyLevelTeamDeathMatchAudioItem, EnemyScoreWin4) == 0x000188, "Member 'UPyLevelTeamDeathMatchAudioItem::EnemyScoreWin4' has a wrong offset!");
static_assert(offsetof(UPyLevelTeamDeathMatchAudioItem, EnemyScoreWin5) == 0x000198, "Member 'UPyLevelTeamDeathMatchAudioItem::EnemyScoreWin5' has a wrong offset!");
static_assert(offsetof(UPyLevelTeamDeathMatchAudioItem, EnemyScoreWin10) == 0x0001A8, "Member 'UPyLevelTeamDeathMatchAudioItem::EnemyScoreWin10' has a wrong offset!");
static_assert(offsetof(UPyLevelTeamDeathMatchAudioItem, EnemyScoreWin15) == 0x0001B8, "Member 'UPyLevelTeamDeathMatchAudioItem::EnemyScoreWin15' has a wrong offset!");
static_assert(offsetof(UPyLevelTeamDeathMatchAudioItem, GainAdvantage) == 0x0001C8, "Member 'UPyLevelTeamDeathMatchAudioItem::GainAdvantage' has a wrong offset!");
static_assert(offsetof(UPyLevelTeamDeathMatchAudioItem, LostAdvantage) == 0x0001D8, "Member 'UPyLevelTeamDeathMatchAudioItem::LostAdvantage' has a wrong offset!");

}
