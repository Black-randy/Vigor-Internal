#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LS_ShelterLevel3Update

#include "Basic.hpp"

#include "LS_ShelterLevel3Update_classes.hpp"
#include "LS_ShelterLevel3Update_parameters.hpp"


namespace SDK
{

// Function LS_ShelterLevel3Update.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void LS_ShelterLevel3Update::USequenceDirector_C::ExecuteUbergraph_SequenceDirector(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "ExecuteUbergraph_SequenceDirector");

	Params::SequenceDirector_C_ExecuteUbergraph_SequenceDirector Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LS_ShelterLevel3Update.SequenceDirector_C.BP_ShelterCameras_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ShelterCameras_C*             BP_ShelterCameras                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CaptureTotalCount                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void LS_ShelterLevel3Update::USequenceDirector_C::BP_ShelterCameras_Event_0(class ABP_ShelterCameras_C* BP_ShelterCameras, int32 CaptureTotalCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "BP_ShelterCameras_Event_0");

	Params::SequenceDirector_C_BP_ShelterCameras_Event_0 Parms{};

	Parms.BP_ShelterCameras = BP_ShelterCameras;
	Parms.CaptureTotalCount = CaptureTotalCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LS_ShelterLevel3Update.SequenceDirector_C.HideScafoldings
// (BlueprintCallable, BlueprintEvent)

void LS_ShelterLevel3Update::USequenceDirector_C::HideScafoldings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "HideScafoldings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LS_ShelterLevel3Update.SequenceDirector_C.SetScafoldingVIsibilityByTag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Tag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Visibility                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void LS_ShelterLevel3Update::USequenceDirector_C::SetScafoldingVIsibilityByTag(class FName Tag, bool Visibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SetScafoldingVIsibilityByTag");

	Params::SequenceDirector_C_SetScafoldingVIsibilityByTag Parms{};

	Parms.Tag = Tag;
	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LS_ShelterLevel3Update.SequenceDirector_C.HideAllScafoldings
// (BlueprintCallable, BlueprintEvent)

