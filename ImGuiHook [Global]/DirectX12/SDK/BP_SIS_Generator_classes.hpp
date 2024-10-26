#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SIS_Generator

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SIS_Generator.BP_SIS_Generator_C
// 0x0008 (0x03C0 - 0x03B8)
class ABP_SIS_Generator_C final : public AShelterSlot
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SIS_Generator_C">();
	}
	static class ABP_SIS_Generator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SIS_Generator_C>();
	}
};
static_assert(alignof(ABP_SIS_Generator_C) == 0x000008, "Wrong alignment on ABP_SIS_Generator_C");
static_assert(sizeof(ABP_SIS_Generator_C) == 0x0003C0, "Wrong size on ABP_SIS_Generator_C");
static_assert(offsetof(ABP_SIS_Generator_C, DefaultSceneRoot) == 0x0003B8, "Member 'ABP_SIS_Generator_C::DefaultSceneRoot' has a wrong offset!");

}

