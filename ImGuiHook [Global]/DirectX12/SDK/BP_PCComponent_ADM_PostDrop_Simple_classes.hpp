#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PCComponent_ADM_PostDrop_Simple

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_PCComponent_ADM_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PCComponent_ADM_PostDrop_Simple.BP_PCComponent_ADM_PostDrop_Simple_C
// 0x0058 (0x0140 - 0x00E8)
class UBP_PCComponent_ADM_PostDrop_Simple_C final : public UBP_PCComponent_ADM_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_PCComponent_ADM_PostDrop_Simple_C; // 0x00E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TMap<class UClass*, int32>                    Reward_Items_Looted;                               // 0x00F0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_PCComponent_ADM_PostDrop_Simple(int32 EntryPoint);
	void Send_Container_Looted_Analytics_Event(class ABP_AirDropContainer_Base_C* Air_Drop_Container);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PCComponent_ADM_PostDrop_Simple_C">();
	}
	static class UBP_PCComponent_ADM_PostDrop_Simple_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PCComponent_ADM_PostDrop_Simple_C>();
	}
};
static_assert(alignof(UBP_PCComponent_ADM_PostDrop_Simple_C) == 0x000008, "Wrong alignment on UBP_PCComponent_ADM_PostDrop_Simple_C");
static_assert(sizeof(UBP_PCComponent_ADM_PostDrop_Simple_C) == 0x000140, "Wrong size on UBP_PCComponent_ADM_PostDrop_Simple_C");
static_assert(offsetof(UBP_PCComponent_ADM_PostDrop_Simple_C, UberGraphFrame_BP_PCComponent_ADM_PostDrop_Simple_C) == 0x0000E8, "Member 'UBP_PCComponent_ADM_PostDrop_Simple_C::UberGraphFrame_BP_PCComponent_ADM_PostDrop_Simple_C' has a wrong offset!");
static_assert(offsetof(UBP_PCComponent_ADM_PostDrop_Simple_C, Reward_Items_Looted) == 0x0000F0, "Member 'UBP_PCComponent_ADM_PostDrop_Simple_C::Reward_Items_Looted' has a wrong offset!");

}
