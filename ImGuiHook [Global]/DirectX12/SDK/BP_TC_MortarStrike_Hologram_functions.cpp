#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TC_MortarStrike_Hologram

#include "Basic.hpp"

#include "BP_TC_MortarStrike_Hologram_classes.hpp"
#include "BP_TC_MortarStrike_Hologram_parameters.hpp"


namespace SDK
{

// Function BP_TC_MortarStrike_Hologram.BP_TC_MortarStrike_Hologram_C.ExecuteUbergraph_BP_TC_MortarStrike_Hologram
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TC_MortarStrike_Hologram_C::ExecuteUbergraph_BP_TC_MortarStrike_Hologram(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_MortarStrike_Hologram_C", "ExecuteUbergraph_BP_TC_MortarStrike_Hologram");

	Params::BP_TC_MortarStrike_Hologram_C_ExecuteUbergraph_BP_TC_MortarStrike_Hologram Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TC_MortarStrike_Hologram.BP_TC_MortarStrike_Hologram_C.Update Scale
// (BlueprintCallable, BlueprintEvent)

void ABP_TC_MortarStrike_Hologram_C::Update_Scale()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_MortarStrike_Hologram_C", "Update Scale");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TC_MortarStrike_Hologram.BP_TC_MortarStrike_Hologram_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TC_MortarStrike_Hologram_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_MortarStrike_Hologram_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TC_MortarStrike_Hologram.BP_TC_MortarStrike_Hologram_C.Set Variables From Tool
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Mortar_Strike_Radius                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TC_MortarStrike_Hologram_C::Set_Variables_From_Tool(float Mortar_Strike_Radius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_MortarStrike_Hologram_C", "Set Variables From Tool");

	Params::BP_TC_MortarStrike_Hologram_C_Set_Variables_From_Tool Parms{};

	Parms.Mortar_Strike_Radius = Mortar_Strike_Radius;

	UObject::ProcessEvent(Func, &Parms);
}

}
