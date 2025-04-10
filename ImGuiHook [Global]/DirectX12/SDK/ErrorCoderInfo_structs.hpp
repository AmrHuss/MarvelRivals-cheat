#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ErrorCoderInfo

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct ErrorCoderInfo.ErrorCoderInfo
// 0x0038 (0x0038 - 0x0000)
struct FErrorCoderInfo final
{
public:
	int32                                         ErrorCode_11_34FE610E4B49F229E0B81BAAECAC4200;     // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Desc_7_F293DA8D424B50E419120581EDCFD92C;           // 0x0008(0x0018)(Edit, BlueprintVisible)
	class FString                                 Tips_12_D59AF7964064B8F2BCADA08219CA7875;          // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          bIsVisible_5_D41FE83840BBBC4E93A34292FDD5B809;     // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsShowInChat_14_15F9C9B94063BCFA692885911B3B3BE9; // 0x0031(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsShowCode_17_18A733D042EF79FF66E9498BD6DD0993;   // 0x0032(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FErrorCoderInfo) == 0x000008, "Wrong alignment on FErrorCoderInfo");
static_assert(sizeof(FErrorCoderInfo) == 0x000038, "Wrong size on FErrorCoderInfo");
static_assert(offsetof(FErrorCoderInfo, ErrorCode_11_34FE610E4B49F229E0B81BAAECAC4200) == 0x000000, "Member 'FErrorCoderInfo::ErrorCode_11_34FE610E4B49F229E0B81BAAECAC4200' has a wrong offset!");
static_assert(offsetof(FErrorCoderInfo, Desc_7_F293DA8D424B50E419120581EDCFD92C) == 0x000008, "Member 'FErrorCoderInfo::Desc_7_F293DA8D424B50E419120581EDCFD92C' has a wrong offset!");
static_assert(offsetof(FErrorCoderInfo, Tips_12_D59AF7964064B8F2BCADA08219CA7875) == 0x000020, "Member 'FErrorCoderInfo::Tips_12_D59AF7964064B8F2BCADA08219CA7875' has a wrong offset!");
static_assert(offsetof(FErrorCoderInfo, bIsVisible_5_D41FE83840BBBC4E93A34292FDD5B809) == 0x000030, "Member 'FErrorCoderInfo::bIsVisible_5_D41FE83840BBBC4E93A34292FDD5B809' has a wrong offset!");
static_assert(offsetof(FErrorCoderInfo, bIsShowInChat_14_15F9C9B94063BCFA692885911B3B3BE9) == 0x000031, "Member 'FErrorCoderInfo::bIsShowInChat_14_15F9C9B94063BCFA692885911B3B3BE9' has a wrong offset!");
static_assert(offsetof(FErrorCoderInfo, bIsShowCode_17_18A733D042EF79FF66E9498BD6DD0993) == 0x000032, "Member 'FErrorCoderInfo::bIsShowCode_17_18A733D042EF79FF66E9498BD6DD0993' has a wrong offset!");

}

