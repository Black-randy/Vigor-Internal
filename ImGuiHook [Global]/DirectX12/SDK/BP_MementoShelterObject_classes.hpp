#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MementoShelterObject

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MementoShelterObject.BP_MementoShelterObject_C
// 0x0028 (0x0248 - 0x0220)
class ABP_MementoShelterObject_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Memento_Class;                                     // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerState_C*                      Player_State;                                      // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_MementoShelterObject(int32 EntryPoint);
	void Stash_Loaded(class AStash* Sender, class UStashComponent* Inventory);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void Set_Visuals(class UDataTable* Data_Table);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MementoShelterObject_C">();
	}
	static class ABP_MementoShelterObject_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MementoShelterObject_C>();
	}
};
static_assert(alignof(ABP_MementoShelterObject_C) == 0x000008, "Wrong alignment on ABP_MementoShelterObject_C");
static_assert(sizeof(ABP_MementoShelterObject_C) == 0x000248, "Wrong size on ABP_MementoShelterObject_C");
static_assert(offsetof(ABP_MementoShelterObject_C, UberGraphFrame) == 0x000220, "Member 'ABP_MementoShelterObject_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MementoShelterObject_C, StaticMesh) == 0x000228, "Member 'ABP_MementoShelterObject_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_MementoShelterObject_C, DefaultSceneRoot) == 0x000230, "Member 'ABP_MementoShelterObject_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_MementoShelterObject_C, Memento_Class) == 0x000238, "Member 'ABP_MementoShelterObject_C::Memento_Class' has a wrong offset!");
static_assert(offsetof(ABP_MementoShelterObject_C, Player_State) == 0x000240, "Member 'ABP_MementoShelterObject_C::Player_State' has a wrong offset!");

}

