#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LevelBPFunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "Marvel_structs.hpp"
#include "MarvelLevel_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass LevelBPFunctionLibrary.LevelBPFunctionLibrary_C
// 0x0000 (0x0030 - 0x0030)
class ULevelBPFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void AssaultHint(const class FString& UINAME, const class FString& RedSideHit, const class FString& BlueSideHit, class UObject* __WorldContext);
	static void AssaultObjectiveClose(const class FString& CampName, const class FString& UINAME, class UObject* __WorldContext);
	static void AssaultObjectiveUnlock(const class FString& CampName, const class FString& UINAME, class UObject* __WorldContext);
	static void ChangeControlColor(const class FString& UINAME, EOwnershipType OwnerSide, class UObject* __WorldContext);
	static void GetHeroComponent(class UObject* __WorldContext, class UPyHeroComponent** HeroComponent);
	static void GetMarvelGameState(class UObject* __WorldContext, class AMarvelGameStateBP_C** MarvelGameStateBP);
	static void GetMarvelPlayerStateByUID(int32 UID, class UObject* __WorldContext, class AMarvelPlayerStateBP_C** NewParam);
	static void GetMarvelPlayerStateList(class UObject* __WorldContext, TArray<class AMarvelPlayerStateBP_C*>* MarvelPlayerStateList);
	static void GetModularRuleComponent(class UObject* __WorldContext, class UPyModularRuleComponent** ModularRuleComponent);
	static void GetModularRuleControlComponent(class UObject* __WorldContext, class UPyModularRuleControlComponent** ModularRuleComponent);
	static void GetModuleUIComponent(class UObject* __WorldContext, class UPyModuleUIComponent** ModuleUIComponent);
	static void SetRoute(TArray<double>& RouteLength, class UObject* __WorldContext);
	static void UpdateAssaultBarProcess(double CurrentProgress, TArray<double>& OccupyProgressStage, const class FString& UINAME, class UObject* __WorldContext);
	static void UpdateAssaultPieOccupy(double CurrentProgress, double TotalProgress, const class FString& CampName, const class FString& UINAME, class UObject* __WorldContext);
	static void UpdateVictoryProgressText(double Percent, const class FString& UINAME, class UObject* __WorldContext);
	static void _9a__r(class UMarvelSplineComponent* MarvelSpline, const struct FVector& Color, class UObject* __WorldContext);
	static void _b_Star___(class UObject* __WorldContext);
	static void _b_Star____0(class UObject* __WorldContext);
	static void ____(const class FString& ___, class UObject* __WorldContext);
	static void ____r__BUFF(int32 BuffID, TArray<int32>& ActorList, class UObject* __WorldContext);
	static void ____r_dBUFF(int32 BuffID, TArray<int32>& ActorList, class UObject* __WorldContext);
	static void __sa_s__(class AActor* Trigger, class AActor* Target, class UObject* __WorldContext);
	static void _sK_K_(const class FString& ___, bool _s, class UObject* __WorldContext);
	static void __E_____(class AMarvelBaseCharacter* Character, class UObject* __WorldContext);
	static void _____H______(const class FString& ___, const class FString& ____0, TSoftObjectPtr<class UAkAudioEvent> AudioEvent, class UObject* __WorldContext);
	static void Nine_n____UI(int32 Index_0, const class FString& UI_NAME, class UObject* __WorldContext);
	static void _2___(const class FString& ___, EBattleSide ____0, class UObject* __WorldContext);
	static void ______7__(class UObject* __WorldContext, bool* NewParam);
	static void ___UI(const class FString& UI_NAME, double Duration_Time, int32 Player_UID, class UObject* __WorldContext);
	static void __n_(const class FString& ActorName, bool Hidden, class UObject* __WorldContext);
	static void ______UI(const class FString& Input, const class FString& UI_NAME, double DurationTime, class UObject* __WorldContext);
	static void ____a_UI(double Percent, const class FString& UI_NAME, class UObject* __WorldContext);
	static void ____UI(double Percent, const class FString& UI_NAME, class UObject* __WorldContext);
	static void ______f_(class UObject* __WorldContext, bool* X_);
	static void __2___f_(class UObject* __WorldContext, bool* X_);
	static void Ninen_p_n______(const class FString& ___, class UObject* __WorldContext);
	static void Ninen_p_n_______MineControl(const class FString& ___, class UObject* __WorldContext);
	static void Ninen___p_n_2___(const class FString& ___, class UObject* __WorldContext);
	static void _W____AI__(int32 HeroID, EBattleSide BattleSide, const struct FVector& Position, const struct FRotator& Rotation, const class FString& Name_0, const class FString& TreePath, const struct FVector& RelivePosition, double ReliveTime, bool IsScore, class UObject* __WorldContext, class AActor** Actor);
	static void _W_____Lb(int32 UID, class UObject* __WorldContext);
	static void _d_______CD__(class AMarvelBaseCharacter* Character, class UObject* __WorldContext);
	static void ___6__(const class FString& ___, class UObject* __WorldContext);
	static void ___f__(class UObject* __WorldContext);
	static void ___2__(const class FString& ___, class UObject* __WorldContext);
	static void __h___(class UObject* __WorldContext, TArray<int32>* OutputList);
	static void __sa__hiY__(const class FString& __h_, class UObject* __WorldContext, double* IY__);
	static void __sa__h____(const class FString& __h_, class UObject* __WorldContext, double* _____0);
	static void ______(class UObject* __WorldContext, int32* Param______0);
	static void _____p(const class FString& ___, EBattleSide Five_, class UObject* __WorldContext, int32* _p);
	static void _________0(const class FString& ___, class UObject* __WorldContext, double* __);
	static void ______5_(const class FString& ___, class UObject* __WorldContext, EOwnershipType* SM5_);
	static void ________(const class FString& ___, class UObject* __WorldContext, double* __);
	static void _____1(const class FString& ___, class UObject* __WorldContext, class AActor** Result);
	static void __SM8_6_(class UObject* __WorldContext, EMatchState* MatchState);
	static void ____X_____(EPlayerLivingState PlayerLivingState, class UObject* __WorldContext, TArray<int32>* PlayerUIDList);
	static void ____5___(EBattleSide BattleSide, class UObject* __WorldContext, TArray<int32>* PlayerUIDList);
	static void ___f(class UObject* __WorldContext, class APyPayload** Payload);
	static void ___2_(const class FString& ___, class UObject* __WorldContext, class APyObjective** Objective);
	static void ___2___(const class FString& ___, class UObject* __WorldContext, double* __);
	static void ____X___(int32 UID, class UObject* __WorldContext, EPlayerLivingState* PlayerLivingState);
	static void _______o(int32 UID, class UObject* __WorldContext, int32* ___p, int32* __, int32* ___p_0, int32* ___p_1, double* _fh_Minus_, double* ___, double* ____0, double* ____1);
	static void __________0(int32 UID, class UObject* __WorldContext, int32* HeroID);
	static void ____5_(int32 UID, class UObject* __WorldContext, EBattleSide* BattleSide);
	static void ____Actor_piY__(const class FString& ___, class UObject* __WorldContext, double* __);
	static void _________(class UClass* Class_0, class UObject* __WorldContext, class UActorComponent** Component);
	static void _____0(const class FString& ___, class UObject* __WorldContext, class APyPayloadTrace** PayloadTrace);
	static void ___w___(class UObject* __WorldContext, EOwnershipType* OwnerSide);
	static void __________(int32 HeroID, class UObject* __WorldContext, TArray<int64>* PlayerUIDList);
	static void _____(const class FString& ___, class UObject* __WorldContext);
	static void _____1_(const class FString& ___, class UObject* __WorldContext);
	static void _____idle__(const class FString& ___, class UObject* __WorldContext);
	static void __b___(const class FString& ___, class UObject* __WorldContext);
	static void ___Actor___9n__(const class FString& ___, double _____0, double _____1, double ______, double __O_, bool ___Mn_l, class UObject* __WorldContext);
	static void __Actor___(const class FString& ___, double _____0, double _____1, double ______, double _l__, bool ___Mn_l, class UObject* __WorldContext);
	static void ___Actor_T_9n__(TArray<struct FGroupMoveActorsContainner>& ___, class UObject* __WorldContext);
	static void _n____(EOvertimeState EOvertimeState, class UObject* __WorldContext);
	static void _n_______0(const class FString& ___, double __, class UObject* __WorldContext);
	static void _n_2___(const class FString& ___, double __, class UObject* __WorldContext);
	static void _n_w__(double __, class UObject* __WorldContext);
	static void _n______(const class FString& ____, const class FString& _____0, class UObject* __WorldContext);
	static void _n_____(const TMap<class FString, bool>& BirthbaseState, class UObject* __WorldContext);
	static void _w____(class UObject* __WorldContext);
	static void _wSM___(const class FString& ___, class UObject* __WorldContext, class FString* ____0);
	static void _wSM__(class UObject* __WorldContext, double* _______tp_);
	static void _w9n___pM_(class UObject* __WorldContext);
	static void _w__(const class FString& ___, EBattleSide ____0, class UObject* __WorldContext);
	static void ___ID_______WU_(const class FString& ___, int32 __ID1, int32 __ID2, int32 __ID3, class UObject* __WorldContext);
	static void ______0(EBattleSide Five_, class UObject* __WorldContext);
	static void _____p_0(const class FString& ___, double P___, double P____0, double _____1_, double _____2_, double _____3_, double _____4_, double _____5_, double _____6_, class UObject* __WorldContext);
	static void ___2__p(const class FString& ___, double P___, double P____0, double ___1_, double ___2_, double ___3_, double ___4_, double ___5_, double ___6_, class UObject* __WorldContext);
	static void ___w_p(const class FString& ___, double _____0, double M___, double _____1, int32 F_BuffID, double ___1___, double ___2____0, double ___3___, double ___4___, double ___5___, double ___6___, class UObject* __WorldContext);
	static void __UI(const class FString& UI_NAME, int32 Player_UID, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LevelBPFunctionLibrary_C">();
	}
	static class ULevelBPFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULevelBPFunctionLibrary_C>();
	}
};
static_assert(alignof(ULevelBPFunctionLibrary_C) == 0x000008, "Wrong alignment on ULevelBPFunctionLibrary_C");
static_assert(sizeof(ULevelBPFunctionLibrary_C) == 0x000030, "Wrong size on ULevelBPFunctionLibrary_C");

}

