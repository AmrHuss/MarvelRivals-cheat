#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SequencerScripting

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// Enum SequencerScripting.ESequenceTimeUnit
// NumValues: 0x0003
enum class ESequenceTimeUnit : uint8
{
	DisplayRate                              = 0,
	TickResolution                           = 1,
	ESequenceTimeUnit_MAX                    = 2,
};

// Enum SequencerScripting.EEnvironmentTodType
// NumValues: 0x000C
enum class EEnvironmentTodType : uint8
{
	Light                                    = 0,
	DirectionalLight                         = 1,
	SkyLight                                 = 2,
	PointLight                               = 3,
	PPV                                      = 4,
	HeightFog                                = 5,
	SkyATmosphere                            = 6,
	FogSheet                                 = 7,
	LocalFog                                 = 8,
	Cloud                                    = 9,
	SkyBox                                   = 10,
	EEnvironmentTodType_MAX                  = 11,
};

// Enum SequencerScripting.ETodTrackType
// NumValues: 0x0008
enum class ETodTrackType : uint8
{
	Bool                                     = 0,
	Float                                    = 1,
	Color                                    = 2,
	Transform                                = 3,
	Visibility                               = 4,
	Material_Scaler                          = 5,
	Material_Color                           = 6,
	ETodTrackType_MAX                        = 7,
};

// ScriptStruct SequencerScripting.SequencerScriptingRange
// 0x0014 (0x0014 - 0x0000)
struct FSequencerScriptingRange final
{
public:
	uint8                                         bHasStart : 1;                                     // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bHasEnd : 1;                                       // 0x0000(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InclusiveStart;                                    // 0x0004(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ExclusiveEnd;                                      // 0x0008(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameRate                             InternalRate;                                      // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSequencerScriptingRange) == 0x000004, "Wrong alignment on FSequencerScriptingRange");
static_assert(sizeof(FSequencerScriptingRange) == 0x000014, "Wrong size on FSequencerScriptingRange");
static_assert(offsetof(FSequencerScriptingRange, InclusiveStart) == 0x000004, "Member 'FSequencerScriptingRange::InclusiveStart' has a wrong offset!");
static_assert(offsetof(FSequencerScriptingRange, ExclusiveEnd) == 0x000008, "Member 'FSequencerScriptingRange::ExclusiveEnd' has a wrong offset!");
static_assert(offsetof(FSequencerScriptingRange, InternalRate) == 0x00000C, "Member 'FSequencerScriptingRange::InternalRate' has a wrong offset!");

// ScriptStruct SequencerScripting.TodInfo
// 0x0030 (0x0050 - 0x0020)
struct FTodInfo final : public FTableRowBase
{
public:
	EEnvironmentTodType                           PropertyType;                                      // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 PropertyName;                                      // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PropertyPath;                                      // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETodTrackType                                 PropertyClass;                                     // 0x0048(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FTodInfo) == 0x000008, "Wrong alignment on FTodInfo");
static_assert(sizeof(FTodInfo) == 0x000050, "Wrong size on FTodInfo");
static_assert(offsetof(FTodInfo, PropertyType) == 0x000020, "Member 'FTodInfo::PropertyType' has a wrong offset!");
static_assert(offsetof(FTodInfo, PropertyName) == 0x000028, "Member 'FTodInfo::PropertyName' has a wrong offset!");
static_assert(offsetof(FTodInfo, PropertyPath) == 0x000038, "Member 'FTodInfo::PropertyPath' has a wrong offset!");
static_assert(offsetof(FTodInfo, PropertyClass) == 0x000048, "Member 'FTodInfo::PropertyClass' has a wrong offset!");

}
