#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_ChallengeCondition_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny.BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C
// 0x0010 (0x0390 - 0x0380)
class ABP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C final : public ABP_ChallengeCondition_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C; // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         NeededDamage;                                      // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PlayerDamagedThisRound;                            // 0x038C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny(int32 EntryPoint);
	void UnbindEverything();
	void PlayerReceivedDamage(int32 Userid, float Damage, EDamageType DamageType);
	void PlayerDealtDamageEvent(int32 PlayerId, float Damage, EDamageType DamageType, class UClass* DamagingItem);
	void RoundEndedEvent();
	void ReceiveBeginPlay();
	void Get_Maximum_Progress(int32* Maximum_Progress);
	void Get_Condition_Text(class FText* Condition_Text);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C">();
	}
	static class ABP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C>();
	}
};
static_assert(alignof(ABP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C) == 0x000008, "Wrong alignment on ABP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C");
static_assert(sizeof(ABP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C) == 0x000390, "Wrong size on ABP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C");
static_assert(offsetof(ABP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C, UberGraphFrame_BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C) == 0x000380, "Member 'ABP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C::UberGraphFrame_BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C, NeededDamage) == 0x000388, "Member 'ABP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C::NeededDamage' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C, PlayerDamagedThisRound) == 0x00038C, "Member 'ABP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C::PlayerDamagedThisRound' has a wrong offset!");

}
