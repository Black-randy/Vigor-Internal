#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EnvQueryContext_BlackboardLocation

#include "Basic.hpp"

#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass EnvQueryContext_BlackboardLocation.EnvQueryContext_BlackboardLocation_C
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryContext_BlackboardLocation_C final : public UEnvQueryContext_BlueprintBase
{
public:
	void ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EnvQueryContext_BlackboardLocation_C">();
	}
	static class UEnvQueryContext_BlackboardLocation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryContext_BlackboardLocation_C>();
	}
};
static_assert(alignof(UEnvQueryContext_BlackboardLocation_C) == 0x000008, "Wrong alignment on UEnvQueryContext_BlackboardLocation_C");
static_assert(sizeof(UEnvQueryContext_BlackboardLocation_C) == 0x000030, "Wrong size on UEnvQueryContext_BlackboardLocation_C");

}
