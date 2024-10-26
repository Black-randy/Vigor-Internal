#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ADM_LandMine_GMComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_GMComponent_ADM_Event_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ADM_LandMine_GMComponent.BP_ADM_LandMine_GMComponent_C
// 0x0020 (0x01F8 - 0x01D8)
class UBP_ADM_LandMine_GMComponent_C final : public UBP_GMComponent_ADM_Event_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ADM_LandMine_GMComponent_C;      // 0x01D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         Desired_ammount_of_LandMines;                      // 0x01E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E4[0x4];                                      // 0x01E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_LandMine_Border_C*>          SpawnedMines;                                      // 0x01E8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_ADM_LandMine_GMComponent(int32 EntryPoint);
	void Verify_that_everything_spawned_properly();
	void Initialize_Component();
	void Spawn_LandMines(bool* Success);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ADM_LandMine_GMComponent_C">();
	}
	static class UBP_ADM_LandMine_GMComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ADM_LandMine_GMComponent_C>();
	}
};
static_assert(alignof(UBP_ADM_LandMine_GMComponent_C) == 0x000008, "Wrong alignment on UBP_ADM_LandMine_GMComponent_C");
static_assert(sizeof(UBP_ADM_LandMine_GMComponent_C) == 0x0001F8, "Wrong size on UBP_ADM_LandMine_GMComponent_C");
static_assert(offsetof(UBP_ADM_LandMine_GMComponent_C, UberGraphFrame_BP_ADM_LandMine_GMComponent_C) == 0x0001D8, "Member 'UBP_ADM_LandMine_GMComponent_C::UberGraphFrame_BP_ADM_LandMine_GMComponent_C' has a wrong offset!");
static_assert(offsetof(UBP_ADM_LandMine_GMComponent_C, Desired_ammount_of_LandMines) == 0x0001E0, "Member 'UBP_ADM_LandMine_GMComponent_C::Desired_ammount_of_LandMines' has a wrong offset!");
static_assert(offsetof(UBP_ADM_LandMine_GMComponent_C, SpawnedMines) == 0x0001E8, "Member 'UBP_ADM_LandMine_GMComponent_C::SpawnedMines' has a wrong offset!");

}

