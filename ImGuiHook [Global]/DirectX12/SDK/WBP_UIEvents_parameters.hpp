#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UIEvents

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_UIEvents.WBP_UIEvents_C.ExecuteUbergraph_WBP_UIEvents
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_UIEvents_C_ExecuteUbergraph_WBP_UIEvents final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkComponent*                           CallFunc_GetWorldPlayerListener_ReturnValue;       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UAkComponent* AkComponent, class UAkAudioEvent* Event, const class FString& EventName)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0014)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkComponent*                           K2Node_CustomEvent_AkComponent;                    // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          K2Node_CustomEvent_Event;                          // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_EventName;                      // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEventName_ReturnValue;                 // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEventName_ReturnValue_1;               // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_UIEventUnit_C*                     CallFunc_Create_ReturnValue;                       // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_UIEventUnit_C*                     CallFunc_Map_Find_Value;                           // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioGlobalSubSystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UIEvents_C_ExecuteUbergraph_WBP_UIEvents) == 0x000008, "Wrong alignment on WBP_UIEvents_C_ExecuteUbergraph_WBP_UIEvents");
static_assert(sizeof(WBP_UIEvents_C_ExecuteUbergraph_WBP_UIEvents) == 0x0000A0, "Wrong size on WBP_UIEvents_C_ExecuteUbergraph_WBP_UIEvents");
static_assert(offsetof(WBP_UIEvents_C_ExecuteUbergraph_WBP_UIEvents, EntryPoint) == 0x000000, "Member 'WBP_UIEvents_C_ExecuteUbergraph_WBP_UIEvents::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_UIEvents_C_ExecuteUbergraph_WBP_UIEvents, CallFunc_GetWorldPlayerListener_ReturnValue) == 0x000008, "Member 'WBP_UIEvents_C_ExecuteUbergraph_WBP_UIEvents::CallFunc_GetWorldPlayerListener_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIEvents_C_ExecuteUbergraph_WBP_UIEvents, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'WBP_UIEvents_C_ExecuteUbergraph_WBP_UIEvents::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_UIEvents_C_ExecuteUbergraph_WBP_UIEvents, K2Node_CustomEvent_AkComponent) == 0x000028, "Member 'WBP_UIEvents_C_ExecuteUbergraph_WBP_UIEvents::K2Node_CustomEvent_AkComponent' has a wrong offset!");
static_assert(offsetof(WBP_UIEvents_C_ExecuteUbergraph_WBP_UIEvents, K2Node_CustomEvent_Event) == 0x000030, "Member 'WBP_UIEvents_C_ExecuteUbergraph_WBP_UIEvents::K2Node_CustomEvent_Event' has a wrong offset!");
static_assert(offsetof(WBP_UIEvents_C_ExecuteUbergraph_WBP_UIEvents, K2Node_CustomEvent_EventName) == 0x000038, "Member 'WBP_UIEvents_C_ExecuteUbergraph_WBP_UIEvents::K2Node_CustomEvent_EventName' has a wrong offset!");
static_assert(offsetof(WBP_UIEvents_C_ExecuteUbergraph_WBP_UIEvents, CallFunc_GetEventName_ReturnValue) == 0x000048, "Member 'WBP_UIEvents_C_ExecuteUbergraph_WBP_UIEvents::CallFunc_GetEventName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIEvents_C_ExecuteUbergraph_WBP_UIEvents, CallFunc_GetEventName_ReturnValue_1) == 0x000058, "Member 'WBP_UIEvents_C_ExecuteUbergraph_WBP_UIEvents::CallFunc_GetEventName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_UIEvents_C_ExecuteUbergraph_WBP_UIEvents, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000068, "Member 'WBP_UIEvents_C_ExecuteUbergraph_WBP_UIEvents::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIEvents_C_ExecuteUbergraph_WBP_UIEvents, CallFunc_Create_ReturnValue) == 0x000070, "Member 'WBP_UIEvents_C_ExecuteUbergraph_WBP_UIEvents::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIEvents_C_ExecuteUbergraph_WBP_UIEvents, CallFunc_Map_Find_Value) == 0x000078, "Member 'WBP_UIEvents_C_ExecuteUbergraph_WBP_UIEvents::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_UIEvents_C_ExecuteUbergraph_WBP_UIEvents, CallFunc_Map_Find_ReturnValue) == 0x000080, "Member 'WBP_UIEvents_C_ExecuteUbergraph_WBP_UIEvents::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIEvents_C_ExecuteUbergraph_WBP_UIEvents, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000088, "Member 'WBP_UIEvents_C_ExecuteUbergraph_WBP_UIEvents::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIEvents_C_ExecuteUbergraph_WBP_UIEvents, K2Node_Event_IsDesignTime) == 0x000090, "Member 'WBP_UIEvents_C_ExecuteUbergraph_WBP_UIEvents::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_UIEvents_C_ExecuteUbergraph_WBP_UIEvents, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000098, "Member 'WBP_UIEvents_C_ExecuteUbergraph_WBP_UIEvents::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");

