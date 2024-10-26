#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TC_ContactBomb

#include "Basic.hpp"

#include "BP_TC_ContactBomb_classes.hpp"
#include "BP_TC_ContactBomb_parameters.hpp"


namespace SDK
{

// Function BP_TC_ContactBomb.BP_TC_ContactBomb_C.ExecuteUbergraph_BP_TC_ContactBomb
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TC_ContactBomb_C::ExecuteUbergraph_BP_TC_ContactBomb(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_ContactBomb_C", "ExecuteUbergraph_BP_TC_ContactBomb");

	Params::BP_TC_ContactBomb_C_ExecuteUbergraph_BP_TC_ContactBomb Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TC_ContactBomb.BP_TC_ContactBomb_C.Trap_Set_Variables
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlacableTrap_Object_Base_C*   PlacedTrap                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TC_ContactBomb_C::Trap_Set_Variables(class ABP_PlacableTrap_Object_Base_C* PlacedTrap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_ContactBomb_C", "Trap_Set_Variables");

	Params::BP_TC_ContactBomb_C_Trap_Set_Variables Parms{};

	Parms.PlacedTrap = PlacedTrap;

	UObject::ProcessEvent(Func, &Parms);
}

}

