#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_FriendsEntry

#include "Basic.hpp"

#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_FriendsEntry.PyWidget_FriendsEntry
// 0x0030 (0x0618 - 0x05E8)
class UPyWidget_FriendsEntry : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x7];                                      // 0x05E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Img_Offline;                                       // 0x05E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             Img_Online;                                        // 0x05F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             Img_Leave;                                         // 0x05F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             Img_Team;                                          // 0x0600(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             Img_Busy;                                          // 0x0608(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             Img_Settlement;                                    // 0x0610(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_FriendsEntry">();
	}
	static class UPyWidget_FriendsEntry* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_FriendsEntry>();
	}
};
static_assert(alignof(UPyWidget_FriendsEntry) == 0x000008, "Wrong alignment on UPyWidget_FriendsEntry");
static_assert(sizeof(UPyWidget_FriendsEntry) == 0x000618, "Wrong size on UPyWidget_FriendsEntry");
static_assert(offsetof(UPyWidget_FriendsEntry, Img_Offline) == 0x0005E8, "Member 'UPyWidget_FriendsEntry::Img_Offline' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsEntry, Img_Online) == 0x0005F0, "Member 'UPyWidget_FriendsEntry::Img_Online' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsEntry, Img_Leave) == 0x0005F8, "Member 'UPyWidget_FriendsEntry::Img_Leave' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsEntry, Img_Team) == 0x000600, "Member 'UPyWidget_FriendsEntry::Img_Team' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsEntry, Img_Busy) == 0x000608, "Member 'UPyWidget_FriendsEntry::Img_Busy' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsEntry, Img_Settlement) == 0x000610, "Member 'UPyWidget_FriendsEntry::Img_Settlement' has a wrong offset!");

}
