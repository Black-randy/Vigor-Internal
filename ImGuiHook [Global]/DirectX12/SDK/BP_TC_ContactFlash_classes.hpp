#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TC_ContactFlash

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_PlacableTrap_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TC_ContactFlash.BP_TC_ContactFlash_C
// 0x0010 (0x0700 - 0x06F0)
class ABP_TC_ContactFlash_C final : public ABP_PlacableTrap_Base_C
{
public:
	uint8                                         Pad_6E1[0x7];                                      // 0x06E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_TC_ContactFlash_C;               // 0x06E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         TrapTriggerRadius;                                 // 0x06F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DetonationRadius;                                  // 0x06F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_TC_ContactFlash(int32 EntryPoint);
	void Trap_Set_Variables(class ABP_PlacableTrap_Object_Base_C* PlacedTrap);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TC_ContactFlash_C">();
	}
	static class ABP_TC_ContactFlash_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TC_ContactFlash_C>();
	}
};
static_assert(alignof(ABP_TC_ContactFlash_C) == 0x000010, "Wrong alignment on ABP_TC_ContactFlash_C");
static_assert(sizeof(ABP_TC_ContactFlash_C) == 0x000700, "Wrong size on ABP_TC_ContactFlash_C");
static_assert(offsetof(ABP_TC_ContactFlash_C, UberGraphFrame_BP_TC_ContactFlash_C) == 0x0006E8, "Member 'ABP_TC_ContactFlash_C::UberGraphFrame_BP_TC_ContactFlash_C' has a wrong offset!");
static_assert(offsetof(ABP_TC_ContactFlash_C, TrapTriggerRadius) == 0x0006F0, "Member 'ABP_TC_ContactFlash_C::TrapTriggerRadius' has a wrong offset!");
static_assert(offsetof(ABP_TC_ContactFlash_C, DetonationRadius) == 0x0006F4, "Member 'ABP_TC_ContactFlash_C::DetonationRadius' has a wrong offset!");

}
