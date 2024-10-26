#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ADM_BuriedCache_Dummy

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_ADM_BuriedCache_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ADM_BuriedCache_Dummy.BP_ADM_BuriedCache_Dummy_C
// 0x0008 (0x0478 - 0x0470)
class ABP_ADM_BuriedCache_Dummy_C final : public ABP_ADM_BuriedCache_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ADM_BuriedCache_Dummy_C;         // 0x0470(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_ADM_BuriedCache_Dummy(int32 EntryPoint);
	void Open_Local_Inventory_UI(class AHumanPlayerController* Browsing_Controller);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ADM_BuriedCache_Dummy_C">();
	}
	static class ABP_ADM_BuriedCache_Dummy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ADM_BuriedCache_Dummy_C>();
	}
};
static_assert(alignof(ABP_ADM_BuriedCache_Dummy_C) == 0x000008, "Wrong alignment on ABP_ADM_BuriedCache_Dummy_C");
static_assert(sizeof(ABP_ADM_BuriedCache_Dummy_C) == 0x000478, "Wrong size on ABP_ADM_BuriedCache_Dummy_C");
static_assert(offsetof(ABP_ADM_BuriedCache_Dummy_C, UberGraphFrame_BP_ADM_BuriedCache_Dummy_C) == 0x000470, "Member 'ABP_ADM_BuriedCache_Dummy_C::UberGraphFrame_BP_ADM_BuriedCache_Dummy_C' has a wrong offset!");

}

