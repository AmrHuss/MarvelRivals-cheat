#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_ItemBoxV1

#include "Basic.hpp"

#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_ItemBoxV1.PyWidget_ItemBoxV1
// 0x0020 (0x0608 - 0x05E8)
class UPyWidget_ItemBoxV1 : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x7];                                      // 0x05E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptStruct*                          ItemData;                                          // 0x05E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Cnt;                                               // 0x05F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ItemId;                                            // 0x05F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ItemType;                                          // 0x05F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         LowerBound;                                        // 0x05FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsSelected;                                        // 0x0600(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsNumVisible;                                      // 0x0601(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Destruct();
	void Construct();
	void SetItemID(int32 ItemId_0, int32 ItemType_0);
	void SetItemNum(int32 ItemNum);
	void SetItem(int32 ItemId_0, int32 ItemType_0, int32 Cnt_0);
	void Refresh();
	void SetCntLowerBound(int32 LowerBound_0);
	void SetIsNumVisible(bool IsNumVisible_0);
	void SetItemSelected(bool IsSelected_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_ItemBoxV1">();
	}
	static class UPyWidget_ItemBoxV1* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_ItemBoxV1>();
	}
};
static_assert(alignof(UPyWidget_ItemBoxV1) == 0x000008, "Wrong alignment on UPyWidget_ItemBoxV1");
static_assert(sizeof(UPyWidget_ItemBoxV1) == 0x000608, "Wrong size on UPyWidget_ItemBoxV1");
static_assert(offsetof(UPyWidget_ItemBoxV1, ItemData) == 0x0005E8, "Member 'UPyWidget_ItemBoxV1::ItemData' has a wrong offset!");
static_assert(offsetof(UPyWidget_ItemBoxV1, Cnt) == 0x0005F0, "Member 'UPyWidget_ItemBoxV1::Cnt' has a wrong offset!");
static_assert(offsetof(UPyWidget_ItemBoxV1, ItemId) == 0x0005F4, "Member 'UPyWidget_ItemBoxV1::ItemId' has a wrong offset!");
static_assert(offsetof(UPyWidget_ItemBoxV1, ItemType) == 0x0005F8, "Member 'UPyWidget_ItemBoxV1::ItemType' has a wrong offset!");
static_assert(offsetof(UPyWidget_ItemBoxV1, LowerBound) == 0x0005FC, "Member 'UPyWidget_ItemBoxV1::LowerBound' has a wrong offset!");
static_assert(offsetof(UPyWidget_ItemBoxV1, IsSelected) == 0x000600, "Member 'UPyWidget_ItemBoxV1::IsSelected' has a wrong offset!");
static_assert(offsetof(UPyWidget_ItemBoxV1, IsNumVisible) == 0x000601, "Member 'UPyWidget_ItemBoxV1::IsNumVisible' has a wrong offset!");

}
