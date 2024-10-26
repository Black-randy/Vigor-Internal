#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ADM_BarredVault

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_ADM_BarredVault_State_structs.hpp"
#include "BP_Lootable_Base_classes.hpp"
#include "E_Lootable_State_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ADM_BarredVault.BP_ADM_BarredVault_C
// 0x0070 (0x0418 - 0x03A8)
class ABP_ADM_BarredVault_C final : public ABP_Lootable_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ADM_BarredVault_C;               // 0x03A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_Challenge_GrenadeHitComponent_C*    BP_Challenge_GrenadeHitComponent;                  // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_MapMarkerComponent_C*               BP_MapMarkerComponent;                             // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   OverlapVolumeEncounterHint;                        // 0x03C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Sound;                                             // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SafeMesh;                                          // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GMComponent_ADM_Event_BarredHouse_C* Owning_GMComponent;                                // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ADM_BarredVault_State                       Status;                                            // 0x03E0(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E1[0x7];                                      // 0x03E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_ADM_DoorBarringObject_Base_C*> Door_Barring_Objects;                              // 0x03E8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_ADM_WindowBarringObject_Base_C*> Window_Barring_Objects;                            // 0x03F8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                         PreviousClickRingAngle;                            // 0x0408(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PreviousTickRingAngle;                             // 0x040C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldPlayUnlockingSound;                          // 0x0410(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_ADM_BarredVault(int32 EntryPoint);
	void PlayLootedAnimation();
	void PlayUnlockedAnimation();
	void Server_Interaction_Start(class ABP_Character_C* Interacting_Character);
	void State_Changed(E_Lootable_State Old_State, E_Lootable_State New_State);
	void BndEvt__OverlapVolumeEncounterHint_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveTick(float DeltaSeconds);
	void Loot();
	void Unlock();
	void Start_Unlocking();
	void UserConstructionScript();
	void Initialize_Doors_and_Windows(class ABP_ADM_BarredVaultLocation_C* Vault_Location);
	void PlayUnlockingSound(float DeltaTime);
	void Determine_State_Based_On_Current_Circumstances(E_Lootable_State* Appropriate_State);
	void Set_Status(E_ADM_BarredVault_State Status_0);
	void GetValidDoor(class ADoor* Door, class ADoor** ValidDoor);
	void GetValidWindow(class AWindow* Window, class AWindow** ValidWindow);
	void On_Rep_State(bool* New_State_Is_Valid);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ADM_BarredVault_C">();
	}
	static class ABP_ADM_BarredVault_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ADM_BarredVault_C>();
	}
};
static_assert(alignof(ABP_ADM_BarredVault_C) == 0x000008, "Wrong alignment on ABP_ADM_BarredVault_C");
static_assert(sizeof(ABP_ADM_BarredVault_C) == 0x000418, "Wrong size on ABP_ADM_BarredVault_C");
static_assert(offsetof(ABP_ADM_BarredVault_C, UberGraphFrame_BP_ADM_BarredVault_C) == 0x0003A8, "Member 'ABP_ADM_BarredVault_C::UberGraphFrame_BP_ADM_BarredVault_C' has a wrong offset!");
static_assert(offsetof(ABP_ADM_BarredVault_C, BP_Challenge_GrenadeHitComponent) == 0x0003B0, "Member 'ABP_ADM_BarredVault_C::BP_Challenge_GrenadeHitComponent' has a wrong offset!");
static_assert(offsetof(ABP_ADM_BarredVault_C, BP_MapMarkerComponent) == 0x0003B8, "Member 'ABP_ADM_BarredVault_C::BP_MapMarkerComponent' has a wrong offset!");
static_assert(offsetof(ABP_ADM_BarredVault_C, OverlapVolumeEncounterHint) == 0x0003C0, "Member 'ABP_ADM_BarredVault_C::OverlapVolumeEncounterHint' has a wrong offset!");
static_assert(offsetof(ABP_ADM_BarredVault_C, Sound) == 0x0003C8, "Member 'ABP_ADM_BarredVault_C::Sound' has a wrong offset!");
static_assert(offsetof(ABP_ADM_BarredVault_C, SafeMesh) == 0x0003D0, "Member 'ABP_ADM_BarredVault_C::SafeMesh' has a wrong offset!");
static_assert(offsetof(ABP_ADM_BarredVault_C, Owning_GMComponent) == 0x0003D8, "Member 'ABP_ADM_BarredVault_C::Owning_GMComponent' has a wrong offset!");
static_assert(offsetof(ABP_ADM_BarredVault_C, Status) == 0x0003E0, "Member 'ABP_ADM_BarredVault_C::Status' has a wrong offset!");
static_assert(offsetof(ABP_ADM_BarredVault_C, Door_Barring_Objects) == 0x0003E8, "Member 'ABP_ADM_BarredVault_C::Door_Barring_Objects' has a wrong offset!");
static_assert(offsetof(ABP_ADM_BarredVault_C, Window_Barring_Objects) == 0x0003F8, "Member 'ABP_ADM_BarredVault_C::Window_Barring_Objects' has a wrong offset!");
static_assert(offsetof(ABP_ADM_BarredVault_C, PreviousClickRingAngle) == 0x000408, "Member 'ABP_ADM_BarredVault_C::PreviousClickRingAngle' has a wrong offset!");
static_assert(offsetof(ABP_ADM_BarredVault_C, PreviousTickRingAngle) == 0x00040C, "Member 'ABP_ADM_BarredVault_C::PreviousTickRingAngle' has a wrong offset!");
static_assert(offsetof(ABP_ADM_BarredVault_C, ShouldPlayUnlockingSound) == 0x000410, "Member 'ABP_ADM_BarredVault_C::ShouldPlayUnlockingSound' has a wrong offset!");

}

