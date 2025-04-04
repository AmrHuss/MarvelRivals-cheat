#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MarvelMovieScene

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "BlastNiagara_structs.hpp"
#include "MovieScene_structs.hpp"
#include "Niagara_structs.hpp"
#include "MovieSceneTracks_structs.hpp"
#include "ChaosNiagara_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct MarvelMovieScene.BlastDynamicFragmentsSoftEventData
// 0x0030 (0x0030 - 0x0000)
struct FBlastDynamicFragmentsSoftEventData final
{
public:
	TArray<struct FBlastBigChunkState>            BigChunksState;                                    // 0x0000(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FBlastFXChunkParticleData>      FXChunksParticleData;                              // 0x0010(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSoftObjectPath>                MeshPaths;                                         // 0x0020(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FBlastDynamicFragmentsSoftEventData) == 0x000008, "Wrong alignment on FBlastDynamicFragmentsSoftEventData");
static_assert(sizeof(FBlastDynamicFragmentsSoftEventData) == 0x000030, "Wrong size on FBlastDynamicFragmentsSoftEventData");
static_assert(offsetof(FBlastDynamicFragmentsSoftEventData, BigChunksState) == 0x000000, "Member 'FBlastDynamicFragmentsSoftEventData::BigChunksState' has a wrong offset!");
static_assert(offsetof(FBlastDynamicFragmentsSoftEventData, FXChunksParticleData) == 0x000010, "Member 'FBlastDynamicFragmentsSoftEventData::FXChunksParticleData' has a wrong offset!");
static_assert(offsetof(FBlastDynamicFragmentsSoftEventData, MeshPaths) == 0x000020, "Member 'FBlastDynamicFragmentsSoftEventData::MeshPaths' has a wrong offset!");

// ScriptStruct MarvelMovieScene.MovieSceneBlastDynamicFragmentsData
// 0x00A8 (0x00F8 - 0x0050)
struct FMovieSceneBlastDynamicFragmentsData final : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                   Times;                                             // 0x0050(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FBlastDynamicFragmentsSoftEventData> KeyValues;                                         // 0x0060(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FMovieSceneKeyHandleMap                KeyHandles;                                        // 0x0070(0x0088)(Transient, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FMovieSceneBlastDynamicFragmentsData) == 0x000008, "Wrong alignment on FMovieSceneBlastDynamicFragmentsData");
static_assert(sizeof(FMovieSceneBlastDynamicFragmentsData) == 0x0000F8, "Wrong size on FMovieSceneBlastDynamicFragmentsData");
static_assert(offsetof(FMovieSceneBlastDynamicFragmentsData, Times) == 0x000050, "Member 'FMovieSceneBlastDynamicFragmentsData::Times' has a wrong offset!");
static_assert(offsetof(FMovieSceneBlastDynamicFragmentsData, KeyValues) == 0x000060, "Member 'FMovieSceneBlastDynamicFragmentsData::KeyValues' has a wrong offset!");
static_assert(offsetof(FMovieSceneBlastDynamicFragmentsData, KeyHandles) == 0x000070, "Member 'FMovieSceneBlastDynamicFragmentsData::KeyHandles' has a wrong offset!");

// ScriptStruct MarvelMovieScene.MovieSceneMarvelBlastDynamicFragmentsTemplate
// 0x00F8 (0x0118 - 0x0020)
struct FMovieSceneMarvelBlastDynamicFragmentsTemplate final : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneBlastDynamicFragmentsData   InstanceData;                                      // 0x0020(0x00F8)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FMovieSceneMarvelBlastDynamicFragmentsTemplate) == 0x000008, "Wrong alignment on FMovieSceneMarvelBlastDynamicFragmentsTemplate");
static_assert(sizeof(FMovieSceneMarvelBlastDynamicFragmentsTemplate) == 0x000118, "Wrong size on FMovieSceneMarvelBlastDynamicFragmentsTemplate");
static_assert(offsetof(FMovieSceneMarvelBlastDynamicFragmentsTemplate, InstanceData) == 0x000020, "Member 'FMovieSceneMarvelBlastDynamicFragmentsTemplate::InstanceData' has a wrong offset!");

// ScriptStruct MarvelMovieScene.MovieSceneMarvelCableActorTemplate
// 0x0310 (0x0330 - 0x0020)
struct FMovieSceneMarvelCableActorTemplate final : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneByteChannel                 CableAbilityStageKeys;                             // 0x0020(0x0108)(NativeAccessSpecifierPublic)
	struct FMovieSceneBoolChannel                 IsStartHighSwingingKeys;                           // 0x0128(0x0100)(NativeAccessSpecifierPublic)
	struct FMovieSceneBoolChannel                 CanUpdateDashTopKeys;                              // 0x0228(0x0100)(NativeAccessSpecifierPublic)
	uint8                                         Pad_328[0x8];                                      // 0x0328(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMovieSceneMarvelCableActorTemplate) == 0x000008, "Wrong alignment on FMovieSceneMarvelCableActorTemplate");
static_assert(sizeof(FMovieSceneMarvelCableActorTemplate) == 0x000330, "Wrong size on FMovieSceneMarvelCableActorTemplate");
static_assert(offsetof(FMovieSceneMarvelCableActorTemplate, CableAbilityStageKeys) == 0x000020, "Member 'FMovieSceneMarvelCableActorTemplate::CableAbilityStageKeys' has a wrong offset!");
static_assert(offsetof(FMovieSceneMarvelCableActorTemplate, IsStartHighSwingingKeys) == 0x000128, "Member 'FMovieSceneMarvelCableActorTemplate::IsStartHighSwingingKeys' has a wrong offset!");
static_assert(offsetof(FMovieSceneMarvelCableActorTemplate, CanUpdateDashTopKeys) == 0x000228, "Member 'FMovieSceneMarvelCableActorTemplate::CanUpdateDashTopKeys' has a wrong offset!");

// ScriptStruct MarvelMovieScene.MovieSceneChaosEffectData
// 0x00A8 (0x00F8 - 0x0050)
struct FMovieSceneChaosEffectData final : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                   Times;                                             // 0x0050(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FChaosEffectEventData>          KeyValues;                                         // 0x0060(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FMovieSceneKeyHandleMap                KeyHandles;                                        // 0x0070(0x0088)(Transient, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FMovieSceneChaosEffectData) == 0x000008, "Wrong alignment on FMovieSceneChaosEffectData");
static_assert(sizeof(FMovieSceneChaosEffectData) == 0x0000F8, "Wrong size on FMovieSceneChaosEffectData");
static_assert(offsetof(FMovieSceneChaosEffectData, Times) == 0x000050, "Member 'FMovieSceneChaosEffectData::Times' has a wrong offset!");
static_assert(offsetof(FMovieSceneChaosEffectData, KeyValues) == 0x000060, "Member 'FMovieSceneChaosEffectData::KeyValues' has a wrong offset!");
static_assert(offsetof(FMovieSceneChaosEffectData, KeyHandles) == 0x000070, "Member 'FMovieSceneChaosEffectData::KeyHandles' has a wrong offset!");

// ScriptStruct MarvelMovieScene.MovieSceneMarvelChaosEffectTemplate
// 0x00F8 (0x0118 - 0x0020)
struct FMovieSceneMarvelChaosEffectTemplate final : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneChaosEffectData             InstanceData;                                      // 0x0020(0x00F8)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FMovieSceneMarvelChaosEffectTemplate) == 0x000008, "Wrong alignment on FMovieSceneMarvelChaosEffectTemplate");
static_assert(sizeof(FMovieSceneMarvelChaosEffectTemplate) == 0x000118, "Wrong size on FMovieSceneMarvelChaosEffectTemplate");
static_assert(offsetof(FMovieSceneMarvelChaosEffectTemplate, InstanceData) == 0x000020, "Member 'FMovieSceneMarvelChaosEffectTemplate::InstanceData' has a wrong offset!");

// ScriptStruct MarvelMovieScene.MovieSceneMarvelCharacterInfoTemplate
// 0x0C98 (0x0CB8 - 0x0020)
struct FMovieSceneMarvelCharacterInfoTemplate final : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneBoolChannel                 ViewTargetIsAllyKeys;                              // 0x0020(0x0100)(NativeAccessSpecifierPublic)
	struct FMovieSceneStringChannel               NameKeys;                                          // 0x0120(0x0110)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                HpWhiteMaxKeys;                                    // 0x0230(0x0110)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                HpWhiteCurrentKeys;                                // 0x0340(0x0110)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                HpBlueMaxKeys;                                     // 0x0450(0x0110)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                HpBlueCurrentKeys;                                 // 0x0560(0x0110)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                HpGreyMaxKeys;                                     // 0x0670(0x0110)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                HpGreyCurrentKeys;                                 // 0x0780(0x0110)(NativeAccessSpecifierPublic)
	struct FMovieSceneBoolChannel                 HpVisibleKeys;                                     // 0x0890(0x0100)(NativeAccessSpecifierPublic)
	struct FMovieSceneStringChannel               ExistingTagsKeys;                                  // 0x0990(0x0110)(NativeAccessSpecifierPublic)
	struct FMovieSceneBoolChannel                 UnderTreatmentKeys;                                // 0x0AA0(0x0100)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                BeheadedRatioKeys;                                 // 0x0BA0(0x0110)(NativeAccessSpecifierPublic)
	uint8                                         Pad_CB0[0x8];                                      // 0x0CB0(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMovieSceneMarvelCharacterInfoTemplate) == 0x000008, "Wrong alignment on FMovieSceneMarvelCharacterInfoTemplate");
static_assert(sizeof(FMovieSceneMarvelCharacterInfoTemplate) == 0x000CB8, "Wrong size on FMovieSceneMarvelCharacterInfoTemplate");
static_assert(offsetof(FMovieSceneMarvelCharacterInfoTemplate, ViewTargetIsAllyKeys) == 0x000020, "Member 'FMovieSceneMarvelCharacterInfoTemplate::ViewTargetIsAllyKeys' has a wrong offset!");
static_assert(offsetof(FMovieSceneMarvelCharacterInfoTemplate, NameKeys) == 0x000120, "Member 'FMovieSceneMarvelCharacterInfoTemplate::NameKeys' has a wrong offset!");
static_assert(offsetof(FMovieSceneMarvelCharacterInfoTemplate, HpWhiteMaxKeys) == 0x000230, "Member 'FMovieSceneMarvelCharacterInfoTemplate::HpWhiteMaxKeys' has a wrong offset!");
static_assert(offsetof(FMovieSceneMarvelCharacterInfoTemplate, HpWhiteCurrentKeys) == 0x000340, "Member 'FMovieSceneMarvelCharacterInfoTemplate::HpWhiteCurrentKeys' has a wrong offset!");
static_assert(offsetof(FMovieSceneMarvelCharacterInfoTemplate, HpBlueMaxKeys) == 0x000450, "Member 'FMovieSceneMarvelCharacterInfoTemplate::HpBlueMaxKeys' has a wrong offset!");
static_assert(offsetof(FMovieSceneMarvelCharacterInfoTemplate, HpBlueCurrentKeys) == 0x000560, "Member 'FMovieSceneMarvelCharacterInfoTemplate::HpBlueCurrentKeys' has a wrong offset!");
static_assert(offsetof(FMovieSceneMarvelCharacterInfoTemplate, HpGreyMaxKeys) == 0x000670, "Member 'FMovieSceneMarvelCharacterInfoTemplate::HpGreyMaxKeys' has a wrong offset!");
static_assert(offsetof(FMovieSceneMarvelCharacterInfoTemplate, HpGreyCurrentKeys) == 0x000780, "Member 'FMovieSceneMarvelCharacterInfoTemplate::HpGreyCurrentKeys' has a wrong offset!");
static_assert(offsetof(FMovieSceneMarvelCharacterInfoTemplate, HpVisibleKeys) == 0x000890, "Member 'FMovieSceneMarvelCharacterInfoTemplate::HpVisibleKeys' has a wrong offset!");
static_assert(offsetof(FMovieSceneMarvelCharacterInfoTemplate, ExistingTagsKeys) == 0x000990, "Member 'FMovieSceneMarvelCharacterInfoTemplate::ExistingTagsKeys' has a wrong offset!");
static_assert(offsetof(FMovieSceneMarvelCharacterInfoTemplate, UnderTreatmentKeys) == 0x000AA0, "Member 'FMovieSceneMarvelCharacterInfoTemplate::UnderTreatmentKeys' has a wrong offset!");
static_assert(offsetof(FMovieSceneMarvelCharacterInfoTemplate, BeheadedRatioKeys) == 0x000BA0, "Member 'FMovieSceneMarvelCharacterInfoTemplate::BeheadedRatioKeys' has a wrong offset!");

// ScriptStruct MarvelMovieScene.MovieSceneCombineTriggerFXData
// 0x00A8 (0x00F8 - 0x0050)
struct FMovieSceneCombineTriggerFXData final : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                   Times;                                             // 0x0050(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FCombineTriggerFXInstanceData>  KeyValues;                                         // 0x0060(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FMovieSceneKeyHandleMap                KeyHandles;                                        // 0x0070(0x0088)(Transient, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FMovieSceneCombineTriggerFXData) == 0x000008, "Wrong alignment on FMovieSceneCombineTriggerFXData");
static_assert(sizeof(FMovieSceneCombineTriggerFXData) == 0x0000F8, "Wrong size on FMovieSceneCombineTriggerFXData");
static_assert(offsetof(FMovieSceneCombineTriggerFXData, Times) == 0x000050, "Member 'FMovieSceneCombineTriggerFXData::Times' has a wrong offset!");
static_assert(offsetof(FMovieSceneCombineTriggerFXData, KeyValues) == 0x000060, "Member 'FMovieSceneCombineTriggerFXData::KeyValues' has a wrong offset!");
static_assert(offsetof(FMovieSceneCombineTriggerFXData, KeyHandles) == 0x000070, "Member 'FMovieSceneCombineTriggerFXData::KeyHandles' has a wrong offset!");

// ScriptStruct MarvelMovieScene.MovieSceneMarvelCombineTriggerFXTemplate
// 0x00F8 (0x0118 - 0x0020)
struct FMovieSceneMarvelCombineTriggerFXTemplate final : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneCombineTriggerFXData        InstanceData;                                      // 0x0020(0x00F8)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FMovieSceneMarvelCombineTriggerFXTemplate) == 0x000008, "Wrong alignment on FMovieSceneMarvelCombineTriggerFXTemplate");
static_assert(sizeof(FMovieSceneMarvelCombineTriggerFXTemplate) == 0x000118, "Wrong size on FMovieSceneMarvelCombineTriggerFXTemplate");
static_assert(offsetof(FMovieSceneMarvelCombineTriggerFXTemplate, InstanceData) == 0x000020, "Member 'FMovieSceneMarvelCombineTriggerFXTemplate::InstanceData' has a wrong offset!");

// ScriptStruct MarvelMovieScene.ChaosFragmentParticleDataStore
// 0x0030 (0x0030 - 0x0000)
struct FChaosFragmentParticleDataStore final
{
public:
	struct FVector3f                              Position;                                          // 0x0000(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuat4f                                Rotation;                                          // 0x0010(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector3f                              Scale;                                             // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Index;                                             // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FChaosFragmentParticleDataStore) == 0x000010, "Wrong alignment on FChaosFragmentParticleDataStore");
static_assert(sizeof(FChaosFragmentParticleDataStore) == 0x000030, "Wrong size on FChaosFragmentParticleDataStore");
static_assert(offsetof(FChaosFragmentParticleDataStore, Position) == 0x000000, "Member 'FChaosFragmentParticleDataStore::Position' has a wrong offset!");
static_assert(offsetof(FChaosFragmentParticleDataStore, Rotation) == 0x000010, "Member 'FChaosFragmentParticleDataStore::Rotation' has a wrong offset!");
static_assert(offsetof(FChaosFragmentParticleDataStore, Scale) == 0x000020, "Member 'FChaosFragmentParticleDataStore::Scale' has a wrong offset!");
static_assert(offsetof(FChaosFragmentParticleDataStore, Index) == 0x00002C, "Member 'FChaosFragmentParticleDataStore::Index' has a wrong offset!");

// ScriptStruct MarvelMovieScene.DynamicBatchMeshEventData
// 0x0010 (0x0010 - 0x0000)
struct FDynamicBatchMeshEventData final
{
public:
	TArray<struct FChaosFragmentParticleDataStore> ParticleDatas;                                     // 0x0000(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDynamicBatchMeshEventData) == 0x000008, "Wrong alignment on FDynamicBatchMeshEventData");
static_assert(sizeof(FDynamicBatchMeshEventData) == 0x000010, "Wrong size on FDynamicBatchMeshEventData");
static_assert(offsetof(FDynamicBatchMeshEventData, ParticleDatas) == 0x000000, "Member 'FDynamicBatchMeshEventData::ParticleDatas' has a wrong offset!");

// ScriptStruct MarvelMovieScene.MovieSceneDynamicBatchMeshData
// 0x00A8 (0x00F8 - 0x0050)
struct FMovieSceneDynamicBatchMeshData final : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                   Times;                                             // 0x0050(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FDynamicBatchMeshEventData>     KeyValues;                                         // 0x0060(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FMovieSceneKeyHandleMap                KeyHandles;                                        // 0x0070(0x0088)(Transient, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FMovieSceneDynamicBatchMeshData) == 0x000008, "Wrong alignment on FMovieSceneDynamicBatchMeshData");
static_assert(sizeof(FMovieSceneDynamicBatchMeshData) == 0x0000F8, "Wrong size on FMovieSceneDynamicBatchMeshData");
static_assert(offsetof(FMovieSceneDynamicBatchMeshData, Times) == 0x000050, "Member 'FMovieSceneDynamicBatchMeshData::Times' has a wrong offset!");
static_assert(offsetof(FMovieSceneDynamicBatchMeshData, KeyValues) == 0x000060, "Member 'FMovieSceneDynamicBatchMeshData::KeyValues' has a wrong offset!");
static_assert(offsetof(FMovieSceneDynamicBatchMeshData, KeyHandles) == 0x000070, "Member 'FMovieSceneDynamicBatchMeshData::KeyHandles' has a wrong offset!");

// ScriptStruct MarvelMovieScene.MovieSceneMarvelDynamicBatchMeshTemplate
// 0x00F8 (0x0118 - 0x0020)
struct FMovieSceneMarvelDynamicBatchMeshTemplate final : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneDynamicBatchMeshData        InstanceData;                                      // 0x0020(0x00F8)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FMovieSceneMarvelDynamicBatchMeshTemplate) == 0x000008, "Wrong alignment on FMovieSceneMarvelDynamicBatchMeshTemplate");
static_assert(sizeof(FMovieSceneMarvelDynamicBatchMeshTemplate) == 0x000118, "Wrong size on FMovieSceneMarvelDynamicBatchMeshTemplate");
static_assert(offsetof(FMovieSceneMarvelDynamicBatchMeshTemplate, InstanceData) == 0x000020, "Member 'FMovieSceneMarvelDynamicBatchMeshTemplate::InstanceData' has a wrong offset!");

// ScriptStruct MarvelMovieScene.MovieSceneMarvelNiagaraParameterCollectionTemplate
// 0x0140 (0x0160 - 0x0020)
struct FMovieSceneMarvelNiagaraParameterCollectionTemplate final : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneObjectPathChannel           NiagaraParameterCollectionInstances;               // 0x0020(0x0138)(NativeAccessSpecifierPublic)
	uint8                                         Pad_158[0x8];                                      // 0x0158(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMovieSceneMarvelNiagaraParameterCollectionTemplate) == 0x000008, "Wrong alignment on FMovieSceneMarvelNiagaraParameterCollectionTemplate");
static_assert(sizeof(FMovieSceneMarvelNiagaraParameterCollectionTemplate) == 0x000160, "Wrong size on FMovieSceneMarvelNiagaraParameterCollectionTemplate");
static_assert(offsetof(FMovieSceneMarvelNiagaraParameterCollectionTemplate, NiagaraParameterCollectionInstances) == 0x000020, "Member 'FMovieSceneMarvelNiagaraParameterCollectionTemplate::NiagaraParameterCollectionInstances' has a wrong offset!");

// ScriptStruct MarvelMovieScene.MovieSceneMarvelNiagaraShowModeTemplate
// 0x0110 (0x0130 - 0x0020)
struct FMovieSceneMarvelNiagaraShowModeTemplate final : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneByteChannel                 NiagaraShowModeKeys;                               // 0x0020(0x0108)(NativeAccessSpecifierPublic)
	uint8                                         Pad_128[0x8];                                      // 0x0128(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMovieSceneMarvelNiagaraShowModeTemplate) == 0x000008, "Wrong alignment on FMovieSceneMarvelNiagaraShowModeTemplate");
static_assert(sizeof(FMovieSceneMarvelNiagaraShowModeTemplate) == 0x000130, "Wrong size on FMovieSceneMarvelNiagaraShowModeTemplate");
static_assert(offsetof(FMovieSceneMarvelNiagaraShowModeTemplate, NiagaraShowModeKeys) == 0x000020, "Member 'FMovieSceneMarvelNiagaraShowModeTemplate::NiagaraShowModeKeys' has a wrong offset!");

// ScriptStruct MarvelMovieScene.MovieSceneMarvelNiagaraTickScaleTemplate
// 0x0118 (0x0138 - 0x0020)
struct FMovieSceneMarvelNiagaraTickScaleTemplate final : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneFloatChannel                NiagaraTickScaleInstances;                         // 0x0020(0x0110)(NativeAccessSpecifierPublic)
	uint8                                         Pad_130[0x8];                                      // 0x0130(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMovieSceneMarvelNiagaraTickScaleTemplate) == 0x000008, "Wrong alignment on FMovieSceneMarvelNiagaraTickScaleTemplate");
static_assert(sizeof(FMovieSceneMarvelNiagaraTickScaleTemplate) == 0x000138, "Wrong size on FMovieSceneMarvelNiagaraTickScaleTemplate");
static_assert(offsetof(FMovieSceneMarvelNiagaraTickScaleTemplate, NiagaraTickScaleInstances) == 0x000020, "Member 'FMovieSceneMarvelNiagaraTickScaleTemplate::NiagaraTickScaleInstances' has a wrong offset!");

// ScriptStruct MarvelMovieScene.MovieSceneMarvelOwnerSeeTemplate
// 0x0208 (0x0228 - 0x0020)
struct FMovieSceneMarvelOwnerSeeTemplate final : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneBoolChannel                 OwnerNoSeeKeys;                                    // 0x0020(0x0100)(NativeAccessSpecifierPublic)
	struct FMovieSceneBoolChannel                 OnlyOwnerSeeKeys;                                  // 0x0120(0x0100)(NativeAccessSpecifierPublic)
	uint8                                         Pad_220[0x8];                                      // 0x0220(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMovieSceneMarvelOwnerSeeTemplate) == 0x000008, "Wrong alignment on FMovieSceneMarvelOwnerSeeTemplate");
static_assert(sizeof(FMovieSceneMarvelOwnerSeeTemplate) == 0x000228, "Wrong size on FMovieSceneMarvelOwnerSeeTemplate");
static_assert(offsetof(FMovieSceneMarvelOwnerSeeTemplate, OwnerNoSeeKeys) == 0x000020, "Member 'FMovieSceneMarvelOwnerSeeTemplate::OwnerNoSeeKeys' has a wrong offset!");
static_assert(offsetof(FMovieSceneMarvelOwnerSeeTemplate, OnlyOwnerSeeKeys) == 0x000120, "Member 'FMovieSceneMarvelOwnerSeeTemplate::OnlyOwnerSeeKeys' has a wrong offset!");

// ScriptStruct MarvelMovieScene.MovieScenePaintSceneCommandData
// 0x00A8 (0x00F8 - 0x0050)
struct FMovieScenePaintSceneCommandData final : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                   Times;                                             // 0x0050(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FPaintSceneCommand>             KeyValues;                                         // 0x0060(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FMovieSceneKeyHandleMap                KeyHandles;                                        // 0x0070(0x0088)(Transient, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FMovieScenePaintSceneCommandData) == 0x000008, "Wrong alignment on FMovieScenePaintSceneCommandData");
static_assert(sizeof(FMovieScenePaintSceneCommandData) == 0x0000F8, "Wrong size on FMovieScenePaintSceneCommandData");
static_assert(offsetof(FMovieScenePaintSceneCommandData, Times) == 0x000050, "Member 'FMovieScenePaintSceneCommandData::Times' has a wrong offset!");
static_assert(offsetof(FMovieScenePaintSceneCommandData, KeyValues) == 0x000060, "Member 'FMovieScenePaintSceneCommandData::KeyValues' has a wrong offset!");
static_assert(offsetof(FMovieScenePaintSceneCommandData, KeyHandles) == 0x000070, "Member 'FMovieScenePaintSceneCommandData::KeyHandles' has a wrong offset!");

// ScriptStruct MarvelMovieScene.MovieScenePaintSceneReconnectRebuildData
// 0x00A8 (0x00F8 - 0x0050)
struct FMovieScenePaintSceneReconnectRebuildData final : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                   Times;                                             // 0x0050(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FPaintSceneReconnectRebuildData> KeyValues;                                         // 0x0060(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FMovieSceneKeyHandleMap                KeyHandles;                                        // 0x0070(0x0088)(Transient, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FMovieScenePaintSceneReconnectRebuildData) == 0x000008, "Wrong alignment on FMovieScenePaintSceneReconnectRebuildData");
static_assert(sizeof(FMovieScenePaintSceneReconnectRebuildData) == 0x0000F8, "Wrong size on FMovieScenePaintSceneReconnectRebuildData");
static_assert(offsetof(FMovieScenePaintSceneReconnectRebuildData, Times) == 0x000050, "Member 'FMovieScenePaintSceneReconnectRebuildData::Times' has a wrong offset!");
static_assert(offsetof(FMovieScenePaintSceneReconnectRebuildData, KeyValues) == 0x000060, "Member 'FMovieScenePaintSceneReconnectRebuildData::KeyValues' has a wrong offset!");
static_assert(offsetof(FMovieScenePaintSceneReconnectRebuildData, KeyHandles) == 0x000070, "Member 'FMovieScenePaintSceneReconnectRebuildData::KeyHandles' has a wrong offset!");

// ScriptStruct MarvelMovieScene.MovieSceneMarvelPaintSceneTemplate
// 0x01F0 (0x0210 - 0x0020)
struct FMovieSceneMarvelPaintSceneTemplate final : public FMovieSceneEvalTemplate
{
public:
	struct FMovieScenePaintSceneCommandData       Commands;                                          // 0x0020(0x00F8)(NativeAccessSpecifierPublic)
	struct FMovieScenePaintSceneReconnectRebuildData RebuildData;                                       // 0x0118(0x00F8)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FMovieSceneMarvelPaintSceneTemplate) == 0x000008, "Wrong alignment on FMovieSceneMarvelPaintSceneTemplate");
static_assert(sizeof(FMovieSceneMarvelPaintSceneTemplate) == 0x000210, "Wrong size on FMovieSceneMarvelPaintSceneTemplate");
static_assert(offsetof(FMovieSceneMarvelPaintSceneTemplate, Commands) == 0x000020, "Member 'FMovieSceneMarvelPaintSceneTemplate::Commands' has a wrong offset!");
static_assert(offsetof(FMovieSceneMarvelPaintSceneTemplate, RebuildData) == 0x000118, "Member 'FMovieSceneMarvelPaintSceneTemplate::RebuildData' has a wrong offset!");

// ScriptStruct MarvelMovieScene.BoneSpaceTransformsData
// 0x0010 (0x0010 - 0x0000)
struct FBoneSpaceTransformsData final
{
public:
	TArray<struct FTransform>                     Transforms;                                        // 0x0000(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FBoneSpaceTransformsData) == 0x000008, "Wrong alignment on FBoneSpaceTransformsData");
static_assert(sizeof(FBoneSpaceTransformsData) == 0x000010, "Wrong size on FBoneSpaceTransformsData");
static_assert(offsetof(FBoneSpaceTransformsData, Transforms) == 0x000000, "Member 'FBoneSpaceTransformsData::Transforms' has a wrong offset!");

// ScriptStruct MarvelMovieScene.BoneSpaceTransformsChannel
// 0x00A8 (0x00F8 - 0x0050)
struct FBoneSpaceTransformsChannel final : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                   Times;                                             // 0x0050(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FBoneSpaceTransformsData>       KeyValues;                                         // 0x0060(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FMovieSceneKeyHandleMap                KeyHandles;                                        // 0x0070(0x0088)(Transient, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FBoneSpaceTransformsChannel) == 0x000008, "Wrong alignment on FBoneSpaceTransformsChannel");
static_assert(sizeof(FBoneSpaceTransformsChannel) == 0x0000F8, "Wrong size on FBoneSpaceTransformsChannel");
static_assert(offsetof(FBoneSpaceTransformsChannel, Times) == 0x000050, "Member 'FBoneSpaceTransformsChannel::Times' has a wrong offset!");
static_assert(offsetof(FBoneSpaceTransformsChannel, KeyValues) == 0x000060, "Member 'FBoneSpaceTransformsChannel::KeyValues' has a wrong offset!");
static_assert(offsetof(FBoneSpaceTransformsChannel, KeyHandles) == 0x000070, "Member 'FBoneSpaceTransformsChannel::KeyHandles' has a wrong offset!");

// ScriptStruct MarvelMovieScene.MovieSceneMarvelPoseableMeshComponentTemplate
// 0x00F8 (0x0118 - 0x0020)
struct FMovieSceneMarvelPoseableMeshComponentTemplate final : public FMovieSceneEvalTemplate
{
public:
	struct FBoneSpaceTransformsChannel            BoneSpaceTransforms;                               // 0x0020(0x00F8)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FMovieSceneMarvelPoseableMeshComponentTemplate) == 0x000008, "Wrong alignment on FMovieSceneMarvelPoseableMeshComponentTemplate");
static_assert(sizeof(FMovieSceneMarvelPoseableMeshComponentTemplate) == 0x000118, "Wrong size on FMovieSceneMarvelPoseableMeshComponentTemplate");
static_assert(offsetof(FMovieSceneMarvelPoseableMeshComponentTemplate, BoneSpaceTransforms) == 0x000020, "Member 'FMovieSceneMarvelPoseableMeshComponentTemplate::BoneSpaceTransforms' has a wrong offset!");

// ScriptStruct MarvelMovieScene.SplineCurvesChannel
// 0x00A8 (0x00F8 - 0x0050)
struct FSplineCurvesChannel final : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                   Times;                                             // 0x0050(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FSplineCurves>                  KeyValues;                                         // 0x0060(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FMovieSceneKeyHandleMap                KeyHandles;                                        // 0x0070(0x0088)(Transient, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FSplineCurvesChannel) == 0x000008, "Wrong alignment on FSplineCurvesChannel");
static_assert(sizeof(FSplineCurvesChannel) == 0x0000F8, "Wrong size on FSplineCurvesChannel");
static_assert(offsetof(FSplineCurvesChannel, Times) == 0x000050, "Member 'FSplineCurvesChannel::Times' has a wrong offset!");
static_assert(offsetof(FSplineCurvesChannel, KeyValues) == 0x000060, "Member 'FSplineCurvesChannel::KeyValues' has a wrong offset!");
static_assert(offsetof(FSplineCurvesChannel, KeyHandles) == 0x000070, "Member 'FSplineCurvesChannel::KeyHandles' has a wrong offset!");

// ScriptStruct MarvelMovieScene.MovieSceneMarvelSplineComponentTemplate
// 0x00F8 (0x0118 - 0x0020)
struct FMovieSceneMarvelSplineComponentTemplate final : public FMovieSceneEvalTemplate
{
public:
	struct FSplineCurvesChannel                   SplineCurves;                                      // 0x0020(0x00F8)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FMovieSceneMarvelSplineComponentTemplate) == 0x000008, "Wrong alignment on FMovieSceneMarvelSplineComponentTemplate");
static_assert(sizeof(FMovieSceneMarvelSplineComponentTemplate) == 0x000118, "Wrong size on FMovieSceneMarvelSplineComponentTemplate");
static_assert(offsetof(FMovieSceneMarvelSplineComponentTemplate, SplineCurves) == 0x000020, "Member 'FMovieSceneMarvelSplineComponentTemplate::SplineCurves' has a wrong offset!");

}

