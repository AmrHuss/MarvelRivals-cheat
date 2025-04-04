#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_BattlePass_Crystal

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_BattlePass_Crystal.PyWidget_BattlePass_Crystal
// 0x0020 (0x03D8 - 0x03B8)
class UPyWidget_BattlePass_Crystal : public UUserWidget
{
public:
	class UMarvelTextBlock*                       Text_SeasonName;                                   // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelTextBlock*                       Text_InProgress;                                   // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelImage*                           Img_SesonName;                                     // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelOverlay*                         Overlay_SeasonName;                                // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_BattlePass_Crystal">();
	}
	static class UPyWidget_BattlePass_Crystal* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_BattlePass_Crystal>();
	}
};
static_assert(alignof(UPyWidget_BattlePass_Crystal) == 0x000008, "Wrong alignment on UPyWidget_BattlePass_Crystal");
static_assert(sizeof(UPyWidget_BattlePass_Crystal) == 0x0003D8, "Wrong size on UPyWidget_BattlePass_Crystal");
static_assert(offsetof(UPyWidget_BattlePass_Crystal, Text_SeasonName) == 0x0003B8, "Member 'UPyWidget_BattlePass_Crystal::Text_SeasonName' has a wrong offset!");
static_assert(offsetof(UPyWidget_BattlePass_Crystal, Text_InProgress) == 0x0003C0, "Member 'UPyWidget_BattlePass_Crystal::Text_InProgress' has a wrong offset!");
static_assert(offsetof(UPyWidget_BattlePass_Crystal, Img_SesonName) == 0x0003C8, "Member 'UPyWidget_BattlePass_Crystal::Img_SesonName' has a wrong offset!");
static_assert(offsetof(UPyWidget_BattlePass_Crystal, Overlay_SeasonName) == 0x0003D0, "Member 'UPyWidget_BattlePass_Crystal::Overlay_SeasonName' has a wrong offset!");

}

