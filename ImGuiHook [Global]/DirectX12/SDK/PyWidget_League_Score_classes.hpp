#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_League_Score

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_League_Score.PyWidget_League_Score
// 0x0030 (0x0618 - 0x05E8)
class UPyWidget_League_Score : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x3];                                      // 0x05E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Defense_Color;                                     // 0x05E4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           Attack_Color;                                      // 0x05F4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           Empty_Color;                                       // 0x0604(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AnimDelayTime;                                     // 0x0614(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_League_Score">();
	}
	static class UPyWidget_League_Score* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_League_Score>();
	}
};
static_assert(alignof(UPyWidget_League_Score) == 0x000008, "Wrong alignment on UPyWidget_League_Score");
static_assert(sizeof(UPyWidget_League_Score) == 0x000618, "Wrong size on UPyWidget_League_Score");
static_assert(offsetof(UPyWidget_League_Score, Defense_Color) == 0x0005E4, "Member 'UPyWidget_League_Score::Defense_Color' has a wrong offset!");
static_assert(offsetof(UPyWidget_League_Score, Attack_Color) == 0x0005F4, "Member 'UPyWidget_League_Score::Attack_Color' has a wrong offset!");
static_assert(offsetof(UPyWidget_League_Score, Empty_Color) == 0x000604, "Member 'UPyWidget_League_Score::Empty_Color' has a wrong offset!");
static_assert(offsetof(UPyWidget_League_Score, AnimDelayTime) == 0x000614, "Member 'UPyWidget_League_Score::AnimDelayTime' has a wrong offset!");

}
