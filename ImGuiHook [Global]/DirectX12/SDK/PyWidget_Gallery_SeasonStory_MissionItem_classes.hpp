#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Gallery_SeasonStory_MissionItem

#include "Basic.hpp"

#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_Gallery_SeasonStory_MissionItem.PyWidget_Gallery_SeasonStory_MissionItem
// 0x0000 (0x05E8 - 0x05E8)
class UPyWidget_Gallery_SeasonStory_MissionItem final : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x3];                                      // 0x05E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MissionId;                                         // 0x05E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Gallery_SeasonStory_MissionItem">();
	}
	static class UPyWidget_Gallery_SeasonStory_MissionItem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Gallery_SeasonStory_MissionItem>();
	}
};
static_assert(alignof(UPyWidget_Gallery_SeasonStory_MissionItem) == 0x000008, "Wrong alignment on UPyWidget_Gallery_SeasonStory_MissionItem");
static_assert(sizeof(UPyWidget_Gallery_SeasonStory_MissionItem) == 0x0005E8, "Wrong size on UPyWidget_Gallery_SeasonStory_MissionItem");
static_assert(offsetof(UPyWidget_Gallery_SeasonStory_MissionItem, MissionId) == 0x0005E4, "Member 'UPyWidget_Gallery_SeasonStory_MissionItem::MissionId' has a wrong offset!");

}