// Function WBP_UIEvents.WBP_UIEvents_C.GetEventName
// 0x0040 (0x0040 - 0x0000)
struct WBP_UIEvents_C_GetEventName final
{
public:
	class UAkAudioEvent*                          AkEvent;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 EventName;                                         // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 ReturnValue;                                       // 0x0018(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UIEvents_C_GetEventName) == 0x000008, "Wrong alignment on WBP_UIEvents_C_GetEventName");
static_assert(sizeof(WBP_UIEvents_C_GetEventName) == 0x000040, "Wrong size on WBP_UIEvents_C_GetEventName");
static_assert(offsetof(WBP_UIEvents_C_GetEventName, AkEvent) == 0x000000, "Member 'WBP_UIEvents_C_GetEventName::AkEvent' has a wrong offset!");
static_assert(offsetof(WBP_UIEvents_C_GetEventName, EventName) == 0x000008, "Member 'WBP_UIEvents_C_GetEventName::EventName' has a wrong offset!");
static_assert(offsetof(WBP_UIEvents_C_GetEventName, ReturnValue) == 0x000018, "Member 'WBP_UIEvents_C_GetEventName::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIEvents_C_GetEventName, CallFunc_GetDisplayName_ReturnValue) == 0x000028, "Member 'WBP_UIEvents_C_GetEventName::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIEvents_C_GetEventName, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'WBP_UIEvents_C_GetEventName::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_UIEvents.WBP_UIEvents_C.OnPostAkEvent
// 0x0020 (0x0020 - 0x0000)
struct WBP_UIEvents_C_OnPostAkEvent final
{
public:
	class UAkComponent*                           AkComponent;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Event;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 EventName;                                         // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UIEvents_C_OnPostAkEvent) == 0x000008, "Wrong alignment on WBP_UIEvents_C_OnPostAkEvent");
static_assert(sizeof(WBP_UIEvents_C_OnPostAkEvent) == 0x000020, "Wrong size on WBP_UIEvents_C_OnPostAkEvent");
static_assert(offsetof(WBP_UIEvents_C_OnPostAkEvent, AkComponent) == 0x000000, "Member 'WBP_UIEvents_C_OnPostAkEvent::AkComponent' has a wrong offset!");
static_assert(offsetof(WBP_UIEvents_C_OnPostAkEvent, Event) == 0x000008, "Member 'WBP_UIEvents_C_OnPostAkEvent::Event' has a wrong offset!");
static_assert(offsetof(WBP_UIEvents_C_OnPostAkEvent, EventName) == 0x000010, "Member 'WBP_UIEvents_C_OnPostAkEvent::EventName' has a wrong offset!");

// Function WBP_UIEvents.WBP_UIEvents_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_UIEvents_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UIEvents_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_UIEvents_C_PreConstruct");
static_assert(sizeof(WBP_UIEvents_C_PreConstruct) == 0x000001, "Wrong size on WBP_UIEvents_C_PreConstruct");
static_assert(offsetof(WBP_UIEvents_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_UIEvents_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

