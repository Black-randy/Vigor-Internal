#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ChallengeCondition_CraftItemOfRarity

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Engine_structs.hpp"
#include "E_ChallengeConditionEvaluationType_structs.hpp"
#include "BP_ChallengeCondition_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ChallengeCondition_CraftItemOfRarity.BP_ChallengeCondition_CraftItemOfRarity_C
// 0x0060 (0x03E0 - 0x0380)
class ABP_ChallengeCondition_CraftItemOfRarity_C final : public ABP_ChallengeCondition_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ChallengeCondition_CraftItemOfRarity_C; // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         AmountOfItemsToCraft;                              // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SpecifiedRarity;                                   // 0x038C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RarityGateMode;                                    // 0x0390(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ChallengeConditionEvaluationType            EvaluationType;                                    // 0x0394(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_395[0x3];                                      // 0x0395(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UClass*>                         ItemsToCraft;                                      // 0x0398(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         ItemClassIndex;                                    // 0x03A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AC[0x4];                                      // 0x03AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FText>                           ItemsNames;                                        // 0x03B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<EItemCategory>                         CategoriesToCraft;                                 // 0x03C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FText>                           Rarities;                                          // 0x03D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_ChallengeCondition_CraftItemOfRarity(int32 EntryPoint);
	void Item_Crafting_Started(class UClass* Item_Type, int32 Amount);
	void ReceiveBeginPlay();
	void Get_Maximum_Progress(int32* Maximum_Progress);
	void Get_Condition_Text(class FText* Condition_Text);
	class FText GetAllItemsNames();
	class FText GetRarity();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ChallengeCondition_CraftItemOfRarity_C">();
	}
	static class ABP_ChallengeCondition_CraftItemOfRarity_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ChallengeCondition_CraftItemOfRarity_C>();
	}
};
static_assert(alignof(ABP_ChallengeCondition_CraftItemOfRarity_C) == 0x000008, "Wrong alignment on ABP_ChallengeCondition_CraftItemOfRarity_C");
static_assert(sizeof(ABP_ChallengeCondition_CraftItemOfRarity_C) == 0x0003E0, "Wrong size on ABP_ChallengeCondition_CraftItemOfRarity_C");
static_assert(offsetof(ABP_ChallengeCondition_CraftItemOfRarity_C, UberGraphFrame_BP_ChallengeCondition_CraftItemOfRarity_C) == 0x000380, "Member 'ABP_ChallengeCondition_CraftItemOfRarity_C::UberGraphFrame_BP_ChallengeCondition_CraftItemOfRarity_C' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeCondition_CraftItemOfRarity_C, AmountOfItemsToCraft) == 0x000388, "Member 'ABP_ChallengeCondition_CraftItemOfRarity_C::AmountOfItemsToCraft' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeCondition_CraftItemOfRarity_C, SpecifiedRarity) == 0x00038C, "Member 'ABP_ChallengeCondition_CraftItemOfRarity_C::SpecifiedRarity' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeCondition_CraftItemOfRarity_C, RarityGateMode) == 0x000390, "Member 'ABP_ChallengeCondition_CraftItemOfRarity_C::RarityGateMode' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeCondition_CraftItemOfRarity_C, EvaluationType) == 0x000394, "Member 'ABP_ChallengeCondition_CraftItemOfRarity_C::EvaluationType' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeCondition_CraftItemOfRarity_C, ItemsToCraft) == 0x000398, "Member 'ABP_ChallengeCondition_CraftItemOfRarity_C::ItemsToCraft' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeCondition_CraftItemOfRarity_C, ItemClassIndex) == 0x0003A8, "Member 'ABP_ChallengeCondition_CraftItemOfRarity_C::ItemClassIndex' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeCondition_CraftItemOfRarity_C, ItemsNames) == 0x0003B0, "Member 'ABP_ChallengeCondition_CraftItemOfRarity_C::ItemsNames' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeCondition_CraftItemOfRarity_C, CategoriesToCraft) == 0x0003C0, "Member 'ABP_ChallengeCondition_CraftItemOfRarity_C::CategoriesToCraft' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeCondition_CraftItemOfRarity_C, Rarities) == 0x0003D0, "Member 'ABP_ChallengeCondition_CraftItemOfRarity_C::Rarities' has a wrong offset!");

}
