#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LootObject_MetalParts

#include "Basic.hpp"

#include "BP_Lootable_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LootObject_MetalParts.BP_LootObject_MetalParts_C
// 0x0008 (0x03B0 - 0x03A8)
class ABP_LootObject_MetalParts_C final : public ABP_Lootable_Base_C
{
public:
	class USphereComponent*                       Sphere;                                            // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LootObject_MetalParts_C">();
	}
	static class ABP_LootObject_MetalParts_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LootObject_MetalParts_C>();
	}
};
static_assert(alignof(ABP_LootObject_MetalParts_C) == 0x000008, "Wrong alignment on ABP_LootObject_MetalParts_C");
static_assert(sizeof(ABP_LootObject_MetalParts_C) == 0x0003B0, "Wrong size on ABP_LootObject_MetalParts_C");
static_assert(offsetof(ABP_LootObject_MetalParts_C, Sphere) == 0x0003A8, "Member 'ABP_LootObject_MetalParts_C::Sphere' has a wrong offset!");

}
