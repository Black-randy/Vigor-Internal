#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_MachineGun_12_Child

#include "Basic.hpp"

#include "Firearm_ABP_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_MachineGun_12_Child.ABP_MachineGun_12_Child_C
// 0x0000 (0x16D0 - 0x16D0)
class UABP_MachineGun_12_Child_C final : public UFirearm_ABP_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_MachineGun_12_Child_C">();
	}
	static class UABP_MachineGun_12_Child_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_MachineGun_12_Child_C>();
	}
};
static_assert(alignof(UABP_MachineGun_12_Child_C) == 0x000010, "Wrong alignment on UABP_MachineGun_12_Child_C");
static_assert(sizeof(UABP_MachineGun_12_Child_C) == 0x0016D0, "Wrong size on UABP_MachineGun_12_Child_C");

}
