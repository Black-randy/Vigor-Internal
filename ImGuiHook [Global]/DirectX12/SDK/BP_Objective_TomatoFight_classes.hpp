#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Objective_TomatoFight

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "EFightVariant_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Objective_TomatoFight.BP_Objective_TomatoFight_C
// 0x00C8 (0x02E8 - 0x0220)
class ABP_Objective_TomatoFight_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   PentagramPlane;                                    // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URectLightComponent*                    RectLight;                                         // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Knife;                                             // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Skull;                                             // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Candle1;                                           // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Candle3;                                           // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Skull_1;                                           // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Candle2;                                           // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Base;                                              // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   FlamePlane3;                                       // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight4;                                       // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight3;                                       // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   FlamePlane2;                                       // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   FlamePlane1;                                       // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight2;                                       // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   FlagStand;                                         // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Hat;                                               // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Head;                                              // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Body;                                              // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Legs;                                              // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractionItemComponent_C*         BP_InteractionItemComponent;                       // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Show_Interaction_Message;                          // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TrackInteractionProgress;                          // 0x02E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Do_Track_Progress;                                 // 0x02E2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E3[0x1];                                      // 0x02E3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         InteractionEndTime;                                // 0x02E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Objective_TomatoFight(int32 EntryPoint);
	void UpdateInteractionVisuals(float InteractionNormalizedProgress);
	void ReplicateInteractionProgress(bool DoTrackProgress, float StartTime);
	void BndEvt__BP_Objective_TomatoFight_BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_PreInteraction_End_on_Server__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor, bool Canceled);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void OnFightVariantSet(EFightVariant NewVariant);
	void SetVariantSpecificVisuals(EFightVariant Variant);
	void Play_Sound_On_Client(bool Attacker_Team);
	void Enable_Interaction_Message();
	void BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_2_PreInteraction_Start_on_Server__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor);
	void BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_1_Interaction_End_on_Server__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor);
	void Disable_Interaction();
	void BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction_Start_on_Server__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor);
	void Show_Message_On_Interaction(class UObject* Object);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Objective_TomatoFight_C">();
	}
	static class ABP_Objective_TomatoFight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Objective_TomatoFight_C>();
	}
};
static_assert(alignof(ABP_Objective_TomatoFight_C) == 0x000008, "Wrong alignment on ABP_Objective_TomatoFight_C");
static_assert(sizeof(ABP_Objective_TomatoFight_C) == 0x0002E8, "Wrong size on ABP_Objective_TomatoFight_C");
static_assert(offsetof(ABP_Objective_TomatoFight_C, UberGraphFrame) == 0x000220, "Member 'ABP_Objective_TomatoFight_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Objective_TomatoFight_C, PentagramPlane) == 0x000228, "Member 'ABP_Objective_TomatoFight_C::PentagramPlane' has a wrong offset!");
static_assert(offsetof(ABP_Objective_TomatoFight_C, RectLight) == 0x000230, "Member 'ABP_Objective_TomatoFight_C::RectLight' has a wrong offset!");
static_assert(offsetof(ABP_Objective_TomatoFight_C, Knife) == 0x000238, "Member 'ABP_Objective_TomatoFight_C::Knife' has a wrong offset!");
static_assert(offsetof(ABP_Objective_TomatoFight_C, Skull) == 0x000240, "Member 'ABP_Objective_TomatoFight_C::Skull' has a wrong offset!");
static_assert(offsetof(ABP_Objective_TomatoFight_C, Candle1) == 0x000248, "Member 'ABP_Objective_TomatoFight_C::Candle1' has a wrong offset!");
static_assert(offsetof(ABP_Objective_TomatoFight_C, Candle3) == 0x000250, "Member 'ABP_Objective_TomatoFight_C::Candle3' has a wrong offset!");
static_assert(offsetof(ABP_Objective_TomatoFight_C, Skull_1) == 0x000258, "Member 'ABP_Objective_TomatoFight_C::Skull_1' has a wrong offset!");
static_assert(offsetof(ABP_Objective_TomatoFight_C, Candle2) == 0x000260, "Member 'ABP_Objective_TomatoFight_C::Candle2' has a wrong offset!");
static_assert(offsetof(ABP_Objective_TomatoFight_C, Base) == 0x000268, "Member 'ABP_Objective_TomatoFight_C::Base' has a wrong offset!");
static_assert(offsetof(ABP_Objective_TomatoFight_C, FlamePlane3) == 0x000270, "Member 'ABP_Objective_TomatoFight_C::FlamePlane3' has a wrong offset!");
static_assert(offsetof(ABP_Objective_TomatoFight_C, PointLight4) == 0x000278, "Member 'ABP_Objective_TomatoFight_C::PointLight4' has a wrong offset!");
static_assert(offsetof(ABP_Objective_TomatoFight_C, PointLight3) == 0x000280, "Member 'ABP_Objective_TomatoFight_C::PointLight3' has a wrong offset!");
static_assert(offsetof(ABP_Objective_TomatoFight_C, FlamePlane2) == 0x000288, "Member 'ABP_Objective_TomatoFight_C::FlamePlane2' has a wrong offset!");
static_assert(offsetof(ABP_Objective_TomatoFight_C, FlamePlane1) == 0x000290, "Member 'ABP_Objective_TomatoFight_C::FlamePlane1' has a wrong offset!");
static_assert(offsetof(ABP_Objective_TomatoFight_C, PointLight2) == 0x000298, "Member 'ABP_Objective_TomatoFight_C::PointLight2' has a wrong offset!");
static_assert(offsetof(ABP_Objective_TomatoFight_C, FlagStand) == 0x0002A0, "Member 'ABP_Objective_TomatoFight_C::FlagStand' has a wrong offset!");
static_assert(offsetof(ABP_Objective_TomatoFight_C, Hat) == 0x0002A8, "Member 'ABP_Objective_TomatoFight_C::Hat' has a wrong offset!");
static_assert(offsetof(ABP_Objective_TomatoFight_C, Head) == 0x0002B0, "Member 'ABP_Objective_TomatoFight_C::Head' has a wrong offset!");
static_assert(offsetof(ABP_Objective_TomatoFight_C, Body) == 0x0002B8, "Member 'ABP_Objective_TomatoFight_C::Body' has a wrong offset!");
static_assert(offsetof(ABP_Objective_TomatoFight_C, Sphere) == 0x0002C0, "Member 'ABP_Objective_TomatoFight_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_Objective_TomatoFight_C, Legs) == 0x0002C8, "Member 'ABP_Objective_TomatoFight_C::Legs' has a wrong offset!");
static_assert(offsetof(ABP_Objective_TomatoFight_C, Root) == 0x0002D0, "Member 'ABP_Objective_TomatoFight_C::Root' has a wrong offset!");
static_assert(offsetof(ABP_Objective_TomatoFight_C, BP_InteractionItemComponent) == 0x0002D8, "Member 'ABP_Objective_TomatoFight_C::BP_InteractionItemComponent' has a wrong offset!");
static_assert(offsetof(ABP_Objective_TomatoFight_C, Show_Interaction_Message) == 0x0002E0, "Member 'ABP_Objective_TomatoFight_C::Show_Interaction_Message' has a wrong offset!");
static_assert(offsetof(ABP_Objective_TomatoFight_C, TrackInteractionProgress) == 0x0002E1, "Member 'ABP_Objective_TomatoFight_C::TrackInteractionProgress' has a wrong offset!");
static_assert(offsetof(ABP_Objective_TomatoFight_C, Do_Track_Progress) == 0x0002E2, "Member 'ABP_Objective_TomatoFight_C::Do_Track_Progress' has a wrong offset!");
static_assert(offsetof(ABP_Objective_TomatoFight_C, InteractionEndTime) == 0x0002E4, "Member 'ABP_Objective_TomatoFight_C::InteractionEndTime' has a wrong offset!");

}
