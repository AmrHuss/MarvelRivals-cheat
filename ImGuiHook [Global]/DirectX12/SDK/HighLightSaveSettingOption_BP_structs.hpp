#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HighLightSaveSettingOption_BP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct HighLightSaveSettingOption_BP.HighLightSaveSettingOption_BP
// 0x0040 (0x0040 - 0x0000)
struct FHighLightSaveSettingOption_BP final
{
public:
	class FText                                   Title_3_DFC3308843DDBB559A5F1F939A5327AD;          // 0x0000(0x0018)(Edit, BlueprintVisible)
	struct FVector2D                              OptionValueVector_15_1BE37F7D4C2068FAC2FEDD916C35954F; // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OptionValueInt_16_67AECC974397BB57B66301A454D47337; // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OptionValueStr_17_BC4D11CC499CC2399D8441B2E9110B69; // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(FHighLightSaveSettingOption_BP) == 0x000008, "Wrong alignment on FHighLightSaveSettingOption_BP");
static_assert(sizeof(FHighLightSaveSettingOption_BP) == 0x000040, "Wrong size on FHighLightSaveSettingOption_BP");
static_assert(offsetof(FHighLightSaveSettingOption_BP, Title_3_DFC3308843DDBB559A5F1F939A5327AD) == 0x000000, "Member 'FHighLightSaveSettingOption_BP::Title_3_DFC3308843DDBB559A5F1F939A5327AD' has a wrong offset!");
static_assert(offsetof(FHighLightSaveSettingOption_BP, OptionValueVector_15_1BE37F7D4C2068FAC2FEDD916C35954F) == 0x000018, "Member 'FHighLightSaveSettingOption_BP::OptionValueVector_15_1BE37F7D4C2068FAC2FEDD916C35954F' has a wrong offset!");
static_assert(offsetof(FHighLightSaveSettingOption_BP, OptionValueInt_16_67AECC974397BB57B66301A454D47337) == 0x000028, "Member 'FHighLightSaveSettingOption_BP::OptionValueInt_16_67AECC974397BB57B66301A454D47337' has a wrong offset!");
static_assert(offsetof(FHighLightSaveSettingOption_BP, OptionValueStr_17_BC4D11CC499CC2399D8441B2E9110B69) == 0x000030, "Member 'FHighLightSaveSettingOption_BP::OptionValueStr_17_BC4D11CC499CC2399D8441B2E9110B69' has a wrong offset!");

}

