#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_357_Magnum

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_357_Magnum.BP_357_Magnum_C
// 0x0008 (0x03B8 - 0x03B0)
class ABP_357_Magnum_C final : public AAmmoItem
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_357_Magnum_C">();
	}
	static class ABP_357_Magnum_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_357_Magnum_C>();
	}
};
static_assert(alignof(ABP_357_Magnum_C) == 0x000008, "Wrong alignment on ABP_357_Magnum_C");
static_assert(sizeof(ABP_357_Magnum_C) == 0x0003B8, "Wrong size on ABP_357_Magnum_C");
static_assert(offsetof(ABP_357_Magnum_C, DefaultSceneRoot) == 0x0003B0, "Member 'ABP_357_Magnum_C::DefaultSceneRoot' has a wrong offset!");

}
