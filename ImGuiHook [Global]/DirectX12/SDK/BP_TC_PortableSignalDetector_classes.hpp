#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TC_PortableSignalDetector

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_AssortedConsumable_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TC_PortableSignalDetector.BP_TC_PortableSignalDetector_C
// 0x0060 (0x04C0 - 0x0460)
class ABP_TC_PortableSignalDetector_C final : public ABP_AssortedConsumable_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_TC_PortableSignalDetector_C;     // 0x0460(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x0468(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Closest_actor_to_mark;                             // 0x0470(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Marker_Tag;                                        // 0x0478(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Reveal_duration;                                   // 0x0480(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_484[0x4];                                      // 0x0484(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_TC_Jammer_Object_C*>         Jammers;                                           // 0x0488(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                         Valid_targets;                                     // 0x0498(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class FName>                           Marker_Transmitter_Tag;                            // 0x04A8(0x0010)(Edit, BlueprintVisible)
	int32                                         Transmitter_tag_count;                             // 0x04B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_TC_PortableSignalDetector(int32 EntryPoint);
	void Show_you_are_jammed_message();
	void Send_signal_detection_blocked_by_jammer(class ABP_Character_C* Character_that_blocked_signal_detection);
	void Send_transmitter_detected(class ABP_PlayerController_Script_C* Target);
	void BndEvt__Usable_K2Node_ComponentBoundEvent_0_Used__DelegateSignature(class AItem* Item, class AHumanCharacter* ItemOwner, class AActor* TargetActor);
	void Portable_signal_detector_used();
	void Mark_character_and_notify_its_player(class AActor* Actor_to_mark);
	void Try_to_locate_target();
	void Remove_transmitter_marker();
	void Mark_transmitter(class AActor* Actor_to_mark, bool Is_own_transmitter);
	void Show_no_signals_found_message();
	void Play_activate_sound();
	void Remove_marker_from_character();
	void Gather_actor_locations(class UClass* ActorClass);
	void Gather_all_valid_transmitters(TArray<class AActor*>* Valid_transmitters);
	void Gather_all_valid_characters(TArray<class AActor*>* Valid_characters);
	void Notify_marked_player(class AController* Controller);
	void Is_character_in_same_team(class ABP_Character_C* Character_to_check, bool* Is_in_same_team);
	void Is_Location_Jammed(const struct FVector& Location, bool* Is_Jammed);
	void Find_Jammers();
	void Find_closest_target(TArray<class AActor*>& Valid_trgs, class AActor** Closest_target);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TC_PortableSignalDetector_C">();
	}
	static class ABP_TC_PortableSignalDetector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TC_PortableSignalDetector_C>();
	}
};
static_assert(alignof(ABP_TC_PortableSignalDetector_C) == 0x000008, "Wrong alignment on ABP_TC_PortableSignalDetector_C");
static_assert(sizeof(ABP_TC_PortableSignalDetector_C) == 0x0004C0, "Wrong size on ABP_TC_PortableSignalDetector_C");
static_assert(offsetof(ABP_TC_PortableSignalDetector_C, UberGraphFrame_BP_TC_PortableSignalDetector_C) == 0x000460, "Member 'ABP_TC_PortableSignalDetector_C::UberGraphFrame_BP_TC_PortableSignalDetector_C' has a wrong offset!");
static_assert(offsetof(ABP_TC_PortableSignalDetector_C, SkeletalMesh) == 0x000468, "Member 'ABP_TC_PortableSignalDetector_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(ABP_TC_PortableSignalDetector_C, Closest_actor_to_mark) == 0x000470, "Member 'ABP_TC_PortableSignalDetector_C::Closest_actor_to_mark' has a wrong offset!");
static_assert(offsetof(ABP_TC_PortableSignalDetector_C, Marker_Tag) == 0x000478, "Member 'ABP_TC_PortableSignalDetector_C::Marker_Tag' has a wrong offset!");
static_assert(offsetof(ABP_TC_PortableSignalDetector_C, Reveal_duration) == 0x000480, "Member 'ABP_TC_PortableSignalDetector_C::Reveal_duration' has a wrong offset!");
static_assert(offsetof(ABP_TC_PortableSignalDetector_C, Jammers) == 0x000488, "Member 'ABP_TC_PortableSignalDetector_C::Jammers' has a wrong offset!");
static_assert(offsetof(ABP_TC_PortableSignalDetector_C, Valid_targets) == 0x000498, "Member 'ABP_TC_PortableSignalDetector_C::Valid_targets' has a wrong offset!");
static_assert(offsetof(ABP_TC_PortableSignalDetector_C, Marker_Transmitter_Tag) == 0x0004A8, "Member 'ABP_TC_PortableSignalDetector_C::Marker_Transmitter_Tag' has a wrong offset!");
static_assert(offsetof(ABP_TC_PortableSignalDetector_C, Transmitter_tag_count) == 0x0004B8, "Member 'ABP_TC_PortableSignalDetector_C::Transmitter_tag_count' has a wrong offset!");

}
