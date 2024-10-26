#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CharOutlineDefault

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CharOutlineDefault.BP_CharOutlineDefault_C
// 0x0008 (0x0270 - 0x0268)
class ABP_CharOutlineDefault_C final : public ACharacterOutline
{
public:
	class USkeletalMeshComponent*                 MeshForComparison;                                 // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CharOutlineDefault_C">();
	}
	static class ABP_CharOutlineDefault_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CharOutlineDefault_C>();
	}
};
static_assert(alignof(ABP_CharOutlineDefault_C) == 0x000008, "Wrong alignment on ABP_CharOutlineDefault_C");
static_assert(sizeof(ABP_CharOutlineDefault_C) == 0x000270, "Wrong size on ABP_CharOutlineDefault_C");
static_assert(offsetof(ABP_CharOutlineDefault_C, MeshForComparison) == 0x000268, "Member 'ABP_CharOutlineDefault_C::MeshForComparison' has a wrong offset!");

}

