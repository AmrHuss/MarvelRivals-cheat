#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Hero_WinterFestival

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// ScriptStruct Hero_WinterFestival.WinterFestivalClientPaintParam
// 0x0020 (0x0020 - 0x0000)
struct FWinterFestivalClientPaintParam final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PaintRadius;                                       // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EBattleSide                                   BattleSide;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FWinterFestivalClientPaintParam) == 0x000008, "Wrong alignment on FWinterFestivalClientPaintParam");
static_assert(sizeof(FWinterFestivalClientPaintParam) == 0x000020, "Wrong size on FWinterFestivalClientPaintParam");
static_assert(offsetof(FWinterFestivalClientPaintParam, Location) == 0x000000, "Member 'FWinterFestivalClientPaintParam::Location' has a wrong offset!");
static_assert(offsetof(FWinterFestivalClientPaintParam, PaintRadius) == 0x000018, "Member 'FWinterFestivalClientPaintParam::PaintRadius' has a wrong offset!");
static_assert(offsetof(FWinterFestivalClientPaintParam, BattleSide) == 0x00001C, "Member 'FWinterFestivalClientPaintParam::BattleSide' has a wrong offset!");

}

