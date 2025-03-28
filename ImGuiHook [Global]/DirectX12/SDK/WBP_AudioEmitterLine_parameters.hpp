#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_AudioEmitterLine

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_AudioEmitterLine.WBP_AudioEmitterLine_C.ExecuteUbergraph_WBP_AudioEmitterLine
// 0x0168 (0x0168 - 0x0000)
struct WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0008(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_EventName;                      // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          K2Node_CustomEvent_InEvent;                        // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           K2Node_CustomEvent_InAkComp;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_InEventName;                    // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x0040(0x0018)()
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue_1;          // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x3];                                       // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Len_ReturnValue;                          // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Get_Event_Name_ReturnValue;               // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_SelectString_ReturnValue;                 // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00B0(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEventPlaying_ReturnValue;               // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DA[0x6];                                       // 0x00DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetTimeSeconds_ReturnValue;               // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetTimeSeconds_ReturnValue_1;             // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x00F0(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12C[0x4];                                      // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsTimeOut_ReturnValue;                    // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_139[0x7];                                      // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          K2Node_CustomEvent_Event;                          // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_InEventName_1;                  // 0x0148(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_154[0x4];                                      // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkComponent*                           K2Node_CustomEvent_AkCom;                          // 0x0158(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine) == 0x000008, "Wrong alignment on WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine");
static_assert(sizeof(WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine) == 0x000168, "Wrong size on WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine");
static_assert(offsetof(WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine, EntryPoint) == 0x000000, "Member 'WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine, K2Node_Event_Animation) == 0x000008, "Member 'WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine, K2Node_CustomEvent_EventName) == 0x000010, "Member 'WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine::K2Node_CustomEvent_EventName' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine, K2Node_CustomEvent_InEvent) == 0x000020, "Member 'WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine::K2Node_CustomEvent_InEvent' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine, K2Node_CustomEvent_InAkComp) == 0x000028, "Member 'WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine::K2Node_CustomEvent_InAkComp' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine, K2Node_CustomEvent_InEventName) == 0x000030, "Member 'WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine::K2Node_CustomEvent_InEventName' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine, CallFunc_Conv_NameToText_ReturnValue) == 0x000040, "Member 'WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine, CallFunc_Conv_NameToString_ReturnValue) == 0x000058, "Member 'WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine, CallFunc_Conv_NameToString_ReturnValue_1) == 0x000068, "Member 'WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine::CallFunc_Conv_NameToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine, CallFunc_IsValid_ReturnValue) == 0x000078, "Member 'WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine, CallFunc_Len_ReturnValue) == 0x00007C, "Member 'WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine, CallFunc_Greater_IntInt_ReturnValue) == 0x000080, "Member 'WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine, CallFunc_Get_Event_Name_ReturnValue) == 0x000088, "Member 'WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine::CallFunc_Get_Event_Name_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine, CallFunc_IsValid_ReturnValue_1) == 0x000098, "Member 'WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine, CallFunc_SelectString_ReturnValue) == 0x0000A0, "Member 'WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine::CallFunc_SelectString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine, CallFunc_Conv_StringToText_ReturnValue) == 0x0000B0, "Member 'WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine, CallFunc_IsValid_ReturnValue_2) == 0x0000C8, "Member 'WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine, CallFunc_PlayAnimation_ReturnValue) == 0x0000D0, "Member 'WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine, CallFunc_IsValid_ReturnValue_3) == 0x0000D8, "Member 'WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine, CallFunc_IsEventPlaying_ReturnValue) == 0x0000D9, "Member 'WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine::CallFunc_IsEventPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine, CallFunc_GetTimeSeconds_ReturnValue) == 0x0000E0, "Member 'WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine::CallFunc_GetTimeSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine, CallFunc_GetTimeSeconds_ReturnValue_1) == 0x0000E8, "Member 'WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine::CallFunc_GetTimeSeconds_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine, K2Node_Event_MyGeometry) == 0x0000F0, "Member 'WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine, K2Node_Event_InDeltaTime) == 0x000128, "Member 'WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine, CallFunc_PlayAnimation_ReturnValue_1) == 0x000130, "Member 'WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine, CallFunc_IsTimeOut_ReturnValue) == 0x000138, "Member 'WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine::CallFunc_IsTimeOut_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine, K2Node_CustomEvent_Event) == 0x000140, "Member 'WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine::K2Node_CustomEvent_Event' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine, K2Node_CustomEvent_InEventName_1) == 0x000148, "Member 'WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine::K2Node_CustomEvent_InEventName_1' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine, K2Node_CustomEvent_AkCom) == 0x000158, "Member 'WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine::K2Node_CustomEvent_AkCom' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine, CallFunc_IsValid_ReturnValue_4) == 0x000160, "Member 'WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000161, "Member 'WBP_AudioEmitterLine_C_ExecuteUbergraph_WBP_AudioEmitterLine::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function WBP_AudioEmitterLine.WBP_AudioEmitterLine_C.Get Event Name
// 0x0040 (0x0040 - 0x0000)
struct WBP_AudioEmitterLine_C_Get_Event_Name final
{
public:
	class UAkAudioEvent*                          InEvent;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_FindSubstring_ReturnValue;                // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSubstring_ReturnValue;                 // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_AudioEmitterLine_C_Get_Event_Name) == 0x000008, "Wrong alignment on WBP_AudioEmitterLine_C_Get_Event_Name");
static_assert(sizeof(WBP_AudioEmitterLine_C_Get_Event_Name) == 0x000040, "Wrong size on WBP_AudioEmitterLine_C_Get_Event_Name");
static_assert(offsetof(WBP_AudioEmitterLine_C_Get_Event_Name, InEvent) == 0x000000, "Member 'WBP_AudioEmitterLine_C_Get_Event_Name::InEvent' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_Get_Event_Name, ReturnValue) == 0x000008, "Member 'WBP_AudioEmitterLine_C_Get_Event_Name::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_Get_Event_Name, CallFunc_GetDisplayName_ReturnValue) == 0x000018, "Member 'WBP_AudioEmitterLine_C_Get_Event_Name::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_Get_Event_Name, CallFunc_FindSubstring_ReturnValue) == 0x000028, "Member 'WBP_AudioEmitterLine_C_Get_Event_Name::CallFunc_FindSubstring_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_Get_Event_Name, CallFunc_Greater_IntInt_ReturnValue) == 0x00002C, "Member 'WBP_AudioEmitterLine_C_Get_Event_Name::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_Get_Event_Name, CallFunc_GetSubstring_ReturnValue) == 0x000030, "Member 'WBP_AudioEmitterLine_C_Get_Event_Name::CallFunc_GetSubstring_ReturnValue' has a wrong offset!");

// Function WBP_AudioEmitterLine.WBP_AudioEmitterLine_C.Init
// 0x0020 (0x0020 - 0x0000)
struct WBP_AudioEmitterLine_C_Init final
{
public:
	class UAkAudioEvent*                          Event;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   InEventName;                                       // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkComponent*                           AkCom;                                             // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_AudioEmitterLine_C_Init) == 0x000008, "Wrong alignment on WBP_AudioEmitterLine_C_Init");
static_assert(sizeof(WBP_AudioEmitterLine_C_Init) == 0x000020, "Wrong size on WBP_AudioEmitterLine_C_Init");
static_assert(offsetof(WBP_AudioEmitterLine_C_Init, Event) == 0x000000, "Member 'WBP_AudioEmitterLine_C_Init::Event' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_Init, InEventName) == 0x000008, "Member 'WBP_AudioEmitterLine_C_Init::InEventName' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_Init, AkCom) == 0x000018, "Member 'WBP_AudioEmitterLine_C_Init::AkCom' has a wrong offset!");

// Function WBP_AudioEmitterLine.WBP_AudioEmitterLine_C.IsTimeOut
// 0x0020 (0x0020 - 0x0000)
struct WBP_AudioEmitterLine_C_IsTimeOut final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetTimeSeconds_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_AudioEmitterLine_C_IsTimeOut) == 0x000008, "Wrong alignment on WBP_AudioEmitterLine_C_IsTimeOut");
static_assert(sizeof(WBP_AudioEmitterLine_C_IsTimeOut) == 0x000020, "Wrong size on WBP_AudioEmitterLine_C_IsTimeOut");
static_assert(offsetof(WBP_AudioEmitterLine_C_IsTimeOut, ReturnValue) == 0x000000, "Member 'WBP_AudioEmitterLine_C_IsTimeOut::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_IsTimeOut, CallFunc_GetTimeSeconds_ReturnValue) == 0x000008, "Member 'WBP_AudioEmitterLine_C_IsTimeOut::CallFunc_GetTimeSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_IsTimeOut, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000010, "Member 'WBP_AudioEmitterLine_C_IsTimeOut::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_IsTimeOut, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000018, "Member 'WBP_AudioEmitterLine_C_IsTimeOut::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_IsTimeOut, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x000019, "Member 'WBP_AudioEmitterLine_C_IsTimeOut::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");

// Function WBP_AudioEmitterLine.WBP_AudioEmitterLine_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct WBP_AudioEmitterLine_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_AudioEmitterLine_C_OnAnimationFinished) == 0x000008, "Wrong alignment on WBP_AudioEmitterLine_C_OnAnimationFinished");
static_assert(sizeof(WBP_AudioEmitterLine_C_OnAnimationFinished) == 0x000008, "Wrong size on WBP_AudioEmitterLine_C_OnAnimationFinished");
static_assert(offsetof(WBP_AudioEmitterLine_C_OnAnimationFinished, Animation) == 0x000000, "Member 'WBP_AudioEmitterLine_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function WBP_AudioEmitterLine.WBP_AudioEmitterLine_C.PlayByEvent
// 0x0020 (0x0020 - 0x0000)
struct WBP_AudioEmitterLine_C_PlayByEvent final
{
public:
	class UAkAudioEvent*                          InEvent;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           InAkComp;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   InEventName;                                       // 0x0010(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_AudioEmitterLine_C_PlayByEvent) == 0x000008, "Wrong alignment on WBP_AudioEmitterLine_C_PlayByEvent");
static_assert(sizeof(WBP_AudioEmitterLine_C_PlayByEvent) == 0x000020, "Wrong size on WBP_AudioEmitterLine_C_PlayByEvent");
static_assert(offsetof(WBP_AudioEmitterLine_C_PlayByEvent, InEvent) == 0x000000, "Member 'WBP_AudioEmitterLine_C_PlayByEvent::InEvent' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_PlayByEvent, InAkComp) == 0x000008, "Member 'WBP_AudioEmitterLine_C_PlayByEvent::InAkComp' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_PlayByEvent, InEventName) == 0x000010, "Member 'WBP_AudioEmitterLine_C_PlayByEvent::InEventName' has a wrong offset!");

// Function WBP_AudioEmitterLine.WBP_AudioEmitterLine_C.PlayByName
// 0x000C (0x000C - 0x0000)
struct WBP_AudioEmitterLine_C_PlayByName final
{
public:
	class FName                                   EventName_0;                                       // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_AudioEmitterLine_C_PlayByName) == 0x000004, "Wrong alignment on WBP_AudioEmitterLine_C_PlayByName");
static_assert(sizeof(WBP_AudioEmitterLine_C_PlayByName) == 0x00000C, "Wrong size on WBP_AudioEmitterLine_C_PlayByName");
static_assert(offsetof(WBP_AudioEmitterLine_C_PlayByName, EventName_0) == 0x000000, "Member 'WBP_AudioEmitterLine_C_PlayByName::EventName_0' has a wrong offset!");

// Function WBP_AudioEmitterLine.WBP_AudioEmitterLine_C.Tick
// 0x003C (0x003C - 0x0000)
struct WBP_AudioEmitterLine_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_AudioEmitterLine_C_Tick) == 0x000004, "Wrong alignment on WBP_AudioEmitterLine_C_Tick");
static_assert(sizeof(WBP_AudioEmitterLine_C_Tick) == 0x00003C, "Wrong size on WBP_AudioEmitterLine_C_Tick");
static_assert(offsetof(WBP_AudioEmitterLine_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_AudioEmitterLine_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_AudioEmitterLine_C_Tick, InDeltaTime) == 0x000038, "Member 'WBP_AudioEmitterLine_C_Tick::InDeltaTime' has a wrong offset!");

}

