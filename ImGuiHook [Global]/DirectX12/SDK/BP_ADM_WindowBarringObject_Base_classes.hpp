#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ADM_WindowBarringObject_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ADM_WindowBarringObject_Base.BP_ADM_WindowBarringObject_Base_C
// 0x0030 (0x0250 - 0x0220)
class ABP_ADM_WindowBarringObject_Base_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_InteractionItemComponent_C*         BP_InteractionItemComponent;                       // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UObstacleComponent*                     Obstacle;                                          // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GMComponent_ADM_Event_BarredHouse_C* Owning_GMComponent;                                // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Activate_Obstacle_when_Barricades_Are_Removed;     // 0x0248(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_ADM_WindowBarringObject_Base(int32 EntryPoint);
	void Set_Obstacle_Edge_Enabled(const bool bEnabled);
	void ReceiveBeginPlay();
	void Destroy_Actor_Component(class UActorComponent* Component_to_Destroy);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ADM_WindowBarringObject_Base_C">();
	}
	static class ABP_ADM_WindowBarringObject_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ADM_WindowBarringObject_Base_C>();
	}
};
static_assert(alignof(ABP_ADM_WindowBarringObject_Base_C) == 0x000008, "Wrong alignment on ABP_ADM_WindowBarringObject_Base_C");
static_assert(sizeof(ABP_ADM_WindowBarringObject_Base_C) == 0x000250, "Wrong size on ABP_ADM_WindowBarringObject_Base_C");
static_assert(offsetof(ABP_ADM_WindowBarringObject_Base_C, UberGraphFrame) == 0x000220, "Member 'ABP_ADM_WindowBarringObject_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ADM_WindowBarringObject_Base_C, BP_InteractionItemComponent) == 0x000228, "Member 'ABP_ADM_WindowBarringObject_Base_C::BP_InteractionItemComponent' has a wrong offset!");
static_assert(offsetof(ABP_ADM_WindowBarringObject_Base_C, Obstacle) == 0x000230, "Member 'ABP_ADM_WindowBarringObject_Base_C::Obstacle' has a wrong offset!");
static_assert(offsetof(ABP_ADM_WindowBarringObject_Base_C, DefaultSceneRoot) == 0x000238, "Member 'ABP_ADM_WindowBarringObject_Base_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_ADM_WindowBarringObject_Base_C, Owning_GMComponent) == 0x000240, "Member 'ABP_ADM_WindowBarringObject_Base_C::Owning_GMComponent' has a wrong offset!");
static_assert(offsetof(ABP_ADM_WindowBarringObject_Base_C, Activate_Obstacle_when_Barricades_Are_Removed) == 0x000248, "Member 'ABP_ADM_WindowBarringObject_Base_C::Activate_Obstacle_when_Barricades_Are_Removed' has a wrong offset!");

}
