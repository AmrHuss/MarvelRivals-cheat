#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_AbilityCharge_V5

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityChargeSingle_v5.SetStyle
// 0x0110 (0x0110 - 0x0000)
struct PyWidget_AbilityChargeSingle_v5_SetStyle final
{
public:
	struct FWidgetStyle_AbilityCharge             Style;                                             // 0x0000(0x0110)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyWidget_AbilityChargeSingle_v5_SetStyle) == 0x000008, "Wrong alignment on PyWidget_AbilityChargeSingle_v5_SetStyle");
static_assert(sizeof(PyWidget_AbilityChargeSingle_v5_SetStyle) == 0x000110, "Wrong size on PyWidget_AbilityChargeSingle_v5_SetStyle");
static_assert(offsetof(PyWidget_AbilityChargeSingle_v5_SetStyle, Style) == 0x000000, "Member 'PyWidget_AbilityChargeSingle_v5_SetStyle::Style' has a wrong offset!");

// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityChargeSingle_v5.SetPercent
// 0x0004 (0x0004 - 0x0000)
struct PyWidget_AbilityChargeSingle_v5_SetPercent final
{
public:
	float                                         Percent;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_AbilityChargeSingle_v5_SetPercent) == 0x000004, "Wrong alignment on PyWidget_AbilityChargeSingle_v5_SetPercent");
static_assert(sizeof(PyWidget_AbilityChargeSingle_v5_SetPercent) == 0x000004, "Wrong size on PyWidget_AbilityChargeSingle_v5_SetPercent");
static_assert(offsetof(PyWidget_AbilityChargeSingle_v5_SetPercent, Percent) == 0x000000, "Member 'PyWidget_AbilityChargeSingle_v5_SetPercent::Percent' has a wrong offset!");

// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityChargeSingle_v5.SetChargeSpeed
// 0x0004 (0x0004 - 0x0000)
struct PyWidget_AbilityChargeSingle_v5_SetChargeSpeed final
{
public:
	float                                         Speed;                                             // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_AbilityChargeSingle_v5_SetChargeSpeed) == 0x000004, "Wrong alignment on PyWidget_AbilityChargeSingle_v5_SetChargeSpeed");
static_assert(sizeof(PyWidget_AbilityChargeSingle_v5_SetChargeSpeed) == 0x000004, "Wrong size on PyWidget_AbilityChargeSingle_v5_SetChargeSpeed");
static_assert(offsetof(PyWidget_AbilityChargeSingle_v5_SetChargeSpeed, Speed) == 0x000000, "Member 'PyWidget_AbilityChargeSingle_v5_SetChargeSpeed::Speed' has a wrong offset!");

// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityChargeSingle_v5.MarvelSetVisible
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_AbilityChargeSingle_v5_MarvelSetVisible final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_AbilityChargeSingle_v5_MarvelSetVisible) == 0x000001, "Wrong alignment on PyWidget_AbilityChargeSingle_v5_MarvelSetVisible");
static_assert(sizeof(PyWidget_AbilityChargeSingle_v5_MarvelSetVisible) == 0x000001, "Wrong size on PyWidget_AbilityChargeSingle_v5_MarvelSetVisible");
static_assert(offsetof(PyWidget_AbilityChargeSingle_v5_MarvelSetVisible, Visible) == 0x000000, "Member 'PyWidget_AbilityChargeSingle_v5_MarvelSetVisible::Visible' has a wrong offset!");

// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityChargeSingle_v5.MarvelSetVisibleImmediately
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_AbilityChargeSingle_v5_MarvelSetVisibleImmediately final
{
public:
	bool                                          bInVisible;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_AbilityChargeSingle_v5_MarvelSetVisibleImmediately) == 0x000001, "Wrong alignment on PyWidget_AbilityChargeSingle_v5_MarvelSetVisibleImmediately");
static_assert(sizeof(PyWidget_AbilityChargeSingle_v5_MarvelSetVisibleImmediately) == 0x000001, "Wrong size on PyWidget_AbilityChargeSingle_v5_MarvelSetVisibleImmediately");
static_assert(offsetof(PyWidget_AbilityChargeSingle_v5_MarvelSetVisibleImmediately, bInVisible) == 0x000000, "Member 'PyWidget_AbilityChargeSingle_v5_MarvelSetVisibleImmediately::bInVisible' has a wrong offset!");

// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityChargeSingle_v5.DelaySetVisible
// 0x0008 (0x0008 - 0x0000)
struct PyWidget_AbilityChargeSingle_v5_DelaySetVisible final
{
public:
	float                                         DelayTime;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Invisible;                                         // 0x0004(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_AbilityChargeSingle_v5_DelaySetVisible) == 0x000004, "Wrong alignment on PyWidget_AbilityChargeSingle_v5_DelaySetVisible");
static_assert(sizeof(PyWidget_AbilityChargeSingle_v5_DelaySetVisible) == 0x000008, "Wrong size on PyWidget_AbilityChargeSingle_v5_DelaySetVisible");
static_assert(offsetof(PyWidget_AbilityChargeSingle_v5_DelaySetVisible, DelayTime) == 0x000000, "Member 'PyWidget_AbilityChargeSingle_v5_DelaySetVisible::DelayTime' has a wrong offset!");
static_assert(offsetof(PyWidget_AbilityChargeSingle_v5_DelaySetVisible, Invisible) == 0x000004, "Member 'PyWidget_AbilityChargeSingle_v5_DelaySetVisible::Invisible' has a wrong offset!");

// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_CommonChargeSingle_V5.SetStyle
// 0x0110 (0x0110 - 0x0000)
struct PyWidget_CommonChargeSingle_V5_SetStyle final
{
public:
	struct FWidgetStyle_AbilityCharge             Style;                                             // 0x0000(0x0110)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyWidget_CommonChargeSingle_V5_SetStyle) == 0x000008, "Wrong alignment on PyWidget_CommonChargeSingle_V5_SetStyle");
static_assert(sizeof(PyWidget_CommonChargeSingle_V5_SetStyle) == 0x000110, "Wrong size on PyWidget_CommonChargeSingle_V5_SetStyle");
static_assert(offsetof(PyWidget_CommonChargeSingle_V5_SetStyle, Style) == 0x000000, "Member 'PyWidget_CommonChargeSingle_V5_SetStyle::Style' has a wrong offset!");

// DelegateFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityCharge_V5.OnCurSegmentChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct PyWidget_AbilityCharge_V5_OnCurSegmentChanged__DelegateSignature final
{
public:
	int32                                         InCurrentValue;                                    // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_AbilityCharge_V5_OnCurSegmentChanged__DelegateSignature) == 0x000004, "Wrong alignment on PyWidget_AbilityCharge_V5_OnCurSegmentChanged__DelegateSignature");
static_assert(sizeof(PyWidget_AbilityCharge_V5_OnCurSegmentChanged__DelegateSignature) == 0x000004, "Wrong size on PyWidget_AbilityCharge_V5_OnCurSegmentChanged__DelegateSignature");
static_assert(offsetof(PyWidget_AbilityCharge_V5_OnCurSegmentChanged__DelegateSignature, InCurrentValue) == 0x000000, "Member 'PyWidget_AbilityCharge_V5_OnCurSegmentChanged__DelegateSignature::InCurrentValue' has a wrong offset!");

// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityCharge_V5.SetStyle
// 0x0110 (0x0110 - 0x0000)
struct PyWidget_AbilityCharge_V5_SetStyle final
{
public:
	struct FWidgetStyle_AbilityCharge             Style;                                             // 0x0000(0x0110)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyWidget_AbilityCharge_V5_SetStyle) == 0x000008, "Wrong alignment on PyWidget_AbilityCharge_V5_SetStyle");
static_assert(sizeof(PyWidget_AbilityCharge_V5_SetStyle) == 0x000110, "Wrong size on PyWidget_AbilityCharge_V5_SetStyle");
static_assert(offsetof(PyWidget_AbilityCharge_V5_SetStyle, Style) == 0x000000, "Member 'PyWidget_AbilityCharge_V5_SetStyle::Style' has a wrong offset!");

// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityCharge_V5.SetSegmentMax
// 0x0004 (0x0004 - 0x0000)
struct PyWidget_AbilityCharge_V5_SetSegmentMax final
{
public:
	int32                                         SegmentMax_0;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_AbilityCharge_V5_SetSegmentMax) == 0x000004, "Wrong alignment on PyWidget_AbilityCharge_V5_SetSegmentMax");
static_assert(sizeof(PyWidget_AbilityCharge_V5_SetSegmentMax) == 0x000004, "Wrong size on PyWidget_AbilityCharge_V5_SetSegmentMax");
static_assert(offsetof(PyWidget_AbilityCharge_V5_SetSegmentMax, SegmentMax_0) == 0x000000, "Member 'PyWidget_AbilityCharge_V5_SetSegmentMax::SegmentMax_0' has a wrong offset!");

// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityCharge_V5.SetPercent
// 0x0008 (0x0008 - 0x0000)
struct PyWidget_AbilityCharge_V5_SetPercent final
{
public:
	float                                         InCurrentValue;                                    // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InMaxValue;                                        // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_AbilityCharge_V5_SetPercent) == 0x000004, "Wrong alignment on PyWidget_AbilityCharge_V5_SetPercent");
static_assert(sizeof(PyWidget_AbilityCharge_V5_SetPercent) == 0x000008, "Wrong size on PyWidget_AbilityCharge_V5_SetPercent");
static_assert(offsetof(PyWidget_AbilityCharge_V5_SetPercent, InCurrentValue) == 0x000000, "Member 'PyWidget_AbilityCharge_V5_SetPercent::InCurrentValue' has a wrong offset!");
static_assert(offsetof(PyWidget_AbilityCharge_V5_SetPercent, InMaxValue) == 0x000004, "Member 'PyWidget_AbilityCharge_V5_SetPercent::InMaxValue' has a wrong offset!");

// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityCharge_V5.UpdatePercentWithDebounce
// 0x0008 (0x0008 - 0x0000)
struct PyWidget_AbilityCharge_V5_UpdatePercentWithDebounce final
{
public:
	float                                         InCurrentValue;                                    // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InMaxValue;                                        // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_AbilityCharge_V5_UpdatePercentWithDebounce) == 0x000004, "Wrong alignment on PyWidget_AbilityCharge_V5_UpdatePercentWithDebounce");
static_assert(sizeof(PyWidget_AbilityCharge_V5_UpdatePercentWithDebounce) == 0x000008, "Wrong size on PyWidget_AbilityCharge_V5_UpdatePercentWithDebounce");
static_assert(offsetof(PyWidget_AbilityCharge_V5_UpdatePercentWithDebounce, InCurrentValue) == 0x000000, "Member 'PyWidget_AbilityCharge_V5_UpdatePercentWithDebounce::InCurrentValue' has a wrong offset!");
static_assert(offsetof(PyWidget_AbilityCharge_V5_UpdatePercentWithDebounce, InMaxValue) == 0x000004, "Member 'PyWidget_AbilityCharge_V5_UpdatePercentWithDebounce::InMaxValue' has a wrong offset!");

// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityCharge_V5.SetSpeed
// 0x0008 (0x0008 - 0x0000)
struct PyWidget_AbilityCharge_V5_SetSpeed final
{
public:
	float                                         InMaxValue;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InSpeedValue;                                      // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_AbilityCharge_V5_SetSpeed) == 0x000004, "Wrong alignment on PyWidget_AbilityCharge_V5_SetSpeed");
static_assert(sizeof(PyWidget_AbilityCharge_V5_SetSpeed) == 0x000008, "Wrong size on PyWidget_AbilityCharge_V5_SetSpeed");
static_assert(offsetof(PyWidget_AbilityCharge_V5_SetSpeed, InMaxValue) == 0x000000, "Member 'PyWidget_AbilityCharge_V5_SetSpeed::InMaxValue' has a wrong offset!");
static_assert(offsetof(PyWidget_AbilityCharge_V5_SetSpeed, InSpeedValue) == 0x000004, "Member 'PyWidget_AbilityCharge_V5_SetSpeed::InSpeedValue' has a wrong offset!");

// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityCharge_V5.SetSegmentCur
// 0x0004 (0x0004 - 0x0000)
struct PyWidget_AbilityCharge_V5_SetSegmentCur final
{
public:
	int32                                         SegmentCur_0;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_AbilityCharge_V5_SetSegmentCur) == 0x000004, "Wrong alignment on PyWidget_AbilityCharge_V5_SetSegmentCur");
static_assert(sizeof(PyWidget_AbilityCharge_V5_SetSegmentCur) == 0x000004, "Wrong size on PyWidget_AbilityCharge_V5_SetSegmentCur");
static_assert(offsetof(PyWidget_AbilityCharge_V5_SetSegmentCur, SegmentCur_0) == 0x000000, "Member 'PyWidget_AbilityCharge_V5_SetSegmentCur::SegmentCur_0' has a wrong offset!");

// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityCharge_V5.OnChargeWidgetClassLoaded
// 0x0008 (0x0008 - 0x0000)
struct PyWidget_AbilityCharge_V5_OnChargeWidgetClassLoaded final
{
public:
	class UObject*                                ChargeWidgetClass;                                 // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_AbilityCharge_V5_OnChargeWidgetClassLoaded) == 0x000008, "Wrong alignment on PyWidget_AbilityCharge_V5_OnChargeWidgetClassLoaded");
static_assert(sizeof(PyWidget_AbilityCharge_V5_OnChargeWidgetClassLoaded) == 0x000008, "Wrong size on PyWidget_AbilityCharge_V5_OnChargeWidgetClassLoaded");
static_assert(offsetof(PyWidget_AbilityCharge_V5_OnChargeWidgetClassLoaded, ChargeWidgetClass) == 0x000000, "Member 'PyWidget_AbilityCharge_V5_OnChargeWidgetClassLoaded::ChargeWidgetClass' has a wrong offset!");

// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityCharge_V5.SetVisible
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_AbilityCharge_V5_SetVisible final
{
public:
	bool                                          Invisible;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_AbilityCharge_V5_SetVisible) == 0x000001, "Wrong alignment on PyWidget_AbilityCharge_V5_SetVisible");
static_assert(sizeof(PyWidget_AbilityCharge_V5_SetVisible) == 0x000001, "Wrong size on PyWidget_AbilityCharge_V5_SetVisible");
static_assert(offsetof(PyWidget_AbilityCharge_V5_SetVisible, Invisible) == 0x000000, "Member 'PyWidget_AbilityCharge_V5_SetVisible::Invisible' has a wrong offset!");

// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityCharge_V5.SetVisibleImmediately
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_AbilityCharge_V5_SetVisibleImmediately final
{
public:
	bool                                          Invisible;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_AbilityCharge_V5_SetVisibleImmediately) == 0x000001, "Wrong alignment on PyWidget_AbilityCharge_V5_SetVisibleImmediately");
static_assert(sizeof(PyWidget_AbilityCharge_V5_SetVisibleImmediately) == 0x000001, "Wrong size on PyWidget_AbilityCharge_V5_SetVisibleImmediately");
static_assert(offsetof(PyWidget_AbilityCharge_V5_SetVisibleImmediately, Invisible) == 0x000000, "Member 'PyWidget_AbilityCharge_V5_SetVisibleImmediately::Invisible' has a wrong offset!");

// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityCharge_V5.PlayUIAudio
// 0x0004 (0x0004 - 0x0000)
struct PyWidget_AbilityCharge_V5_PlayUIAudio final
{
public:
	int32                                         AudioID;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_AbilityCharge_V5_PlayUIAudio) == 0x000004, "Wrong alignment on PyWidget_AbilityCharge_V5_PlayUIAudio");
static_assert(sizeof(PyWidget_AbilityCharge_V5_PlayUIAudio) == 0x000004, "Wrong size on PyWidget_AbilityCharge_V5_PlayUIAudio");
static_assert(offsetof(PyWidget_AbilityCharge_V5_PlayUIAudio, AudioID) == 0x000000, "Member 'PyWidget_AbilityCharge_V5_PlayUIAudio::AudioID' has a wrong offset!");

// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityCharge_V5.PlayUIChargeAudio
// 0x0008 (0x0008 - 0x0000)
struct PyWidget_AbilityCharge_V5_PlayUIChargeAudio final
{
public:
	int32                                         ChargeSingle;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ChargeMax;                                         // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_AbilityCharge_V5_PlayUIChargeAudio) == 0x000004, "Wrong alignment on PyWidget_AbilityCharge_V5_PlayUIChargeAudio");
static_assert(sizeof(PyWidget_AbilityCharge_V5_PlayUIChargeAudio) == 0x000008, "Wrong size on PyWidget_AbilityCharge_V5_PlayUIChargeAudio");
static_assert(offsetof(PyWidget_AbilityCharge_V5_PlayUIChargeAudio, ChargeSingle) == 0x000000, "Member 'PyWidget_AbilityCharge_V5_PlayUIChargeAudio::ChargeSingle' has a wrong offset!");
static_assert(offsetof(PyWidget_AbilityCharge_V5_PlayUIChargeAudio, ChargeMax) == 0x000004, "Member 'PyWidget_AbilityCharge_V5_PlayUIChargeAudio::ChargeMax' has a wrong offset!");

// PythonFunction PyWidget_AbilityCharge_V5.PyWidget_AbilityCharge_V5.PostUIAudioCallback
// 0x0010 (0x0010 - 0x0000)
struct PyWidget_AbilityCharge_V5_PostUIAudioCallback final
{
public:
	EAkCallbackType                               CallbackType;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkCallbackInfo*                        CallbackInfo;                                      // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_AbilityCharge_V5_PostUIAudioCallback) == 0x000008, "Wrong alignment on PyWidget_AbilityCharge_V5_PostUIAudioCallback");
static_assert(sizeof(PyWidget_AbilityCharge_V5_PostUIAudioCallback) == 0x000010, "Wrong size on PyWidget_AbilityCharge_V5_PostUIAudioCallback");
static_assert(offsetof(PyWidget_AbilityCharge_V5_PostUIAudioCallback, CallbackType) == 0x000000, "Member 'PyWidget_AbilityCharge_V5_PostUIAudioCallback::CallbackType' has a wrong offset!");
static_assert(offsetof(PyWidget_AbilityCharge_V5_PostUIAudioCallback, CallbackInfo) == 0x000008, "Member 'PyWidget_AbilityCharge_V5_PostUIAudioCallback::CallbackInfo' has a wrong offset!");

}
