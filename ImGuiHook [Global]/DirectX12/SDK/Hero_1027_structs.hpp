#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Hero_1027

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Marvel_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum Hero_1027.EWallPreviewState
// NumValues: 0x0004
enum class EWallPreviewState : uint8
{
	NONE                                     = 0,
	GoodPreview                              = 1,
	BadPreview                               = 2,
	EWallPreviewState_MAX                    = 3,
};

// Enum Hero_1027.EWallBuildingEdge
// NumValues: 0x000A
enum class EWallBuildingEdge : uint8
{
	NONE                                     = 0,
	EdgeTop                                  = 1,
	EdgeLeft                                 = 2,
	EdgeRight                                = 4,
	EdgeBottom                               = 8,
	MaskPitchedWall                          = 1,
	MaskVerticalWall                         = 1,
	MaskHorizontalWall                       = 7,
	MaskAll                                  = 15,
	EWallBuildingEdge_MAX                    = 16,
};

// Enum Hero_1027.EWallBuildingMode
// NumValues: 0x0007
enum class EWallBuildingMode : uint8
{
	NONE                                     = 0,
	PITCH_UP                                 = 1,
	PITCH_DOWN                               = 2,
	HORIZONTAL                               = 3,
	VERTICAL                                 = 4,
	VERTICAL_FWD                             = 5,
	EWallBuildingMode_MAX                    = 6,
};

// Enum Hero_1027.EWallHealthState
// NumValues: 0x0005
enum class EWallHealthState : uint8
{
	NONE                                     = 0,
	Healthy                                  = 1,
	SemiDamage                               = 2,
	MostDamage                               = 3,
	EWallHealthState_MAX                     = 4,
};

// Enum Hero_1027.EExplosionMode
// NumValues: 0x0002
enum class EExplosionMode : uint8
{
	Auto                                     = 0,
	EExplosionMode_MAX                       = 1,
};

// Enum Hero_1027.EWallPushMethod
// NumValues: 0x0006
enum class EWallPushMethod : uint8
{
	NONE                                     = 0,
	PushNormally                             = 1,
	PushUtmostly                             = 2,
	BlockPushing                             = 3,
	SkipPushing                              = 4,
	EWallPushMethod_MAX                      = 5,
};

