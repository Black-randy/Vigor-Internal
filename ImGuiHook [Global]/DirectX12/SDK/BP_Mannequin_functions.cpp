#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Mannequin

#include "Basic.hpp"

#include "BP_Mannequin_classes.hpp"
#include "BP_Mannequin_parameters.hpp"


namespace SDK
{

// Function BP_Mannequin.BP_Mannequin_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Mannequin_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Mannequin_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Mannequin.BP_Mannequin_C.InitFromCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHumanCharacter*                  Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mannequin_C::InitFromCharacter(class AHumanCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Mannequin_C", "InitFromCharacter");

	Params::BP_Mannequin_C_InitFromCharacter Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}

}
