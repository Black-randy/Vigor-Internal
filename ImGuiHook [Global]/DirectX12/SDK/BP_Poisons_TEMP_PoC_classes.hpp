#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Poisons_TEMP_PoC

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Poisons_TEMP_PoC.BP_Poisons_TEMP_PoC_C
// 0x0008 (0x00B8 - 0x00B0)
class UBP_Poisons_TEMP_PoC_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_Poisons_TEMP_PoC(int32 EntryPoint);
	void ApplyPoisonFromItem(class UBP_HealingComponent_C* HealingComponent, class AHumanCharacter* InstigatingCharacter, class UClass* InstigatingItem);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Poisons_TEMP_PoC_C">();
	}
	static class UBP_Poisons_TEMP_PoC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Poisons_TEMP_PoC_C>();
	}
};
static_assert(alignof(UBP_Poisons_TEMP_PoC_C) == 0x000008, "Wrong alignment on UBP_Poisons_TEMP_PoC_C");
static_assert(sizeof(UBP_Poisons_TEMP_PoC_C) == 0x0000B8, "Wrong size on UBP_Poisons_TEMP_PoC_C");
static_assert(offsetof(UBP_Poisons_TEMP_PoC_C, UberGraphFrame) == 0x0000B0, "Member 'UBP_Poisons_TEMP_PoC_C::UberGraphFrame' has a wrong offset!");

}
