#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AssaultRifle_09

#include "Basic.hpp"

#include "BP_PrimaryWeapon_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AssaultRifle_09.BP_AssaultRifle_09_C
// 0x0000 (0x23B0 - 0x23B0)
class ABP_AssaultRifle_09_C final : public ABP_PrimaryWeapon_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AssaultRifle_09_C">();
	}
	static class ABP_AssaultRifle_09_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AssaultRifle_09_C>();
	}
};
static_assert(alignof(ABP_AssaultRifle_09_C) == 0x000010, "Wrong alignment on ABP_AssaultRifle_09_C");
static_assert(sizeof(ABP_AssaultRifle_09_C) == 0x0023B0, "Wrong size on ABP_AssaultRifle_09_C");

}

