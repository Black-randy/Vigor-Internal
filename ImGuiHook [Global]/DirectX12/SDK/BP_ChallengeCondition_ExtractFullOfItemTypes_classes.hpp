#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ChallengeCondition_ExtractFullOfItemTypes

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_ChallengeCondition_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ChallengeCondition_ExtractFullOfItemTypes.BP_ChallengeCondition_ExtractFullOfItemTypes_C
// 0x0018 (0x0398 - 0x0380)
class ABP_ChallengeCondition_ExtractFullOfItemTypes_C final : public ABP_ChallengeCondition_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ChallengeCondition_ExtractFullOfItemTypes_C; // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         RequiredConditionCount;                            // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RequiredInventoryCount;                            // 0x038C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemCategory                                 ItemCategory;                                      // 0x0390(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ChallengeCondition_ExtractFullOfItemTypes(int32 EntryPoint);
	void Encounter_Result_Screen_Entered(const struct FUserMatchResult& Match_Result);
	void ReceiveBeginPlay();
	void Get_Maximum_Progress(int32* Maximum_Progress);
	void Get_Condition_Text(class FText* Condition_Text);
	void Check_for_Backpack_Contents(TArray<struct FItemSlot>& Backpack, bool* FitsTheCondition);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ChallengeCondition_ExtractFullOfItemTypes_C">();
	}
	static class ABP_ChallengeCondition_ExtractFullOfItemTypes_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ChallengeCondition_ExtractFullOfItemTypes_C>();
	}
};
static_assert(alignof(ABP_ChallengeCondition_ExtractFullOfItemTypes_C) == 0x000008, "Wrong alignment on ABP_ChallengeCondition_ExtractFullOfItemTypes_C");
static_assert(sizeof(ABP_ChallengeCondition_ExtractFullOfItemTypes_C) == 0x000398, "Wrong size on ABP_ChallengeCondition_ExtractFullOfItemTypes_C");
static_assert(offsetof(ABP_ChallengeCondition_ExtractFullOfItemTypes_C, UberGraphFrame_BP_ChallengeCondition_ExtractFullOfItemTypes_C) == 0x000380, "Member 'ABP_ChallengeCondition_ExtractFullOfItemTypes_C::UberGraphFrame_BP_ChallengeCondition_ExtractFullOfItemTypes_C' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeCondition_ExtractFullOfItemTypes_C, RequiredConditionCount) == 0x000388, "Member 'ABP_ChallengeCondition_ExtractFullOfItemTypes_C::RequiredConditionCount' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeCondition_ExtractFullOfItemTypes_C, RequiredInventoryCount) == 0x00038C, "Member 'ABP_ChallengeCondition_ExtractFullOfItemTypes_C::RequiredInventoryCount' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeCondition_ExtractFullOfItemTypes_C, ItemCategory) == 0x000390, "Member 'ABP_ChallengeCondition_ExtractFullOfItemTypes_C::ItemCategory' has a wrong offset!");

}

