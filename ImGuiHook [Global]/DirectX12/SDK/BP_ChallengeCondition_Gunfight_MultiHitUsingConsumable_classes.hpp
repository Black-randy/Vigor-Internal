#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ChallengeCondition_Gunfight_MultiHitUsingConsumable

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_ChallengeCondition_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ChallengeCondition_Gunfight_MultiHitUsingConsumable.BP_ChallengeCondition_Gunfight_MultiHitUsingConsumable_C
// 0x0028 (0x03A8 - 0x0380)
class ABP_ChallengeCondition_Gunfight_MultiHitUsingConsumable_C final : public ABP_ChallengeCondition_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ChallengeCondition_Gunfight_MultiHitUsingConsumable_C; // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         HitsNeeded;                                        // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38C[0x4];                                      // 0x038C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 DamagingItem;                                      // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RequiredConditionCount;                            // 0x0398(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HitTime;                                           // 0x039C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HitCount;                                          // 0x03A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ChallengeCondition_Gunfight_MultiHitUsingConsumable(int32 EntryPoint);
	void PlayerDealtDamageEvent(int32 PlayerId, float Damage, EDamageType DamageType, class UClass* DamagingItem_0);
	void ReceiveBeginPlay();
	void Get_Maximum_Progress(int32* Maximum_Progress);
	void Get_Condition_Text(class FText* Condition_Text);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ChallengeCondition_Gunfight_MultiHitUsingConsumable_C">();
	}
	static class ABP_ChallengeCondition_Gunfight_MultiHitUsingConsumable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ChallengeCondition_Gunfight_MultiHitUsingConsumable_C>();
	}
};
static_assert(alignof(ABP_ChallengeCondition_Gunfight_MultiHitUsingConsumable_C) == 0x000008, "Wrong alignment on ABP_ChallengeCondition_Gunfight_MultiHitUsingConsumable_C");
static_assert(sizeof(ABP_ChallengeCondition_Gunfight_MultiHitUsingConsumable_C) == 0x0003A8, "Wrong size on ABP_ChallengeCondition_Gunfight_MultiHitUsingConsumable_C");
static_assert(offsetof(ABP_ChallengeCondition_Gunfight_MultiHitUsingConsumable_C, UberGraphFrame_BP_ChallengeCondition_Gunfight_MultiHitUsingConsumable_C) == 0x000380, "Member 'ABP_ChallengeCondition_Gunfight_MultiHitUsingConsumable_C::UberGraphFrame_BP_ChallengeCondition_Gunfight_MultiHitUsingConsumable_C' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeCondition_Gunfight_MultiHitUsingConsumable_C, HitsNeeded) == 0x000388, "Member 'ABP_ChallengeCondition_Gunfight_MultiHitUsingConsumable_C::HitsNeeded' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeCondition_Gunfight_MultiHitUsingConsumable_C, DamagingItem) == 0x000390, "Member 'ABP_ChallengeCondition_Gunfight_MultiHitUsingConsumable_C::DamagingItem' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeCondition_Gunfight_MultiHitUsingConsumable_C, RequiredConditionCount) == 0x000398, "Member 'ABP_ChallengeCondition_Gunfight_MultiHitUsingConsumable_C::RequiredConditionCount' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeCondition_Gunfight_MultiHitUsingConsumable_C, HitTime) == 0x00039C, "Member 'ABP_ChallengeCondition_Gunfight_MultiHitUsingConsumable_C::HitTime' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeCondition_Gunfight_MultiHitUsingConsumable_C, HitCount) == 0x0003A0, "Member 'ABP_ChallengeCondition_Gunfight_MultiHitUsingConsumable_C::HitCount' has a wrong offset!");

}
