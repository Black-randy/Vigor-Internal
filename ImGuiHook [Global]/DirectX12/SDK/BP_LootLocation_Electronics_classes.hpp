#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LootLocation_Electronics

#include "Basic.hpp"

#include "BP_LootLocation_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LootLocation_Electronics.BP_LootLocation_Electronics_C
// 0x0000 (0x0238 - 0x0238)
class ABP_LootLocation_Electronics_C final : public ABP_LootLocation_Base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LootLocation_Electronics_C">();
	}
	static class ABP_LootLocation_Electronics_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LootLocation_Electronics_C>();
	}
};
static_assert(alignof(ABP_LootLocation_Electronics_C) == 0x000008, "Wrong alignment on ABP_LootLocation_Electronics_C");
static_assert(sizeof(ABP_LootLocation_Electronics_C) == 0x000238, "Wrong size on ABP_LootLocation_Electronics_C");

}

