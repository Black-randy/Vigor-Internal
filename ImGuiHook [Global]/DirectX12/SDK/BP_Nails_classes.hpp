#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Nails

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Nails.BP_Nails_C
// 0x0008 (0x03B8 - 0x03B0)
class ABP_Nails_C final : public ANails
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Nails_C">();
	}
	static class ABP_Nails_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Nails_C>();
	}
};
static_assert(alignof(ABP_Nails_C) == 0x000008, "Wrong alignment on ABP_Nails_C");
static_assert(sizeof(ABP_Nails_C) == 0x0003B8, "Wrong size on ABP_Nails_C");
static_assert(offsetof(ABP_Nails_C, DefaultSceneRoot) == 0x0003B0, "Member 'ABP_Nails_C::DefaultSceneRoot' has a wrong offset!");

}
