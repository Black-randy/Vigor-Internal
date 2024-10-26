#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AchievementVolumeTrigger

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AchievementVolumeTrigger.BP_AchievementVolumeTrigger_C
// 0x0030 (0x0250 - 0x0220)
class ABP_AchievementVolumeTrigger_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextRenderComponent*                   TextRender;                                        // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                   AchievementId;                                     // 0x0240(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IncreaseProgressBy;                                // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_AchievementVolumeTrigger(int32 EntryPoint);
	void Check_If_Overlapping_Pawn();
	void Trigger_Achievement_Progress();
	void ReceiveBeginPlay();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AchievementVolumeTrigger_C">();
	}
	static class ABP_AchievementVolumeTrigger_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AchievementVolumeTrigger_C>();
	}
};
static_assert(alignof(ABP_AchievementVolumeTrigger_C) == 0x000008, "Wrong alignment on ABP_AchievementVolumeTrigger_C");
static_assert(sizeof(ABP_AchievementVolumeTrigger_C) == 0x000250, "Wrong size on ABP_AchievementVolumeTrigger_C");
static_assert(offsetof(ABP_AchievementVolumeTrigger_C, UberGraphFrame) == 0x000220, "Member 'ABP_AchievementVolumeTrigger_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_AchievementVolumeTrigger_C, TextRender) == 0x000228, "Member 'ABP_AchievementVolumeTrigger_C::TextRender' has a wrong offset!");
static_assert(offsetof(ABP_AchievementVolumeTrigger_C, Sphere) == 0x000230, "Member 'ABP_AchievementVolumeTrigger_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_AchievementVolumeTrigger_C, DefaultSceneRoot) == 0x000238, "Member 'ABP_AchievementVolumeTrigger_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_AchievementVolumeTrigger_C, AchievementId) == 0x000240, "Member 'ABP_AchievementVolumeTrigger_C::AchievementId' has a wrong offset!");
static_assert(offsetof(ABP_AchievementVolumeTrigger_C, IncreaseProgressBy) == 0x000248, "Member 'ABP_AchievementVolumeTrigger_C::IncreaseProgressBy' has a wrong offset!");

}

