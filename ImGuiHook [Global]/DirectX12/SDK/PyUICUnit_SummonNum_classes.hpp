#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyUICUnit_SummonNum

#include "Basic.hpp"

#include "DeclarativeUnreal_structs.hpp"
#include "Marvel_structs.hpp"
#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyUICUnit_SummonNum.PyUICUnit_SummonNum
// 0x00A0 (0x00E0 - 0x0040)
class UPyUICUnit_SummonNum final : public UUIC_AbilityUnit
{
public:
	struct FDeclarationHolder                     ViewerSideWatcher;                                 // 0x0040(0x0010)(NativeAccessSpecifierPublic)
	TSubclassOf<class UPyWidget_SummonedNum>      NumClass_V7;                                       // 0x0050(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bHiddenWhenEmpty;                                  // 0x0058(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EClientPlayerViewSide, struct FWidgetStyle_HealthBar_BattlePanel> WidgetStyleConfig;                                 // 0x0060(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                         HostSummonID;                                      // 0x00B0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 SummonIDList;                                      // 0x00B8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                   SummonedDesc;                                      // 0x00C8(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	void Construct();
	void OnActorChange(class AActor* Target);
	void Destruct();
	void SetMaxNum(int32 InTotalNumMax);
	void SetCurNum(int32 InTotalNumCur);
	void SetSummonedDesc(const class FText& InDesc);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyUICUnit_SummonNum">();
	}
	static class UPyUICUnit_SummonNum* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyUICUnit_SummonNum>();
	}
};
static_assert(alignof(UPyUICUnit_SummonNum) == 0x000008, "Wrong alignment on UPyUICUnit_SummonNum");
static_assert(sizeof(UPyUICUnit_SummonNum) == 0x0000E0, "Wrong size on UPyUICUnit_SummonNum");
static_assert(offsetof(UPyUICUnit_SummonNum, ViewerSideWatcher) == 0x000040, "Member 'UPyUICUnit_SummonNum::ViewerSideWatcher' has a wrong offset!");
static_assert(offsetof(UPyUICUnit_SummonNum, NumClass_V7) == 0x000050, "Member 'UPyUICUnit_SummonNum::NumClass_V7' has a wrong offset!");
static_assert(offsetof(UPyUICUnit_SummonNum, bHiddenWhenEmpty) == 0x000058, "Member 'UPyUICUnit_SummonNum::bHiddenWhenEmpty' has a wrong offset!");
static_assert(offsetof(UPyUICUnit_SummonNum, WidgetStyleConfig) == 0x000060, "Member 'UPyUICUnit_SummonNum::WidgetStyleConfig' has a wrong offset!");
static_assert(offsetof(UPyUICUnit_SummonNum, HostSummonID) == 0x0000B0, "Member 'UPyUICUnit_SummonNum::HostSummonID' has a wrong offset!");
static_assert(offsetof(UPyUICUnit_SummonNum, SummonIDList) == 0x0000B8, "Member 'UPyUICUnit_SummonNum::SummonIDList' has a wrong offset!");
static_assert(offsetof(UPyUICUnit_SummonNum, SummonedDesc) == 0x0000C8, "Member 'UPyUICUnit_SummonNum::SummonedDesc' has a wrong offset!");

}

