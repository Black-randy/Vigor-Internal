#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TVTDeathmatch_Box

#include "Basic.hpp"

#include "BP_TVTDeathmatch_Box_classes.hpp"
#include "BP_TVTDeathmatch_Box_parameters.hpp"


namespace SDK
{

// Function BP_TVTDeathmatch_Box.BP_TVTDeathmatch_Box_C.ExecuteUbergraph_BP_TVTDeathmatch_Box
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TVTDeathmatch_Box_C::ExecuteUbergraph_BP_TVTDeathmatch_Box(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TVTDeathmatch_Box_C", "ExecuteUbergraph_BP_TVTDeathmatch_Box");

	Params::BP_TVTDeathmatch_Box_C_ExecuteUbergraph_BP_TVTDeathmatch_Box Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TVTDeathmatch_Box.BP_TVTDeathmatch_Box_C.BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_2_Interaction Start on Server__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UInteractionItemComponent*        Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Interacting_Actor                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TVTDeathmatch_Box_C::BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_2_Interaction_Start_on_Server__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TVTDeathmatch_Box_C", "BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_2_Interaction Start on Server__DelegateSignature");

	Params::BP_TVTDeathmatch_Box_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_2_Interaction_Start_on_Server__DelegateSignature Parms{};

	Parms.Sender = Sender;
	Parms.Interacting_Actor = Interacting_Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TVTDeathmatch_Box.BP_TVTDeathmatch_Box_C.Swap For Weapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                          Swapped_Weapon                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_TVTDeathmatch_C*Player_Controller                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TVTDeathmatch_Box_C::Swap_For_Weapon(class AWeapon* Swapped_Weapon, class ABP_PlayerController_TVTDeathmatch_C* Player_Controller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TVTDeathmatch_Box_C", "Swap For Weapon");

	Params::BP_TVTDeathmatch_Box_C_Swap_For_Weapon Parms{};

	Parms.Swapped_Weapon = Swapped_Weapon;
	Parms.Player_Controller = Player_Controller;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TVTDeathmatch_Box.BP_TVTDeathmatch_Box_C.Initialize Box from spawn point
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECloudMatchLootboxType                  Box_Type_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           Weapon_To_Store_0                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Ammo_in_Magazine_0                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class UClass*, int32>              Backpack_Items_To_Store_0                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_TVTDeathmatch_Box_C::Initialize_Box_from_spawn_point(ECloudMatchLootboxType Box_Type_0, const class UClass* Weapon_To_Store_0, int32 Ammo_in_Magazine_0, const TMap<class UClass*, int32>& Backpack_Items_To_Store_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TVTDeathmatch_Box_C", "Initialize Box from spawn point");

	Params::BP_TVTDeathmatch_Box_C_Initialize_Box_from_spawn_point Parms{};

	Parms.Box_Type_0 = Box_Type_0;
	Parms.Weapon_To_Store_0 = Weapon_To_Store_0;
	Parms.Ammo_in_Magazine_0 = Ammo_in_Magazine_0;
	Parms.Backpack_Items_To_Store_0 = std::move(Backpack_Items_To_Store_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TVTDeathmatch_Box.BP_TVTDeathmatch_Box_C.Initialize loot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Loot_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TVTDeathmatch_Box_C::Initialize_loot(class UClass* Loot_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TVTDeathmatch_Box_C", "Initialize loot");

	Params::BP_TVTDeathmatch_Box_C_Initialize_loot Parms{};

	Parms.Loot_0 = Loot_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TVTDeathmatch_Box.BP_TVTDeathmatch_Box_C.Initialize lootbox from game mode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCloudMatchLootbox               LootboxDefinition_0                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_TVTDeathmatch_Box_C::Initialize_lootbox_from_game_mode(const struct FCloudMatchLootbox& LootboxDefinition_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TVTDeathmatch_Box_C", "Initialize lootbox from game mode");

	Params::BP_TVTDeathmatch_Box_C_Initialize_lootbox_from_game_mode Parms{};

	Parms.LootboxDefinition_0 = std::move(LootboxDefinition_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TVTDeathmatch_Box.BP_TVTDeathmatch_Box_C.BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_Interaction End on Server__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UInteractionItemComponent*        Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Interacting_Actor                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TVTDeathmatch_Box_C::BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_Interaction_End_on_Server__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TVTDeathmatch_Box_C", "BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_Interaction End on Server__DelegateSignature");

	Params::BP_TVTDeathmatch_Box_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_Interaction_End_on_Server__DelegateSignature Parms{};

	Parms.Sender = Sender;
	Parms.Interacting_Actor = Interacting_Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TVTDeathmatch_Box.BP_TVTDeathmatch_Box_C.BndEvt__LootStorage_K2Node_ComponentBoundEvent_1_OnRemovedBagItem__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TSubclassOf<class AItemForBackpack>     BagItemClass                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TVTDeathmatch_Box_C::BndEvt__LootStorage_K2Node_ComponentBoundEvent_1_OnRemovedBagItem__DelegateSignature(TSubclassOf<class AItemForBackpack> BagItemClass, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TVTDeathmatch_Box_C", "BndEvt__LootStorage_K2Node_ComponentBoundEvent_1_OnRemovedBagItem__DelegateSignature");

	Params::BP_TVTDeathmatch_Box_C_BndEvt__LootStorage_K2Node_ComponentBoundEvent_1_OnRemovedBagItem__DelegateSignature Parms{};

	Parms.BagItemClass = BagItemClass;
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TVTDeathmatch_Box.BP_TVTDeathmatch_Box_C.BndEvt__LootStorage_K2Node_ComponentBoundEvent_0_OnRemovedWeapon__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AWeapon*                          Weapon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TVTDeathmatch_Box_C::BndEvt__LootStorage_K2Node_ComponentBoundEvent_0_OnRemovedWeapon__DelegateSignature(class AWeapon* Weapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TVTDeathmatch_Box_C", "BndEvt__LootStorage_K2Node_ComponentBoundEvent_0_OnRemovedWeapon__DelegateSignature");

	Params::BP_TVTDeathmatch_Box_C_BndEvt__LootStorage_K2Node_ComponentBoundEvent_0_OnRemovedWeapon__DelegateSignature Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TVTDeathmatch_Box.BP_TVTDeathmatch_Box_C.Set Box Type
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECloudMatchLootboxType                  New_Box_Type                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TVTDeathmatch_Box_C::Set_Box_Type(ECloudMatchLootboxType New_Box_Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TVTDeathmatch_Box_C", "Set Box Type");

	Params::BP_TVTDeathmatch_Box_C_Set_Box_Type Parms{};

	Parms.New_Box_Type = New_Box_Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TVTDeathmatch_Box.BP_TVTDeathmatch_Box_C.Interaction Ammo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_TVTDeathmatch_C*    Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TVTDeathmatch_Box_C::Interaction_Ammo(class ABP_Character_TVTDeathmatch_C* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TVTDeathmatch_Box_C", "Interaction Ammo");

	Params::BP_TVTDeathmatch_Box_C_Interaction_Ammo Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TVTDeathmatch_Box.BP_TVTDeathmatch_Box_C.Interaction Others
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_TVTDeathmatch_C*    Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TVTDeathmatch_Box_C::Interaction_Others(class ABP_Character_TVTDeathmatch_C* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TVTDeathmatch_Box_C", "Interaction Others");

	Params::BP_TVTDeathmatch_Box_C_Interaction_Others Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TVTDeathmatch_Box.BP_TVTDeathmatch_Box_C.Interaction Weapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_TVTDeathmatch_C*    Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TVTDeathmatch_Box_C::Interaction_Weapon(class ABP_Character_TVTDeathmatch_C* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TVTDeathmatch_Box_C", "Interaction Weapon");

	Params::BP_TVTDeathmatch_Box_C_Interaction_Weapon Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TVTDeathmatch_Box.BP_TVTDeathmatch_Box_C.Get Stored Weapon Slot Type
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWeaponInventoryType                    Slot_Type                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TVTDeathmatch_Box_C::Get_Stored_Weapon_Slot_Type(EWeaponInventoryType* Slot_Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TVTDeathmatch_Box_C", "Get Stored Weapon Slot Type");

	Params::BP_TVTDeathmatch_Box_C_Get_Stored_Weapon_Slot_Type Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Slot_Type != nullptr)
		*Slot_Type = Parms.Slot_Type;
}


// Function BP_TVTDeathmatch_Box.BP_TVTDeathmatch_Box_C.Get Weapons For Swap
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_TVTDeathmatch_C*    Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeapon*                          Weapon_A                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeapon*                          Weapon_X                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TVTDeathmatch_Box_C::Get_Weapons_For_Swap(class ABP_Character_TVTDeathmatch_C* Character, class AWeapon** Weapon_A, class AWeapon** Weapon_X)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TVTDeathmatch_Box_C", "Get Weapons For Swap");

	Params::BP_TVTDeathmatch_Box_C_Get_Weapons_For_Swap Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

	if (Weapon_A != nullptr)
		*Weapon_A = Parms.Weapon_A;

	if (Weapon_X != nullptr)
		*Weapon_X = Parms.Weapon_X;
}


// Function BP_TVTDeathmatch_Box.BP_TVTDeathmatch_Box_C.Swap Weapons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                          New_Swapped_Weapon                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_TVTDeathmatch_C*Player_Controller                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TVTDeathmatch_Box_C::Swap_Weapons(class AWeapon* New_Swapped_Weapon, class ABP_PlayerController_TVTDeathmatch_C* Player_Controller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TVTDeathmatch_Box_C", "Swap Weapons");

	Params::BP_TVTDeathmatch_Box_C_Swap_Weapons Parms{};

	Parms.New_Swapped_Weapon = New_Swapped_Weapon;
	Parms.Player_Controller = Player_Controller;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TVTDeathmatch_Box.BP_TVTDeathmatch_Box_C.Insert Weapon to Invetory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_TVTDeathmatch_Box_C::Insert_Weapon_to_Invetory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TVTDeathmatch_Box_C", "Insert Weapon to Invetory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TVTDeathmatch_Box.BP_TVTDeathmatch_Box_C.Insert Resources to Invetory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_TVTDeathmatch_Box_C::Insert_Resources_to_Invetory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TVTDeathmatch_Box_C", "Insert Resources to Invetory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TVTDeathmatch_Box.BP_TVTDeathmatch_Box_C.Insert Weapon To Storage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Weapon_Type                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TVTDeathmatch_Box_C::Insert_Weapon_To_Storage(class UClass* Weapon_Type, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TVTDeathmatch_Box_C", "Insert Weapon To Storage");

	Params::BP_TVTDeathmatch_Box_C_Insert_Weapon_To_Storage Parms{};

	Parms.Weapon_Type = Weapon_Type;
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TVTDeathmatch_Box.BP_TVTDeathmatch_Box_C.InitializeLootFromCloud
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCloudMatchLootbox               LootboxDefinition_0                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_TVTDeathmatch_Box_C::InitializeLootFromCloud(const struct FCloudMatchLootbox& LootboxDefinition_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TVTDeathmatch_Box_C", "InitializeLootFromCloud");

	Params::BP_TVTDeathmatch_Box_C_InitializeLootFromCloud Parms{};

	Parms.LootboxDefinition_0 = std::move(LootboxDefinition_0);

	UObject::ProcessEvent(Func, &Parms);
}

}
