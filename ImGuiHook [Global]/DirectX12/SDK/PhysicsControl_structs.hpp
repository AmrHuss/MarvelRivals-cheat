#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PhysicsControl

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum PhysicsControl.EPhysicsControlType
// NumValues: 0x0003
enum class EPhysicsControlType : uint8
{
	WorldSpace                               = 0,
	ParentSpace                              = 1,
	EPhysicsControlType_MAX                  = 2,
};

// Enum PhysicsControl.EResetToCachedTargetBehavior
// NumValues: 0x0003
enum class EResetToCachedTargetBehavior : uint8
{
	ResetImmediately                         = 0,
	ResetDuringUpdateControls                = 1,
	EResetToCachedTargetBehavior_MAX         = 2,
};

// Enum PhysicsControl.EPhysicsMovementType
// NumValues: 0x0004
enum class EPhysicsMovementType : uint8
{
	Static                                   = 0,
	Kinematic                                = 1,
	Simulated                                = 2,
	EPhysicsMovementType_MAX                 = 3,
};

// ScriptStruct PhysicsControl.PhysicsControlData
// 0x0020 (0x0020 - 0x0000)
struct FPhysicsControlData final
{
public:
	float                                         LinearStrength;                                    // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LinearDampingRatio;                                // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LinearExtraDamping;                                // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxForce;                                          // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AngularStrength;                                   // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AngularDampingRatio;                               // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AngularExtraDamping;                               // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxTorque;                                         // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPhysicsControlData) == 0x000004, "Wrong alignment on FPhysicsControlData");
static_assert(sizeof(FPhysicsControlData) == 0x000020, "Wrong size on FPhysicsControlData");
static_assert(offsetof(FPhysicsControlData, LinearStrength) == 0x000000, "Member 'FPhysicsControlData::LinearStrength' has a wrong offset!");
static_assert(offsetof(FPhysicsControlData, LinearDampingRatio) == 0x000004, "Member 'FPhysicsControlData::LinearDampingRatio' has a wrong offset!");
static_assert(offsetof(FPhysicsControlData, LinearExtraDamping) == 0x000008, "Member 'FPhysicsControlData::LinearExtraDamping' has a wrong offset!");
static_assert(offsetof(FPhysicsControlData, MaxForce) == 0x00000C, "Member 'FPhysicsControlData::MaxForce' has a wrong offset!");
static_assert(offsetof(FPhysicsControlData, AngularStrength) == 0x000010, "Member 'FPhysicsControlData::AngularStrength' has a wrong offset!");
static_assert(offsetof(FPhysicsControlData, AngularDampingRatio) == 0x000014, "Member 'FPhysicsControlData::AngularDampingRatio' has a wrong offset!");
static_assert(offsetof(FPhysicsControlData, AngularExtraDamping) == 0x000018, "Member 'FPhysicsControlData::AngularExtraDamping' has a wrong offset!");
static_assert(offsetof(FPhysicsControlData, MaxTorque) == 0x00001C, "Member 'FPhysicsControlData::MaxTorque' has a wrong offset!");

// ScriptStruct PhysicsControl.PhysicsControlMultiplier
// 0x0070 (0x0070 - 0x0000)
struct FPhysicsControlMultiplier final
{
public:
	struct FVector                                LinearStrengthMultiplier;                          // 0x0000(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                LinearDampingRatioMultiplier;                      // 0x0018(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                LinearExtraDampingMultiplier;                      // 0x0030(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                MaxForceMultiplier;                                // 0x0048(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AngularStrengthMultiplier;                         // 0x0060(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AngularDampingRatioMultiplier;                     // 0x0064(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AngularExtraDampingMultiplier;                     // 0x0068(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxTorqueMultiplier;                               // 0x006C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPhysicsControlMultiplier) == 0x000008, "Wrong alignment on FPhysicsControlMultiplier");
static_assert(sizeof(FPhysicsControlMultiplier) == 0x000070, "Wrong size on FPhysicsControlMultiplier");
static_assert(offsetof(FPhysicsControlMultiplier, LinearStrengthMultiplier) == 0x000000, "Member 'FPhysicsControlMultiplier::LinearStrengthMultiplier' has a wrong offset!");
static_assert(offsetof(FPhysicsControlMultiplier, LinearDampingRatioMultiplier) == 0x000018, "Member 'FPhysicsControlMultiplier::LinearDampingRatioMultiplier' has a wrong offset!");
static_assert(offsetof(FPhysicsControlMultiplier, LinearExtraDampingMultiplier) == 0x000030, "Member 'FPhysicsControlMultiplier::LinearExtraDampingMultiplier' has a wrong offset!");
static_assert(offsetof(FPhysicsControlMultiplier, MaxForceMultiplier) == 0x000048, "Member 'FPhysicsControlMultiplier::MaxForceMultiplier' has a wrong offset!");
static_assert(offsetof(FPhysicsControlMultiplier, AngularStrengthMultiplier) == 0x000060, "Member 'FPhysicsControlMultiplier::AngularStrengthMultiplier' has a wrong offset!");
static_assert(offsetof(FPhysicsControlMultiplier, AngularDampingRatioMultiplier) == 0x000064, "Member 'FPhysicsControlMultiplier::AngularDampingRatioMultiplier' has a wrong offset!");
static_assert(offsetof(FPhysicsControlMultiplier, AngularExtraDampingMultiplier) == 0x000068, "Member 'FPhysicsControlMultiplier::AngularExtraDampingMultiplier' has a wrong offset!");
static_assert(offsetof(FPhysicsControlMultiplier, MaxTorqueMultiplier) == 0x00006C, "Member 'FPhysicsControlMultiplier::MaxTorqueMultiplier' has a wrong offset!");

// ScriptStruct PhysicsControl.PhysicsControlTarget
// 0x0068 (0x0068 - 0x0000)
struct FPhysicsControlTarget final
{
public:
	struct FVector                                TargetPosition;                                    // 0x0000(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                TargetVelocity;                                    // 0x0018(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               TargetOrientation;                                 // 0x0030(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                TargetAngularVelocity;                             // 0x0048(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bApplyControlPointToTarget;                        // 0x0060(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPhysicsControlTarget) == 0x000008, "Wrong alignment on FPhysicsControlTarget");
static_assert(sizeof(FPhysicsControlTarget) == 0x000068, "Wrong size on FPhysicsControlTarget");
static_assert(offsetof(FPhysicsControlTarget, TargetPosition) == 0x000000, "Member 'FPhysicsControlTarget::TargetPosition' has a wrong offset!");
static_assert(offsetof(FPhysicsControlTarget, TargetVelocity) == 0x000018, "Member 'FPhysicsControlTarget::TargetVelocity' has a wrong offset!");
static_assert(offsetof(FPhysicsControlTarget, TargetOrientation) == 0x000030, "Member 'FPhysicsControlTarget::TargetOrientation' has a wrong offset!");
static_assert(offsetof(FPhysicsControlTarget, TargetAngularVelocity) == 0x000048, "Member 'FPhysicsControlTarget::TargetAngularVelocity' has a wrong offset!");
static_assert(offsetof(FPhysicsControlTarget, bApplyControlPointToTarget) == 0x000060, "Member 'FPhysicsControlTarget::bApplyControlPointToTarget' has a wrong offset!");

// ScriptStruct PhysicsControl.PhysicsControlSettings
// 0x0028 (0x0028 - 0x0000)
struct FPhysicsControlSettings final
{
public:
	struct FVector                                ControlPoint;                                      // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseSkeletalAnimation;                             // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SkeletalAnimationVelocityMultiplier;               // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDisableCollision;                                 // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAutoDisable;                                      // 0x0021(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPhysicsControlSettings) == 0x000008, "Wrong alignment on FPhysicsControlSettings");
static_assert(sizeof(FPhysicsControlSettings) == 0x000028, "Wrong size on FPhysicsControlSettings");
static_assert(offsetof(FPhysicsControlSettings, ControlPoint) == 0x000000, "Member 'FPhysicsControlSettings::ControlPoint' has a wrong offset!");
static_assert(offsetof(FPhysicsControlSettings, bUseSkeletalAnimation) == 0x000018, "Member 'FPhysicsControlSettings::bUseSkeletalAnimation' has a wrong offset!");
static_assert(offsetof(FPhysicsControlSettings, SkeletalAnimationVelocityMultiplier) == 0x00001C, "Member 'FPhysicsControlSettings::SkeletalAnimationVelocityMultiplier' has a wrong offset!");
static_assert(offsetof(FPhysicsControlSettings, bDisableCollision) == 0x000020, "Member 'FPhysicsControlSettings::bDisableCollision' has a wrong offset!");
static_assert(offsetof(FPhysicsControlSettings, bAutoDisable) == 0x000021, "Member 'FPhysicsControlSettings::bAutoDisable' has a wrong offset!");

// ScriptStruct PhysicsControl.PhysicsControl
// 0x0150 (0x0150 - 0x0000)
struct FPhysicsControl final
{
public:
	class UMeshComponent*                         ParentMeshComponent;                               // 0x0000(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ParentBoneName;                                    // 0x0008(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMeshComponent*                         ChildMeshComponent;                                // 0x0018(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ChildBoneName;                                     // 0x0020(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPhysicsControlData                    ControlData;                                       // 0x002C(0x0020)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPhysicsControlMultiplier              ControlMultiplier;                                 // 0x0050(0x0070)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPhysicsControlTarget                  ControlTarget;                                     // 0x00C0(0x0068)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPhysicsControlSettings                ControlSettings;                                   // 0x0128(0x0028)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPhysicsControl) == 0x000008, "Wrong alignment on FPhysicsControl");
static_assert(sizeof(FPhysicsControl) == 0x000150, "Wrong size on FPhysicsControl");
static_assert(offsetof(FPhysicsControl, ParentMeshComponent) == 0x000000, "Member 'FPhysicsControl::ParentMeshComponent' has a wrong offset!");
static_assert(offsetof(FPhysicsControl, ParentBoneName) == 0x000008, "Member 'FPhysicsControl::ParentBoneName' has a wrong offset!");
static_assert(offsetof(FPhysicsControl, ChildMeshComponent) == 0x000018, "Member 'FPhysicsControl::ChildMeshComponent' has a wrong offset!");
static_assert(offsetof(FPhysicsControl, ChildBoneName) == 0x000020, "Member 'FPhysicsControl::ChildBoneName' has a wrong offset!");
static_assert(offsetof(FPhysicsControl, ControlData) == 0x00002C, "Member 'FPhysicsControl::ControlData' has a wrong offset!");
static_assert(offsetof(FPhysicsControl, ControlMultiplier) == 0x000050, "Member 'FPhysicsControl::ControlMultiplier' has a wrong offset!");
static_assert(offsetof(FPhysicsControl, ControlTarget) == 0x0000C0, "Member 'FPhysicsControl::ControlTarget' has a wrong offset!");
static_assert(offsetof(FPhysicsControl, ControlSettings) == 0x000128, "Member 'FPhysicsControl::ControlSettings' has a wrong offset!");

// ScriptStruct PhysicsControl.PhysicsControlLimbSetupData
// 0x001C (0x001C - 0x0000)
struct FPhysicsControlLimbSetupData final
{
public:
	class FName                                   LimbName;                                          // 0x0000(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   StartBone;                                         // 0x000C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIncludeParentBone;                                // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPhysicsControlLimbSetupData) == 0x000004, "Wrong alignment on FPhysicsControlLimbSetupData");
static_assert(sizeof(FPhysicsControlLimbSetupData) == 0x00001C, "Wrong size on FPhysicsControlLimbSetupData");
static_assert(offsetof(FPhysicsControlLimbSetupData, LimbName) == 0x000000, "Member 'FPhysicsControlLimbSetupData::LimbName' has a wrong offset!");
static_assert(offsetof(FPhysicsControlLimbSetupData, StartBone) == 0x00000C, "Member 'FPhysicsControlLimbSetupData::StartBone' has a wrong offset!");
static_assert(offsetof(FPhysicsControlLimbSetupData, bIncludeParentBone) == 0x000018, "Member 'FPhysicsControlLimbSetupData::bIncludeParentBone' has a wrong offset!");

// ScriptStruct PhysicsControl.PhysicsControlLimbBones
// 0x0020 (0x0020 - 0x0000)
struct alignas(0x08) FPhysicsControlLimbBones final
{
public:
	uint8                                         Pad_0[0x20];                                       // 0x0000(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPhysicsControlLimbBones) == 0x000008, "Wrong alignment on FPhysicsControlLimbBones");
static_assert(sizeof(FPhysicsControlLimbBones) == 0x000020, "Wrong size on FPhysicsControlLimbBones");

// ScriptStruct PhysicsControl.PhysicsControlNames
// 0x0010 (0x0010 - 0x0000)
struct FPhysicsControlNames final
{
public:
	TArray<class FName>                           Names;                                             // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPhysicsControlNames) == 0x000008, "Wrong alignment on FPhysicsControlNames");
static_assert(sizeof(FPhysicsControlNames) == 0x000010, "Wrong size on FPhysicsControlNames");
static_assert(offsetof(FPhysicsControlNames, Names) == 0x000000, "Member 'FPhysicsControlNames::Names' has a wrong offset!");

// ScriptStruct PhysicsControl.InitialPhysicsControl
// 0x0160 (0x0160 - 0x0000)
struct FInitialPhysicsControl final
{
public:
	class AActor*                                 ParentActor;                                       // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ParentMeshComponentName;                           // 0x0008(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ParentBoneName;                                    // 0x0014(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 ChildActor;                                        // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ChildMeshComponentName;                            // 0x0028(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ChildBoneName;                                     // 0x0034(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPhysicsControlData                    ControlData;                                       // 0x0040(0x0020)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPhysicsControlMultiplier              ControlMultiplier;                                 // 0x0060(0x0070)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPhysicsControlTarget                  ControlTarget;                                     // 0x00D0(0x0068)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPhysicsControlSettings                ControlSettings;                                   // 0x0138(0x0028)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FInitialPhysicsControl) == 0x000008, "Wrong alignment on FInitialPhysicsControl");
static_assert(sizeof(FInitialPhysicsControl) == 0x000160, "Wrong size on FInitialPhysicsControl");
static_assert(offsetof(FInitialPhysicsControl, ParentActor) == 0x000000, "Member 'FInitialPhysicsControl::ParentActor' has a wrong offset!");
static_assert(offsetof(FInitialPhysicsControl, ParentMeshComponentName) == 0x000008, "Member 'FInitialPhysicsControl::ParentMeshComponentName' has a wrong offset!");
static_assert(offsetof(FInitialPhysicsControl, ParentBoneName) == 0x000014, "Member 'FInitialPhysicsControl::ParentBoneName' has a wrong offset!");
static_assert(offsetof(FInitialPhysicsControl, ChildActor) == 0x000020, "Member 'FInitialPhysicsControl::ChildActor' has a wrong offset!");
static_assert(offsetof(FInitialPhysicsControl, ChildMeshComponentName) == 0x000028, "Member 'FInitialPhysicsControl::ChildMeshComponentName' has a wrong offset!");
static_assert(offsetof(FInitialPhysicsControl, ChildBoneName) == 0x000034, "Member 'FInitialPhysicsControl::ChildBoneName' has a wrong offset!");
static_assert(offsetof(FInitialPhysicsControl, ControlData) == 0x000040, "Member 'FInitialPhysicsControl::ControlData' has a wrong offset!");
static_assert(offsetof(FInitialPhysicsControl, ControlMultiplier) == 0x000060, "Member 'FInitialPhysicsControl::ControlMultiplier' has a wrong offset!");
static_assert(offsetof(FInitialPhysicsControl, ControlTarget) == 0x0000D0, "Member 'FInitialPhysicsControl::ControlTarget' has a wrong offset!");
static_assert(offsetof(FInitialPhysicsControl, ControlSettings) == 0x000138, "Member 'FInitialPhysicsControl::ControlSettings' has a wrong offset!");

// ScriptStruct PhysicsControl.InitialBodyModifier
// 0x0080 (0x0080 - 0x0000)
struct FInitialBodyModifier final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   MeshComponentName;                                 // 0x0008(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   BoneName;                                          // 0x0014(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPhysicsMovementType                          MovementType;                                      // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         GravityMultiplier;                                 // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                KinematicTargetPosition;                           // 0x0030(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_48[0x8];                                       // 0x0048(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuat                                  KinematicTargetOrientation;                        // 0x0050(0x0020)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseSkeletalAnimation;                             // 0x0070(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_71[0xF];                                       // 0x0071(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FInitialBodyModifier) == 0x000010, "Wrong alignment on FInitialBodyModifier");
static_assert(sizeof(FInitialBodyModifier) == 0x000080, "Wrong size on FInitialBodyModifier");
static_assert(offsetof(FInitialBodyModifier, Actor) == 0x000000, "Member 'FInitialBodyModifier::Actor' has a wrong offset!");
static_assert(offsetof(FInitialBodyModifier, MeshComponentName) == 0x000008, "Member 'FInitialBodyModifier::MeshComponentName' has a wrong offset!");
static_assert(offsetof(FInitialBodyModifier, BoneName) == 0x000014, "Member 'FInitialBodyModifier::BoneName' has a wrong offset!");
static_assert(offsetof(FInitialBodyModifier, MovementType) == 0x000020, "Member 'FInitialBodyModifier::MovementType' has a wrong offset!");
static_assert(offsetof(FInitialBodyModifier, GravityMultiplier) == 0x000028, "Member 'FInitialBodyModifier::GravityMultiplier' has a wrong offset!");
static_assert(offsetof(FInitialBodyModifier, KinematicTargetPosition) == 0x000030, "Member 'FInitialBodyModifier::KinematicTargetPosition' has a wrong offset!");
static_assert(offsetof(FInitialBodyModifier, KinematicTargetOrientation) == 0x000050, "Member 'FInitialBodyModifier::KinematicTargetOrientation' has a wrong offset!");
static_assert(offsetof(FInitialBodyModifier, bUseSkeletalAnimation) == 0x000070, "Member 'FInitialBodyModifier::bUseSkeletalAnimation' has a wrong offset!");

// ScriptStruct PhysicsControl.InitialCharacterControls
// 0x00C8 (0x00C8 - 0x0000)
struct FInitialCharacterControls final
{
public:
	class AActor*                                 CharacterActor;                                    // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   SkeletalMeshComponentName;                         // 0x0008(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPhysicsControlLimbSetupData>   LimbSetupData;                                     // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FPhysicsControlData                    WorldSpaceControlData;                             // 0x0028(0x0020)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPhysicsControlSettings                WorldSpaceControlSettings;                         // 0x0048(0x0028)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bEnableWorldSpaceControls;                         // 0x0070(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPhysicsControlData                    ParentSpaceControlData;                            // 0x0074(0x0020)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPhysicsControlSettings                ParentSpaceControlSettings;                        // 0x0098(0x0028)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bEnableParentSpaceControls;                        // 0x00C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPhysicsMovementType                          PhysicsMovementType;                               // 0x00C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C2[0x6];                                       // 0x00C2(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FInitialCharacterControls) == 0x000008, "Wrong alignment on FInitialCharacterControls");
static_assert(sizeof(FInitialCharacterControls) == 0x0000C8, "Wrong size on FInitialCharacterControls");
static_assert(offsetof(FInitialCharacterControls, CharacterActor) == 0x000000, "Member 'FInitialCharacterControls::CharacterActor' has a wrong offset!");
static_assert(offsetof(FInitialCharacterControls, SkeletalMeshComponentName) == 0x000008, "Member 'FInitialCharacterControls::SkeletalMeshComponentName' has a wrong offset!");
static_assert(offsetof(FInitialCharacterControls, LimbSetupData) == 0x000018, "Member 'FInitialCharacterControls::LimbSetupData' has a wrong offset!");
static_assert(offsetof(FInitialCharacterControls, WorldSpaceControlData) == 0x000028, "Member 'FInitialCharacterControls::WorldSpaceControlData' has a wrong offset!");
static_assert(offsetof(FInitialCharacterControls, WorldSpaceControlSettings) == 0x000048, "Member 'FInitialCharacterControls::WorldSpaceControlSettings' has a wrong offset!");
static_assert(offsetof(FInitialCharacterControls, bEnableWorldSpaceControls) == 0x000070, "Member 'FInitialCharacterControls::bEnableWorldSpaceControls' has a wrong offset!");
static_assert(offsetof(FInitialCharacterControls, ParentSpaceControlData) == 0x000074, "Member 'FInitialCharacterControls::ParentSpaceControlData' has a wrong offset!");
static_assert(offsetof(FInitialCharacterControls, ParentSpaceControlSettings) == 0x000098, "Member 'FInitialCharacterControls::ParentSpaceControlSettings' has a wrong offset!");
static_assert(offsetof(FInitialCharacterControls, bEnableParentSpaceControls) == 0x0000C0, "Member 'FInitialCharacterControls::bEnableParentSpaceControls' has a wrong offset!");
static_assert(offsetof(FInitialCharacterControls, PhysicsMovementType) == 0x0000C1, "Member 'FInitialCharacterControls::PhysicsMovementType' has a wrong offset!");

}
