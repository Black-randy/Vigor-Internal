#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_I_BurriedCachePing

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_I_BurriedCachePing.BP_I_BurriedCachePing_C
// 0x0000 (0x0028 - 0x0028)
class IBP_I_BurriedCachePing_C final : public IInterface
{
public:
	void WasDiscovered(bool* WasDiscovered_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_I_BurriedCachePing_C">();
	}
	static class IBP_I_BurriedCachePing_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBP_I_BurriedCachePing_C>();
	}
};
static_assert(alignof(IBP_I_BurriedCachePing_C) == 0x000008, "Wrong alignment on IBP_I_BurriedCachePing_C");
static_assert(sizeof(IBP_I_BurriedCachePing_C) == 0x000028, "Wrong size on IBP_I_BurriedCachePing_C");

}

