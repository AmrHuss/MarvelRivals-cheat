#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VideoRecord

#include "Basic.hpp"


namespace SDK::Params
{

// PythonFunction VideoRecord.UISettingVideoRecordParam.BP_OnBtnClicked
// 0x0160 (0x0160 - 0x0000)
struct UISettingVideoRecordParam_BP_OnBtnClicked final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 Setting_key;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	TMap<class FString, class FString>            Params_0;                                          // 0x0018(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<int32, class FText>                      OPTIONS;                                           // 0x0068(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	float                                         Value;                                             // 0x00B8(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, int32>                    Tags;                                              // 0x00C0(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<class FString, int32>                    ReturnValue;                                       // 0x0110(0x0050)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(UISettingVideoRecordParam_BP_OnBtnClicked) == 0x000008, "Wrong alignment on UISettingVideoRecordParam_BP_OnBtnClicked");
static_assert(sizeof(UISettingVideoRecordParam_BP_OnBtnClicked) == 0x000160, "Wrong size on UISettingVideoRecordParam_BP_OnBtnClicked");
static_assert(offsetof(UISettingVideoRecordParam_BP_OnBtnClicked, Obj) == 0x000000, "Member 'UISettingVideoRecordParam_BP_OnBtnClicked::Obj' has a wrong offset!");
static_assert(offsetof(UISettingVideoRecordParam_BP_OnBtnClicked, Setting_key) == 0x000008, "Member 'UISettingVideoRecordParam_BP_OnBtnClicked::Setting_key' has a wrong offset!");
static_assert(offsetof(UISettingVideoRecordParam_BP_OnBtnClicked, Params_0) == 0x000018, "Member 'UISettingVideoRecordParam_BP_OnBtnClicked::Params_0' has a wrong offset!");
static_assert(offsetof(UISettingVideoRecordParam_BP_OnBtnClicked, OPTIONS) == 0x000068, "Member 'UISettingVideoRecordParam_BP_OnBtnClicked::OPTIONS' has a wrong offset!");
static_assert(offsetof(UISettingVideoRecordParam_BP_OnBtnClicked, Value) == 0x0000B8, "Member 'UISettingVideoRecordParam_BP_OnBtnClicked::Value' has a wrong offset!");
static_assert(offsetof(UISettingVideoRecordParam_BP_OnBtnClicked, Tags) == 0x0000C0, "Member 'UISettingVideoRecordParam_BP_OnBtnClicked::Tags' has a wrong offset!");
static_assert(offsetof(UISettingVideoRecordParam_BP_OnBtnClicked, ReturnValue) == 0x000110, "Member 'UISettingVideoRecordParam_BP_OnBtnClicked::ReturnValue' has a wrong offset!");

// PythonFunction VideoRecord.UISettingVideoRecordOpenPath.BP_OnBtnClicked
// 0x0160 (0x0160 - 0x0000)
struct UISettingVideoRecordOpenPath_BP_OnBtnClicked final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 Setting_key;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	TMap<class FString, class FString>            Params_0;                                          // 0x0018(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<int32, class FText>                      OPTIONS;                                           // 0x0068(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	float                                         Value;                                             // 0x00B8(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, int32>                    Tags;                                              // 0x00C0(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<class FString, int32>                    ReturnValue;                                       // 0x0110(0x0050)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(UISettingVideoRecordOpenPath_BP_OnBtnClicked) == 0x000008, "Wrong alignment on UISettingVideoRecordOpenPath_BP_OnBtnClicked");
static_assert(sizeof(UISettingVideoRecordOpenPath_BP_OnBtnClicked) == 0x000160, "Wrong size on UISettingVideoRecordOpenPath_BP_OnBtnClicked");
static_assert(offsetof(UISettingVideoRecordOpenPath_BP_OnBtnClicked, Obj) == 0x000000, "Member 'UISettingVideoRecordOpenPath_BP_OnBtnClicked::Obj' has a wrong offset!");
static_assert(offsetof(UISettingVideoRecordOpenPath_BP_OnBtnClicked, Setting_key) == 0x000008, "Member 'UISettingVideoRecordOpenPath_BP_OnBtnClicked::Setting_key' has a wrong offset!");
static_assert(offsetof(UISettingVideoRecordOpenPath_BP_OnBtnClicked, Params_0) == 0x000018, "Member 'UISettingVideoRecordOpenPath_BP_OnBtnClicked::Params_0' has a wrong offset!");
static_assert(offsetof(UISettingVideoRecordOpenPath_BP_OnBtnClicked, OPTIONS) == 0x000068, "Member 'UISettingVideoRecordOpenPath_BP_OnBtnClicked::OPTIONS' has a wrong offset!");
static_assert(offsetof(UISettingVideoRecordOpenPath_BP_OnBtnClicked, Value) == 0x0000B8, "Member 'UISettingVideoRecordOpenPath_BP_OnBtnClicked::Value' has a wrong offset!");
static_assert(offsetof(UISettingVideoRecordOpenPath_BP_OnBtnClicked, Tags) == 0x0000C0, "Member 'UISettingVideoRecordOpenPath_BP_OnBtnClicked::Tags' has a wrong offset!");
static_assert(offsetof(UISettingVideoRecordOpenPath_BP_OnBtnClicked, ReturnValue) == 0x000110, "Member 'UISettingVideoRecordOpenPath_BP_OnBtnClicked::ReturnValue' has a wrong offset!");

// PythonFunction VideoRecord.UISettingVideoRecordChangePath.BP_OnBtnClicked
// 0x0160 (0x0160 - 0x0000)
struct UISettingVideoRecordChangePath_BP_OnBtnClicked final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 Setting_key;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	TMap<class FString, class FString>            Params_0;                                          // 0x0018(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<int32, class FText>                      OPTIONS;                                           // 0x0068(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	float                                         Value;                                             // 0x00B8(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, int32>                    Tags;                                              // 0x00C0(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<class FString, int32>                    ReturnValue;                                       // 0x0110(0x0050)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(UISettingVideoRecordChangePath_BP_OnBtnClicked) == 0x000008, "Wrong alignment on UISettingVideoRecordChangePath_BP_OnBtnClicked");
static_assert(sizeof(UISettingVideoRecordChangePath_BP_OnBtnClicked) == 0x000160, "Wrong size on UISettingVideoRecordChangePath_BP_OnBtnClicked");
static_assert(offsetof(UISettingVideoRecordChangePath_BP_OnBtnClicked, Obj) == 0x000000, "Member 'UISettingVideoRecordChangePath_BP_OnBtnClicked::Obj' has a wrong offset!");
static_assert(offsetof(UISettingVideoRecordChangePath_BP_OnBtnClicked, Setting_key) == 0x000008, "Member 'UISettingVideoRecordChangePath_BP_OnBtnClicked::Setting_key' has a wrong offset!");
static_assert(offsetof(UISettingVideoRecordChangePath_BP_OnBtnClicked, Params_0) == 0x000018, "Member 'UISettingVideoRecordChangePath_BP_OnBtnClicked::Params_0' has a wrong offset!");
static_assert(offsetof(UISettingVideoRecordChangePath_BP_OnBtnClicked, OPTIONS) == 0x000068, "Member 'UISettingVideoRecordChangePath_BP_OnBtnClicked::OPTIONS' has a wrong offset!");
static_assert(offsetof(UISettingVideoRecordChangePath_BP_OnBtnClicked, Value) == 0x0000B8, "Member 'UISettingVideoRecordChangePath_BP_OnBtnClicked::Value' has a wrong offset!");
static_assert(offsetof(UISettingVideoRecordChangePath_BP_OnBtnClicked, Tags) == 0x0000C0, "Member 'UISettingVideoRecordChangePath_BP_OnBtnClicked::Tags' has a wrong offset!");
static_assert(offsetof(UISettingVideoRecordChangePath_BP_OnBtnClicked, ReturnValue) == 0x000110, "Member 'UISettingVideoRecordChangePath_BP_OnBtnClicked::ReturnValue' has a wrong offset!");

}

