#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Seq_Tutorial_Intro

#include "Basic.hpp"

#include "Seq_Tutorial_Intro_classes.hpp"
#include "Seq_Tutorial_Intro_parameters.hpp"


namespace SDK
{

// Function Seq_Tutorial_Intro.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Seq_Tutorial_Intro::USequenceDirector_C::ExecuteUbergraph_SequenceDirector(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "ExecuteUbergraph_SequenceDirector");

	Params::SequenceDirector_C_ExecuteUbergraph_SequenceDirector Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Seq_Tutorial_Intro.SequenceDirector_C.WakeUp_ForceFeedback
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACameraActor*                     Intro_Camera_1                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Seq_Tutorial_Intro::USequenceDirector_C::WakeUp_ForceFeedback(class ACameraActor* Intro_Camera_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "WakeUp_ForceFeedback");

	Params::SequenceDirector_C_WakeUp_ForceFeedback Parms{};

	Parms.Intro_Camera_1 = Intro_Camera_1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Seq_Tutorial_Intro.SequenceDirector_C.WakeUpShake
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACameraActor*                     Intro_Camera_1                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Seq_Tutorial_Intro::USequenceDirector_C::WakeUpShake(class ACameraActor* Intro_Camera_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "WakeUpShake");

	Params::SequenceDirector_C_WakeUpShake Parms{};

	Parms.Intro_Camera_1 = Intro_Camera_1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Seq_Tutorial_Intro.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACameraActor*                     Intro_Camera_1                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Seq_Tutorial_Intro::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_0(class ACameraActor* Intro_Camera_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_0");

	Params::SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0 Parms{};

	Parms.Intro_Camera_1 = Intro_Camera_1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Seq_Tutorial_Intro.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACameraActor*                     Intro_Camera_1                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Seq_Tutorial_Intro::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_1(class ACameraActor* Intro_Camera_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_1");

	Params::SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_1 Parms{};

	Parms.Intro_Camera_1 = Intro_Camera_1;

	UObject::ProcessEvent(Func, &Parms);
}

}

