#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Uniform

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Uniform.BP_Uniform_C
// 0x0008 (0x0408 - 0x0400)
class ABP_Uniform_C : public AClothesUniform
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0400(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Uniform_C">();
	}
	static class ABP_Uniform_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Uniform_C>();
	}
};
static_assert(alignof(ABP_Uniform_C) == 0x000008, "Wrong alignment on ABP_Uniform_C");
static_assert(sizeof(ABP_Uniform_C) == 0x000408, "Wrong size on ABP_Uniform_C");
static_assert(offsetof(ABP_Uniform_C, DefaultSceneRoot) == 0x000400, "Member 'ABP_Uniform_C::DefaultSceneRoot' has a wrong offset!");

}

