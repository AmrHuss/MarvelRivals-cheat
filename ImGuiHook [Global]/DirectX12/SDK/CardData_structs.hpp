#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CardData

#include "Basic.hpp"

#include "Marvel_structs.hpp"


namespace SDK
{

// UserDefinedStruct CardData.CardData
// 0x0060 (0x0060 - 0x0000)
struct FCardData final
{
public:
	int32                                         CardID_64_CC9CEDDF4E4198FAEAC83788C5B70386;        // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CardName_76_8CB9C6B240C6981FE4BCE298018684C6;      // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	ESkinQuality                                  CardQuality_75_03B894F54C66CFBF0B7158AAE2F82895;   // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CardBackground_69_1E680D5240F38114C5CABAA033053489; // 0x0020(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class FString                                 CardDescribe_77_72AFB73D48A3B099CA591784E5CBDD61;  // 0x0050(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(FCardData) == 0x000008, "Wrong alignment on FCardData");
static_assert(sizeof(FCardData) == 0x000060, "Wrong size on FCardData");
static_assert(offsetof(FCardData, CardID_64_CC9CEDDF4E4198FAEAC83788C5B70386) == 0x000000, "Member 'FCardData::CardID_64_CC9CEDDF4E4198FAEAC83788C5B70386' has a wrong offset!");
static_assert(offsetof(FCardData, CardName_76_8CB9C6B240C6981FE4BCE298018684C6) == 0x000008, "Member 'FCardData::CardName_76_8CB9C6B240C6981FE4BCE298018684C6' has a wrong offset!");
static_assert(offsetof(FCardData, CardQuality_75_03B894F54C66CFBF0B7158AAE2F82895) == 0x000018, "Member 'FCardData::CardQuality_75_03B894F54C66CFBF0B7158AAE2F82895' has a wrong offset!");
static_assert(offsetof(FCardData, CardBackground_69_1E680D5240F38114C5CABAA033053489) == 0x000020, "Member 'FCardData::CardBackground_69_1E680D5240F38114C5CABAA033053489' has a wrong offset!");
static_assert(offsetof(FCardData, CardDescribe_77_72AFB73D48A3B099CA591784E5CBDD61) == 0x000050, "Member 'FCardData::CardDescribe_77_72AFB73D48A3B099CA591784E5CBDD61' has a wrong offset!");

}

