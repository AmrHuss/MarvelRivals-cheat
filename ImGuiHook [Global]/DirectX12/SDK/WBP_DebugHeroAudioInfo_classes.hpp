#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DebugHeroAudioInfo

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_DebugHeroAudioInfo.WBP_DebugHeroAudioInfo_C
// 0x0070 (0x0428 - 0x03B8)
class UWBP_DebugHeroAudioInfo_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMarvelTextBlock*                       ListenerInfo;                                      // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Merge;                                             // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Obs;                                               // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Occ;                                               // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 ListnerDisInfo;                                    // 0x03E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 ObsInfo;                                           // 0x03F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 OccInfo;                                           // 0x0400(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UAkComponent*                           AkComponent;                                       // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                 MergedRtpcGroup;                                   // 0x0418(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_DebugHeroAudioInfo(int32 EntryPoint);
	class FText Get_ListenerInfo_Text_0();
	void GetListnerDisInfo(class FString* Out);
	void Initialize(class UAkComponent* InAk);
	void OnTimer();
	void TryGetOwnerAk(class UAkComponent** OutAk);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_DebugHeroAudioInfo_C">();
	}
	static class UWBP_DebugHeroAudioInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_DebugHeroAudioInfo_C>();
	}
};
static_assert(alignof(UWBP_DebugHeroAudioInfo_C) == 0x000008, "Wrong alignment on UWBP_DebugHeroAudioInfo_C");
static_assert(sizeof(UWBP_DebugHeroAudioInfo_C) == 0x000428, "Wrong size on UWBP_DebugHeroAudioInfo_C");
static_assert(offsetof(UWBP_DebugHeroAudioInfo_C, UberGraphFrame) == 0x0003B8, "Member 'UWBP_DebugHeroAudioInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_DebugHeroAudioInfo_C, ListenerInfo) == 0x0003C0, "Member 'UWBP_DebugHeroAudioInfo_C::ListenerInfo' has a wrong offset!");
static_assert(offsetof(UWBP_DebugHeroAudioInfo_C, Merge) == 0x0003C8, "Member 'UWBP_DebugHeroAudioInfo_C::Merge' has a wrong offset!");
static_assert(offsetof(UWBP_DebugHeroAudioInfo_C, Obs) == 0x0003D0, "Member 'UWBP_DebugHeroAudioInfo_C::Obs' has a wrong offset!");
static_assert(offsetof(UWBP_DebugHeroAudioInfo_C, Occ) == 0x0003D8, "Member 'UWBP_DebugHeroAudioInfo_C::Occ' has a wrong offset!");
static_assert(offsetof(UWBP_DebugHeroAudioInfo_C, ListnerDisInfo) == 0x0003E0, "Member 'UWBP_DebugHeroAudioInfo_C::ListnerDisInfo' has a wrong offset!");
static_assert(offsetof(UWBP_DebugHeroAudioInfo_C, ObsInfo) == 0x0003F0, "Member 'UWBP_DebugHeroAudioInfo_C::ObsInfo' has a wrong offset!");
static_assert(offsetof(UWBP_DebugHeroAudioInfo_C, OccInfo) == 0x000400, "Member 'UWBP_DebugHeroAudioInfo_C::OccInfo' has a wrong offset!");
static_assert(offsetof(UWBP_DebugHeroAudioInfo_C, AkComponent) == 0x000410, "Member 'UWBP_DebugHeroAudioInfo_C::AkComponent' has a wrong offset!");
static_assert(offsetof(UWBP_DebugHeroAudioInfo_C, MergedRtpcGroup) == 0x000418, "Member 'UWBP_DebugHeroAudioInfo_C::MergedRtpcGroup' has a wrong offset!");

}

