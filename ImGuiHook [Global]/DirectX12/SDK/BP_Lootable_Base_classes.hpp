#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Lootable_Base

#include "Basic.hpp"

#include "S_Lootable_ThemeStateModificator_structs.hpp"
#include "Flame_structs.hpp"
#include "Flame_classes.hpp"
#include "F_Lootable_StateDescriptor_structs.hpp"
#include "Engine_structs.hpp"
#include "E_Lootable_State_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Lootable_Base.BP_Lootable_Base_C
// 0x0168 (0x03A8 - 0x0240)
class ABP_Lootable_Base_C : public ALootable
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_CommoditySpawnPoint_GeneralLoot_C*  BP_CommoditySpawnPoint_GeneralLoot;                // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractionItemComponent_C*         BP_InteractionItemComponent;                       // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          DestroyWhenEmpty;                                  // 0x0260(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_261[0x3];                                      // 0x0261(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DrawDistanceMultiplier;                            // 0x0264(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ToggleDrawDistanceDebug;                           // 0x0268(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_269[0x7];                                      // 0x0269(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             OnInteractedSound;                                 // 0x0270(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSpecialLootableObject;                           // 0x0278(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	E_Lootable_State                              State;                                             // 0x0279(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_27A[0x6];                                      // 0x027A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<E_Lootable_State, struct FF_Lootable_StateDescriptor> State_Descriptors;                                 // 0x0280(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<class ABP_Character_C*>                Characters_with_Open_Inventory_UI;                 // 0x02D0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class UUI_ItemTransfer_C*                     Local_Inventory_UI;                                // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             On_State_Changed;                                  // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          SimpleUI;                                          // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F9[0x7];                                      // 0x02F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 Booby_Trap_Owners;                                 // 0x0300(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Max_BoobyTrap_Count;                               // 0x0310(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Interacting_Characters;                            // 0x0314(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Lootable_Locked;                                   // 0x0318(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_319[0x7];                                      // 0x0319(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FS_Lootable_ThemeStateModificator> ThemeModifiactions;                                // 0x0320(0x0010)(Edit, BlueprintVisible)
	struct FTimerHandle                           SetupThemedTimer;                                  // 0x0330(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_GameState_Script_C*                 GameState;                                         // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DifferentMainMesh;                                 // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_341[0x7];                                      // 0x0341(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<E_Lootable_State, E_Lootable_State>      StateToChangeToWhenBoobyTrapped;                   // 0x0348(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnStaticMeshChanged;                               // 0x0398(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void On_State_Changed__DelegateSignature(E_Lootable_State Old_State, E_Lootable_State New_State);
	void OnStaticMeshChanged__DelegateSignature();
	void ExecuteUbergraph_BP_Lootable_Base(int32 EntryPoint);
	void DelayedDestroy(float Time);
	void AddBoobyTrap(class AHumanCharacter* Human);
	void OnNewMeshLoaded();
	void Apply_Mesh_From_State_Descriptor_Event(const struct FF_Lootable_StateDescriptor& StateDescriptor);
	void DelayedLoadTheme();
	void OnThemeLoaded(ESublevelTheme Theme);
	void SetupThemedLootableVisual(ESublevelTheme Theme);
	void HideAndDestroy();
	void BoobyTrap_Owners_Changed(const TArray<int32>& BoobyTrap_Owners);
	void Loot_Accessed();
	void Browsing_Character_Died(class ABP_Character_C* DyingCharacter, float DamageAmount, EDamageType DamageType, class AHumanCharacter* InstigatingCharacter, class UClass* InstigatingItem, const struct FHitResult& HitResult);
	void Close_Local_Inventory_UI();
	void Open_Local_Inventory_UI(class AHumanPlayerController* Browsing_Controller);
	void Close_Inventory(class ABP_Character_C* Browsing_Character);
	void Open_Inventory(class ABP_Character_C* Browsing_Character);
	void Access_Loot(class ABP_Character_C* Looting_character);
	void Server_Interaction_End(class ABP_Character_C* Interacting_Character);
	void Server_Interaction_Start(class ABP_Character_C* Interacting_Character);
	void BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_6_Interaction_End_on_Server__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor);
	void BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_1_Interaction_Start_on_Server__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor);
	void State_Changed(E_Lootable_State Old_State, E_Lootable_State New_State);
	void LootDistrubuted();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void OnRep_State();
	void Set_State(E_Lootable_State New_State, bool Silent_Change, bool* State_Changed);
	void Determine_State_Based_On_Current_Circumstances(E_Lootable_State* Appropriate_State);
	void Is_Simple_UI_Allowed(bool* Simple_UI_Allowed);
	void Perform_UIMinusless_Item_Transfer(class ABP_Character_C* Interacting_Character, bool* Successful);
	void Get_State(E_Lootable_State* State_0);
	void On_Rep_State(bool* New_State_Is_Valid);
	void Debug_State_Print(float Duration);
	void GetDefaultAnimBehavior(EAnimInteractionType* InteractionType);
	void Apply_Materials_from_State_Descriptor(const struct FF_Lootable_StateDescriptor& State_Descriptor);
	void Apply_Settings_from_State_Descriptor(const struct FF_Lootable_StateDescriptor& State_Descriptor);
	void Add_BoobyTrap(int32 Trap_Owner_ID);
	void Remove_BoobyTrap();
	void Get_BoobyTrap_Count(int32* BoobyTrap_count);
	void Remove_All_BoobyTraps();
	void Get_BoobyTrap_Owner(int32 BoobyTrap_Index, int32* Player_ID);
	void Is_Currently_Being_Interacted_With(bool* Is_Interacted_With);

	void GetStateSettings(const E_Lootable_State& State_0, bool* ValidState, struct FF_Lootable_StateDescriptor* Value) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Lootable_Base_C">();
	}
	static class ABP_Lootable_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Lootable_Base_C>();
	}
};
static_assert(alignof(ABP_Lootable_Base_C) == 0x000008, "Wrong alignment on ABP_Lootable_Base_C");
static_assert(sizeof(ABP_Lootable_Base_C) == 0x0003A8, "Wrong size on ABP_Lootable_Base_C");
static_assert(offsetof(ABP_Lootable_Base_C, UberGraphFrame) == 0x000240, "Member 'ABP_Lootable_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Lootable_Base_C, BP_CommoditySpawnPoint_GeneralLoot) == 0x000248, "Member 'ABP_Lootable_Base_C::BP_CommoditySpawnPoint_GeneralLoot' has a wrong offset!");
static_assert(offsetof(ABP_Lootable_Base_C, BP_InteractionItemComponent) == 0x000250, "Member 'ABP_Lootable_Base_C::BP_InteractionItemComponent' has a wrong offset!");
static_assert(offsetof(ABP_Lootable_Base_C, StaticMesh) == 0x000258, "Member 'ABP_Lootable_Base_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_Lootable_Base_C, DestroyWhenEmpty) == 0x000260, "Member 'ABP_Lootable_Base_C::DestroyWhenEmpty' has a wrong offset!");
static_assert(offsetof(ABP_Lootable_Base_C, DrawDistanceMultiplier) == 0x000264, "Member 'ABP_Lootable_Base_C::DrawDistanceMultiplier' has a wrong offset!");
static_assert(offsetof(ABP_Lootable_Base_C, ToggleDrawDistanceDebug) == 0x000268, "Member 'ABP_Lootable_Base_C::ToggleDrawDistanceDebug' has a wrong offset!");
static_assert(offsetof(ABP_Lootable_Base_C, OnInteractedSound) == 0x000270, "Member 'ABP_Lootable_Base_C::OnInteractedSound' has a wrong offset!");
static_assert(offsetof(ABP_Lootable_Base_C, IsSpecialLootableObject) == 0x000278, "Member 'ABP_Lootable_Base_C::IsSpecialLootableObject' has a wrong offset!");
static_assert(offsetof(ABP_Lootable_Base_C, State) == 0x000279, "Member 'ABP_Lootable_Base_C::State' has a wrong offset!");
static_assert(offsetof(ABP_Lootable_Base_C, State_Descriptors) == 0x000280, "Member 'ABP_Lootable_Base_C::State_Descriptors' has a wrong offset!");
static_assert(offsetof(ABP_Lootable_Base_C, Characters_with_Open_Inventory_UI) == 0x0002D0, "Member 'ABP_Lootable_Base_C::Characters_with_Open_Inventory_UI' has a wrong offset!");
static_assert(offsetof(ABP_Lootable_Base_C, Local_Inventory_UI) == 0x0002E0, "Member 'ABP_Lootable_Base_C::Local_Inventory_UI' has a wrong offset!");
static_assert(offsetof(ABP_Lootable_Base_C, On_State_Changed) == 0x0002E8, "Member 'ABP_Lootable_Base_C::On_State_Changed' has a wrong offset!");
static_assert(offsetof(ABP_Lootable_Base_C, SimpleUI) == 0x0002F8, "Member 'ABP_Lootable_Base_C::SimpleUI' has a wrong offset!");
static_assert(offsetof(ABP_Lootable_Base_C, Booby_Trap_Owners) == 0x000300, "Member 'ABP_Lootable_Base_C::Booby_Trap_Owners' has a wrong offset!");
static_assert(offsetof(ABP_Lootable_Base_C, Max_BoobyTrap_Count) == 0x000310, "Member 'ABP_Lootable_Base_C::Max_BoobyTrap_Count' has a wrong offset!");
static_assert(offsetof(ABP_Lootable_Base_C, Interacting_Characters) == 0x000314, "Member 'ABP_Lootable_Base_C::Interacting_Characters' has a wrong offset!");
static_assert(offsetof(ABP_Lootable_Base_C, Lootable_Locked) == 0x000318, "Member 'ABP_Lootable_Base_C::Lootable_Locked' has a wrong offset!");
static_assert(offsetof(ABP_Lootable_Base_C, ThemeModifiactions) == 0x000320, "Member 'ABP_Lootable_Base_C::ThemeModifiactions' has a wrong offset!");
static_assert(offsetof(ABP_Lootable_Base_C, SetupThemedTimer) == 0x000330, "Member 'ABP_Lootable_Base_C::SetupThemedTimer' has a wrong offset!");
static_assert(offsetof(ABP_Lootable_Base_C, GameState) == 0x000338, "Member 'ABP_Lootable_Base_C::GameState' has a wrong offset!");
static_assert(offsetof(ABP_Lootable_Base_C, DifferentMainMesh) == 0x000340, "Member 'ABP_Lootable_Base_C::DifferentMainMesh' has a wrong offset!");
static_assert(offsetof(ABP_Lootable_Base_C, StateToChangeToWhenBoobyTrapped) == 0x000348, "Member 'ABP_Lootable_Base_C::StateToChangeToWhenBoobyTrapped' has a wrong offset!");
static_assert(offsetof(ABP_Lootable_Base_C, OnStaticMeshChanged) == 0x000398, "Member 'ABP_Lootable_Base_C::OnStaticMeshChanged' has a wrong offset!");

}
