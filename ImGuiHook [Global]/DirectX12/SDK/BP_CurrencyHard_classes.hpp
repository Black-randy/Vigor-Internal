#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CurrencyHard

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CurrencyHard.BP_CurrencyHard_C
// 0x0008 (0x03A0 - 0x0398)
class ABP_CurrencyHard_C final : public ACurrencyHard
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CurrencyHard_C">();
	}
	static class ABP_CurrencyHard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CurrencyHard_C>();
	}
};
static_assert(alignof(ABP_CurrencyHard_C) == 0x000008, "Wrong alignment on ABP_CurrencyHard_C");
static_assert(sizeof(ABP_CurrencyHard_C) == 0x0003A0, "Wrong size on ABP_CurrencyHard_C");
static_assert(offsetof(ABP_CurrencyHard_C, DefaultSceneRoot) == 0x000398, "Member 'ABP_CurrencyHard_C::DefaultSceneRoot' has a wrong offset!");

}
