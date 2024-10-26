#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameState_AirDropModular

#include "Basic.hpp"

#include "BP_GameState_Matches_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GameState_AirDropModular.BP_GameState_AirDropModular_C
// 0x0020 (0x04D8 - 0x04B8)
class ABP_GameState_AirDropModular_C final : public ABP_GameState_Matches_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_GameState_AirDropModular_C;      // 0x04B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          Is_Game_Mode_Running;                              // 0x04C0(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C1[0x7];                                      // 0x04C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FText>                           Module_Descriptions;                               // 0x04C8(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_GameState_AirDropModular(int32 EntryPoint);
	void Set_Game_Mode_Description(const class FText& New_Game_Mode_Description);
	void Destroy_ADM_Component(class UBP_GSComponent_ADM_C* ADM_GSComponent);
	void Print_Component_List();
	void Get_Game_Mode_Description(class FText* Game_Mode_Description_0);
	void GetGameModeStringName(class FString* StringName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GameState_AirDropModular_C">();
	}
	static class ABP_GameState_AirDropModular_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GameState_AirDropModular_C>();
	}
};
static_assert(alignof(ABP_GameState_AirDropModular_C) == 0x000008, "Wrong alignment on ABP_GameState_AirDropModular_C");
static_assert(sizeof(ABP_GameState_AirDropModular_C) == 0x0004D8, "Wrong size on ABP_GameState_AirDropModular_C");
static_assert(offsetof(ABP_GameState_AirDropModular_C, UberGraphFrame_BP_GameState_AirDropModular_C) == 0x0004B8, "Member 'ABP_GameState_AirDropModular_C::UberGraphFrame_BP_GameState_AirDropModular_C' has a wrong offset!");
static_assert(offsetof(ABP_GameState_AirDropModular_C, Is_Game_Mode_Running) == 0x0004C0, "Member 'ABP_GameState_AirDropModular_C::Is_Game_Mode_Running' has a wrong offset!");
static_assert(offsetof(ABP_GameState_AirDropModular_C, Module_Descriptions) == 0x0004C8, "Member 'ABP_GameState_AirDropModular_C::Module_Descriptions' has a wrong offset!");

}