void LS_ShelterLevel3Update::USequenceDirector_C::HideAllScafoldings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "HideAllScafoldings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LS_ShelterLevel3Update.SequenceDirector_C.UsePlayerCustomizations
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Mannequin_C*                  BP_Mannequin                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void LS_ShelterLevel3Update::USequenceDirector_C::UsePlayerCustomizations(class ABP_Mannequin_C* BP_Mannequin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "UsePlayerCustomizations");

	Params::SequenceDirector_C_UsePlayerCustomizations Parms{};

	Parms.BP_Mannequin = BP_Mannequin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LS_ShelterLevel3Update.SequenceDirector_C.PassNextUIContext
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ShelterCameras_C*             BP_ShelterCameras                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void LS_ShelterLevel3Update::USequenceDirector_C::PassNextUIContext(class ABP_ShelterCameras_C* BP_ShelterCameras)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "PassNextUIContext");

	Params::SequenceDirector_C_PassNextUIContext Parms{};

	Parms.BP_ShelterCameras = BP_ShelterCameras;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LS_ShelterLevel3Update.SequenceDirector_C.CaptureUpgradeSnapshot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ShelterCameras_C*             BP_ShelterCameras                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void LS_ShelterLevel3Update::USequenceDirector_C::CaptureUpgradeSnapshot(class ABP_ShelterCameras_C* BP_ShelterCameras, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "CaptureUpgradeSnapshot");

	Params::SequenceDirector_C_CaptureUpgradeSnapshot Parms{};

	Parms.BP_ShelterCameras = BP_ShelterCameras;
	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LS_ShelterLevel3Update.SequenceDirector_C.SetSeublevelVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_StreamingRepair_C*            BP_StreamingRepair                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bShouldBeVisible                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   ShelterLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void LS_ShelterLevel3Update::USequenceDirector_C::SetSeublevelVisibility(class ABP_StreamingRepair_C* BP_StreamingRepair, bool bShouldBeVisible, int32 ShelterLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SetSeublevelVisibility");

	Params::SequenceDirector_C_SetSeublevelVisibility Parms{};

	Parms.BP_StreamingRepair = BP_StreamingRepair;
	Parms.bShouldBeVisible = bShouldBeVisible;
	Parms.ShelterLevel = ShelterLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LS_ShelterLevel3Update.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ShelterCameras_C*             BP_ShelterCameras                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void LS_ShelterLevel3Update::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_0(class ABP_ShelterCameras_C* BP_ShelterCameras)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_0");

	Params::SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0 Parms{};

	Parms.BP_ShelterCameras = BP_ShelterCameras;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LS_ShelterLevel3Update.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ShelterCameras_C*             BP_ShelterCameras                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void LS_ShelterLevel3Update::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_1(class ABP_ShelterCameras_C* BP_ShelterCameras)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_1");

	Params::SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_1 Parms{};

	Parms.BP_ShelterCameras = BP_ShelterCameras;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LS_ShelterLevel3Update.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ShelterCameras_C*             BP_ShelterCameras                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void LS_ShelterLevel3Update::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_2(class ABP_ShelterCameras_C* BP_ShelterCameras)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_2");

	Params::SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_2 Parms{};

	Parms.BP_ShelterCameras = BP_ShelterCameras;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LS_ShelterLevel3Update.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_3
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_StreamingRepair_C*            BP_StreamingRepair                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void LS_ShelterLevel3Update::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_3(class ABP_StreamingRepair_C* BP_StreamingRepair)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_3");

	Params::SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_3 Parms{};

	Parms.BP_StreamingRepair = BP_StreamingRepair;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LS_ShelterLevel3Update.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_4
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_StreamingRepair_C*            BP_StreamingRepair                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void LS_ShelterLevel3Update::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_4(class ABP_StreamingRepair_C* BP_StreamingRepair)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_4");

	Params::SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_4 Parms{};

	Parms.BP_StreamingRepair = BP_StreamingRepair;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LS_ShelterLevel3Update.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_5
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Mannequin_C*                  BP_Mannequin                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void LS_ShelterLevel3Update::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_5(class ABP_Mannequin_C* BP_Mannequin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_5");

	Params::SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_5 Parms{};

	Parms.BP_Mannequin = BP_Mannequin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LS_ShelterLevel3Update.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_6
// (Public, BlueprintCallable, BlueprintEvent)

void LS_ShelterLevel3Update::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LS_ShelterLevel3Update.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_7
// (Public, BlueprintCallable, BlueprintEvent)

void LS_ShelterLevel3Update::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LS_ShelterLevel3Update.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_8
// (Public, BlueprintCallable, BlueprintEvent)

void LS_ShelterLevel3Update::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LS_ShelterLevel3Update.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_9
// (Public, BlueprintCallable, BlueprintEvent)

void LS_ShelterLevel3Update::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LS_ShelterLevel3Update.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_10
// (Public, BlueprintCallable, BlueprintEvent)

void LS_ShelterLevel3Update::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_10()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_10");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LS_ShelterLevel3Update.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_11
// (Public, BlueprintCallable, BlueprintEvent)

void LS_ShelterLevel3Update::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_11()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_11");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LS_ShelterLevel3Update.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_12
// (Public, BlueprintCallable, BlueprintEvent)

void LS_ShelterLevel3Update::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_12()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_12");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LS_ShelterLevel3Update.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_13
// (Public, BlueprintCallable, BlueprintEvent)

void LS_ShelterLevel3Update::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_13()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_13");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LS_ShelterLevel3Update.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_14
// (Public, BlueprintCallable, BlueprintEvent)

void LS_ShelterLevel3Update::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_14()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_14");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LS_ShelterLevel3Update.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_15
// (Public, BlueprintCallable, BlueprintEvent)

void LS_ShelterLevel3Update::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_15()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_15");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LS_ShelterLevel3Update.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_16
// (Public, BlueprintCallable, BlueprintEvent)

void LS_ShelterLevel3Update::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_16()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_16");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LS_ShelterLevel3Update.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_17
// (Public, BlueprintCallable, BlueprintEvent)

void LS_ShelterLevel3Update::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_17()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_17");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LS_ShelterLevel3Update.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_18
// (Public, BlueprintCallable, BlueprintEvent)

void LS_ShelterLevel3Update::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_18()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_18");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LS_ShelterLevel3Update.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_19
// (Public, BlueprintCallable, BlueprintEvent)

void LS_ShelterLevel3Update::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_19()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_19");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LS_ShelterLevel3Update.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_20
// (Public, BlueprintCallable, BlueprintEvent)

void LS_ShelterLevel3Update::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_20()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_20");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LS_ShelterLevel3Update.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_21
// (Public, BlueprintCallable, BlueprintEvent)

void LS_ShelterLevel3Update::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_21()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_21");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LS_ShelterLevel3Update.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_22
// (Public, BlueprintCallable, BlueprintEvent)

void LS_ShelterLevel3Update::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_22()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_22");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LS_ShelterLevel3Update.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_23
// (Public, BlueprintCallable, BlueprintEvent)

void LS_ShelterLevel3Update::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_23()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_23");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LS_ShelterLevel3Update.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_24
// (Public, BlueprintCallable, BlueprintEvent)

void LS_ShelterLevel3Update::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_24()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_24");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LS_ShelterLevel3Update.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_25
// (Public, BlueprintCallable, BlueprintEvent)

void LS_ShelterLevel3Update::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_25()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_25");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LS_ShelterLevel3Update.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_26
// (Public, BlueprintCallable, BlueprintEvent)

void LS_ShelterLevel3Update::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_26()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_26");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LS_ShelterLevel3Update.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_27
// (Public, BlueprintCallable, BlueprintEvent)

void LS_ShelterLevel3Update::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_27()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_27");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LS_ShelterLevel3Update.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_28
// (Public, BlueprintCallable, BlueprintEvent)

void LS_ShelterLevel3Update::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_28()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_28");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LS_ShelterLevel3Update.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_29
// (Public, BlueprintCallable, BlueprintEvent)

void LS_ShelterLevel3Update::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_29()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_29");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LS_ShelterLevel3Update.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_30
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_StreamingRepair_C*            BP_StreamingRepair                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void LS_ShelterLevel3Update::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_30(class ABP_StreamingRepair_C* BP_StreamingRepair)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_30");

	Params::SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_30 Parms{};

	Parms.BP_StreamingRepair = BP_StreamingRepair;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LS_ShelterLevel3Update.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_31
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_StreamingRepair_C*            BP_StreamingRepair                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void LS_ShelterLevel3Update::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_31(class ABP_StreamingRepair_C* BP_StreamingRepair)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_31");

	Params::SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_31 Parms{};

	Parms.BP_StreamingRepair = BP_StreamingRepair;

	UObject::ProcessEvent(Func, &Parms);
}

}