// ScriptStruct Hero_1027.WallBuildingPostPhysicsTickFunction
// 0x0008 (0x0038 - 0x0030)
struct FWallBuildingPostPhysicsTickFunction final : public FTickFunction
{
public:
	uint8                                         Pad_30[0x8];                                       // 0x0030(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FWallBuildingPostPhysicsTickFunction) == 0x000008, "Wrong alignment on FWallBuildingPostPhysicsTickFunction");
static_assert(sizeof(FWallBuildingPostPhysicsTickFunction) == 0x000038, "Wrong size on FWallBuildingPostPhysicsTickFunction");

// ScriptStruct Hero_1027.MarvelWallBuildingContext
// 0x02E0 (0x02E0 - 0x0000)
struct alignas(0x10) FMarvelWallBuildingContext final
{
public:
	int32                                         AbilityID;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarvelWallBuildingAbilityConfig*       AbilityConfig;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 TargetActor;                                       // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMarvelWallBuildingActor*               BuildingActor;                                     // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bPushingMovable;                                   // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRecordPenetrating;                                // 0x0021(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRecordNewlyPenetratingParticles;                  // 0x0022(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_23[0x2BD];                                     // 0x0023(0x02BD)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMarvelWallBuildingContext) == 0x000010, "Wrong alignment on FMarvelWallBuildingContext");
static_assert(sizeof(FMarvelWallBuildingContext) == 0x0002E0, "Wrong size on FMarvelWallBuildingContext");
static_assert(offsetof(FMarvelWallBuildingContext, AbilityID) == 0x000000, "Member 'FMarvelWallBuildingContext::AbilityID' has a wrong offset!");
static_assert(offsetof(FMarvelWallBuildingContext, AbilityConfig) == 0x000008, "Member 'FMarvelWallBuildingContext::AbilityConfig' has a wrong offset!");
static_assert(offsetof(FMarvelWallBuildingContext, TargetActor) == 0x000010, "Member 'FMarvelWallBuildingContext::TargetActor' has a wrong offset!");
static_assert(offsetof(FMarvelWallBuildingContext, BuildingActor) == 0x000018, "Member 'FMarvelWallBuildingContext::BuildingActor' has a wrong offset!");
static_assert(offsetof(FMarvelWallBuildingContext, bPushingMovable) == 0x000020, "Member 'FMarvelWallBuildingContext::bPushingMovable' has a wrong offset!");
static_assert(offsetof(FMarvelWallBuildingContext, bRecordPenetrating) == 0x000021, "Member 'FMarvelWallBuildingContext::bRecordPenetrating' has a wrong offset!");
static_assert(offsetof(FMarvelWallBuildingContext, bRecordNewlyPenetratingParticles) == 0x000022, "Member 'FMarvelWallBuildingContext::bRecordNewlyPenetratingParticles' has a wrong offset!");

// ScriptStruct Hero_1027.WallAttackNotify
// 0x0002 (0x0002 - 0x0000)
struct FWallAttackNotify final
{
public:
	uint8                                         bAttackFront : 1;                                  // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         NotifyCounter;                                     // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWallAttackNotify) == 0x000001, "Wrong alignment on FWallAttackNotify");
static_assert(sizeof(FWallAttackNotify) == 0x000002, "Wrong size on FWallAttackNotify");
static_assert(offsetof(FWallAttackNotify, NotifyCounter) == 0x000001, "Member 'FWallAttackNotify::NotifyCounter' has a wrong offset!");

// ScriptStruct Hero_1027.FindBuildingPlace
// 0x0200 (0x0200 - 0x0000)
struct FFindBuildingPlace final
{
public:
	struct FHitResult                             HitResult;                                         // 0x0000(0x0160)(BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FTransform                             Transform;                                         // 0x0160(0x0060)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                LocalLocation;                                     // 0x01C0(0x0018)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPortalSegments                        PortalSegments;                                    // 0x01D8(0x0020)(BlueprintVisible, NativeAccessSpecifierPublic)
	EWallBuildingEdge                             BuildingEdge;                                      // 0x01F8(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1F9[0x7];                                      // 0x01F9(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FFindBuildingPlace) == 0x000010, "Wrong alignment on FFindBuildingPlace");
static_assert(sizeof(FFindBuildingPlace) == 0x000200, "Wrong size on FFindBuildingPlace");
static_assert(offsetof(FFindBuildingPlace, HitResult) == 0x000000, "Member 'FFindBuildingPlace::HitResult' has a wrong offset!");
static_assert(offsetof(FFindBuildingPlace, Transform) == 0x000160, "Member 'FFindBuildingPlace::Transform' has a wrong offset!");
static_assert(offsetof(FFindBuildingPlace, LocalLocation) == 0x0001C0, "Member 'FFindBuildingPlace::LocalLocation' has a wrong offset!");
static_assert(offsetof(FFindBuildingPlace, PortalSegments) == 0x0001D8, "Member 'FFindBuildingPlace::PortalSegments' has a wrong offset!");
static_assert(offsetof(FFindBuildingPlace, BuildingEdge) == 0x0001F8, "Member 'FFindBuildingPlace::BuildingEdge' has a wrong offset!");

// ScriptStruct Hero_1027.FragmentationExplosionConfig
// 0x0018 (0x0018 - 0x0000)
struct FFragmentationExplosionConfig final
{
public:
	float                                         ExplosionRadius;                                   // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EExplosionMode                                ExplosionMode;                                     // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PitchMinValue;                                     // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PitchMaxValue;                                     // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         FragmentationID;                                   // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         FragmentationNumber;                               // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FFragmentationExplosionConfig) == 0x000004, "Wrong alignment on FFragmentationExplosionConfig");
static_assert(sizeof(FFragmentationExplosionConfig) == 0x000018, "Wrong size on FFragmentationExplosionConfig");
static_assert(offsetof(FFragmentationExplosionConfig, ExplosionRadius) == 0x000000, "Member 'FFragmentationExplosionConfig::ExplosionRadius' has a wrong offset!");
static_assert(offsetof(FFragmentationExplosionConfig, ExplosionMode) == 0x000004, "Member 'FFragmentationExplosionConfig::ExplosionMode' has a wrong offset!");
static_assert(offsetof(FFragmentationExplosionConfig, PitchMinValue) == 0x000008, "Member 'FFragmentationExplosionConfig::PitchMinValue' has a wrong offset!");
static_assert(offsetof(FFragmentationExplosionConfig, PitchMaxValue) == 0x00000C, "Member 'FFragmentationExplosionConfig::PitchMaxValue' has a wrong offset!");
static_assert(offsetof(FFragmentationExplosionConfig, FragmentationID) == 0x000010, "Member 'FFragmentationExplosionConfig::FragmentationID' has a wrong offset!");
static_assert(offsetof(FFragmentationExplosionConfig, FragmentationNumber) == 0x000014, "Member 'FFragmentationExplosionConfig::FragmentationNumber' has a wrong offset!");

// ScriptStruct Hero_1027.WallHealthStateConfig
// 0x0008 (0x0008 - 0x0000)
struct FWallHealthStateConfig final
{
public:
	float                                         MinHealthRatio;                                    // 0x0000(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         FillColorIndex;                                    // 0x0004(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWallHealthStateConfig) == 0x000004, "Wrong alignment on FWallHealthStateConfig");
static_assert(sizeof(FWallHealthStateConfig) == 0x000008, "Wrong size on FWallHealthStateConfig");
static_assert(offsetof(FWallHealthStateConfig, MinHealthRatio) == 0x000000, "Member 'FWallHealthStateConfig::MinHealthRatio' has a wrong offset!");
static_assert(offsetof(FWallHealthStateConfig, FillColorIndex) == 0x000004, "Member 'FWallHealthStateConfig::FillColorIndex' has a wrong offset!");

// ScriptStruct Hero_1027.WallDefendNotify
// 0x0008 (0x0008 - 0x0000)
struct FWallDefendNotify final
{
public:
	uint8                                         bNewlyApply : 1;                                   // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bArmorAdded : 1;                                   // 0x0000(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         NotifyCounter;                                     // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LastAttackActorUID;                                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWallDefendNotify) == 0x000004, "Wrong alignment on FWallDefendNotify");
static_assert(sizeof(FWallDefendNotify) == 0x000008, "Wrong size on FWallDefendNotify");
static_assert(offsetof(FWallDefendNotify, NotifyCounter) == 0x000001, "Member 'FWallDefendNotify::NotifyCounter' has a wrong offset!");
static_assert(offsetof(FWallDefendNotify, LastAttackActorUID) == 0x000004, "Member 'FWallDefendNotify::LastAttackActorUID' has a wrong offset!");

// ScriptStruct Hero_1027.AuraPlantDissolvingFXSpec
// 0x0010 (0x0010 - 0x0000)
struct FAuraPlantDissolvingFXSpec final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFXSystemComponent*                     FXComponent;                                       // 0x0008(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FAuraPlantDissolvingFXSpec) == 0x000008, "Wrong alignment on FAuraPlantDissolvingFXSpec");
static_assert(sizeof(FAuraPlantDissolvingFXSpec) == 0x000010, "Wrong size on FAuraPlantDissolvingFXSpec");
static_assert(offsetof(FAuraPlantDissolvingFXSpec, DeltaTime) == 0x000000, "Member 'FAuraPlantDissolvingFXSpec::DeltaTime' has a wrong offset!");
static_assert(offsetof(FAuraPlantDissolvingFXSpec, FXComponent) == 0x000008, "Member 'FAuraPlantDissolvingFXSpec::FXComponent' has a wrong offset!");

// ScriptStruct Hero_1027.AuraPlantAreaDensitySpec
// 0x0018 (0x0018 - 0x0000)
struct FAuraPlantAreaDensitySpec final
{
public:
	float                                         InnerRadius;                                       // 0x0000(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AreaDensity;                                       // 0x0004(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFXSystemAsset*>                 FXAssets;                                          // 0x0008(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};
static_assert(alignof(FAuraPlantAreaDensitySpec) == 0x000008, "Wrong alignment on FAuraPlantAreaDensitySpec");
static_assert(sizeof(FAuraPlantAreaDensitySpec) == 0x000018, "Wrong size on FAuraPlantAreaDensitySpec");
static_assert(offsetof(FAuraPlantAreaDensitySpec, InnerRadius) == 0x000000, "Member 'FAuraPlantAreaDensitySpec::InnerRadius' has a wrong offset!");
static_assert(offsetof(FAuraPlantAreaDensitySpec, AreaDensity) == 0x000004, "Member 'FAuraPlantAreaDensitySpec::AreaDensity' has a wrong offset!");
static_assert(offsetof(FAuraPlantAreaDensitySpec, FXAssets) == 0x000008, "Member 'FAuraPlantAreaDensitySpec::FXAssets' has a wrong offset!");

// ScriptStruct Hero_1027.AuraPlantActiveFXSpec
// 0x0070 (0x0070 - 0x0000)
struct FAuraPlantActiveFXSpec final
{
public:
	class UFXSystemComponent*                     FXComponent;                                       // 0x0000(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   BaseBoneName;                                      // 0x0008(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UPrimitiveComponent>     BaseComponent;                                     // 0x0014(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                  BaseActor;                                         // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                TraceStart;                                        // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                TraceEnd;                                          // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                ImpactPoint;                                       // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FAuraPlantActiveFXSpec) == 0x000008, "Wrong alignment on FAuraPlantActiveFXSpec");
static_assert(sizeof(FAuraPlantActiveFXSpec) == 0x000070, "Wrong size on FAuraPlantActiveFXSpec");
static_assert(offsetof(FAuraPlantActiveFXSpec, FXComponent) == 0x000000, "Member 'FAuraPlantActiveFXSpec::FXComponent' has a wrong offset!");
static_assert(offsetof(FAuraPlantActiveFXSpec, BaseBoneName) == 0x000008, "Member 'FAuraPlantActiveFXSpec::BaseBoneName' has a wrong offset!");
static_assert(offsetof(FAuraPlantActiveFXSpec, BaseComponent) == 0x000014, "Member 'FAuraPlantActiveFXSpec::BaseComponent' has a wrong offset!");
static_assert(offsetof(FAuraPlantActiveFXSpec, BaseActor) == 0x00001C, "Member 'FAuraPlantActiveFXSpec::BaseActor' has a wrong offset!");
static_assert(offsetof(FAuraPlantActiveFXSpec, TraceStart) == 0x000028, "Member 'FAuraPlantActiveFXSpec::TraceStart' has a wrong offset!");
static_assert(offsetof(FAuraPlantActiveFXSpec, TraceEnd) == 0x000040, "Member 'FAuraPlantActiveFXSpec::TraceEnd' has a wrong offset!");
static_assert(offsetof(FAuraPlantActiveFXSpec, ImpactPoint) == 0x000058, "Member 'FAuraPlantActiveFXSpec::ImpactPoint' has a wrong offset!");

}
