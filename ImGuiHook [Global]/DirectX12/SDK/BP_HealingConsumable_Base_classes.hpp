#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HealingConsumable_Base

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HealingConsumable_Base.BP_HealingConsumable_Base_C
// 0x0080 (0x0498 - 0x0418)
class ABP_HealingConsumable_Base_C : public AHealingConsumable
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0418(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_ConsumableBasis_C*                  BP_ConsumableBasis;                                // 0x0420(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_CommonConsumableHUD_C*              BP_CommonConsumableHUD;                            // 0x0428(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0430(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_HealingComponent_C*                 Target_Healing_Component;                          // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 PreviousTargetUnderCursor;                         // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UAnimSequence>           CustomGrip_AnimHandPose;                           // 0x0448(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FName>                           StaminaEffectsToRemove;                            // 0x0470(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                         ConsumableUI_ToHide;                               // 0x0480(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	EHealthType                                   HealthType;                                        // 0x0490(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_HealingConsumable_Base(int32 EntryPoint);
	void ChangeTargetForHealing(class UBP_HealingComponent_C* NewHealingComp);
	void TryChangeTarget();
	void OnUngotFromHandsImplementable(class AHumanCharacter* ParentCharacter);
	void OnGotIntoHandsImplementable(class AHumanCharacter* ParentCharacter);
	void ChangeTargetSERVER(class UBP_HealingComponent_C* NewHealingComponent);
	void BndEvt__Usable_K2Node_ComponentBoundEvent_0_Used__DelegateSignature(class AItem* Item, class AHumanCharacter* ItemOwner, class AActor* TargetActor);
	void PlayUsageAnimation();
	void ExpectedHealing(float TimerDelay, class UHealthComponent* HealthComponent, float DeltaTime, float* ExpHeal);
	void ApplyHealToComponent(class UBP_HealingComponent_C* HealingComponent);
	void GetCustomGripAnimation(class UAnimSequence** HandAnim, bool* Valid);

	bool CanBeUsedImpl() const;
	bool CanBeUsedOnTarget() const;
	bool Can_Heal_Target_Component(class UBP_HealingComponent_C* HealingComponent) const;
	bool CanBeUsedOnCertainTarget(const class AActor* Target) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HealingConsumable_Base_C">();
	}
	static class ABP_HealingConsumable_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_HealingConsumable_Base_C>();
	}
};
static_assert(alignof(ABP_HealingConsumable_Base_C) == 0x000008, "Wrong alignment on ABP_HealingConsumable_Base_C");
static_assert(sizeof(ABP_HealingConsumable_Base_C) == 0x000498, "Wrong size on ABP_HealingConsumable_Base_C");
static_assert(offsetof(ABP_HealingConsumable_Base_C, UberGraphFrame) == 0x000418, "Member 'ABP_HealingConsumable_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_HealingConsumable_Base_C, BP_ConsumableBasis) == 0x000420, "Member 'ABP_HealingConsumable_Base_C::BP_ConsumableBasis' has a wrong offset!");
static_assert(offsetof(ABP_HealingConsumable_Base_C, BP_CommonConsumableHUD) == 0x000428, "Member 'ABP_HealingConsumable_Base_C::BP_CommonConsumableHUD' has a wrong offset!");
static_assert(offsetof(ABP_HealingConsumable_Base_C, DefaultSceneRoot) == 0x000430, "Member 'ABP_HealingConsumable_Base_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_HealingConsumable_Base_C, Target_Healing_Component) == 0x000438, "Member 'ABP_HealingConsumable_Base_C::Target_Healing_Component' has a wrong offset!");
static_assert(offsetof(ABP_HealingConsumable_Base_C, PreviousTargetUnderCursor) == 0x000440, "Member 'ABP_HealingConsumable_Base_C::PreviousTargetUnderCursor' has a wrong offset!");
static_assert(offsetof(ABP_HealingConsumable_Base_C, CustomGrip_AnimHandPose) == 0x000448, "Member 'ABP_HealingConsumable_Base_C::CustomGrip_AnimHandPose' has a wrong offset!");
static_assert(offsetof(ABP_HealingConsumable_Base_C, StaminaEffectsToRemove) == 0x000470, "Member 'ABP_HealingConsumable_Base_C::StaminaEffectsToRemove' has a wrong offset!");
static_assert(offsetof(ABP_HealingConsumable_Base_C, ConsumableUI_ToHide) == 0x000480, "Member 'ABP_HealingConsumable_Base_C::ConsumableUI_ToHide' has a wrong offset!");
static_assert(offsetof(ABP_HealingConsumable_Base_C, HealthType) == 0x000490, "Member 'ABP_HealingConsumable_Base_C::HealthType' has a wrong offset!");

}

