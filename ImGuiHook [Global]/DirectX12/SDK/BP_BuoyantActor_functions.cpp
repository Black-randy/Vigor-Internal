#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BuoyantActor

#include "Basic.hpp"

#include "BP_BuoyantActor_classes.hpp"


namespace SDK
{

// Function BP_BuoyantActor.BP_BuoyantActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BuoyantActor_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuoyantActor_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

