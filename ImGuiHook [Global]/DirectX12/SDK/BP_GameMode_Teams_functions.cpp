#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameMode_Teams

#include "Basic.hpp"

#include "BP_GameMode_Teams_classes.hpp"
#include "BP_GameMode_Teams_parameters.hpp"


namespace SDK
{

// Function BP_GameMode_Teams.BP_GameMode_Teams_C.Match Phase Changed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_TeamsMatchPhase                       Old_Phase                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_TeamsMatchPhase                       New_Phase                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameMode_Teams_C::Match_Phase_Changed__DelegateSignature(E_TeamsMatchPhase Old_Phase, E_TeamsMatchPhase New_Phase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Teams_C", "Match Phase Changed__DelegateSignature");

	Params::BP_GameMode_Teams_C_Match_Phase_Changed__DelegateSignature Parms{};

	Parms.Old_Phase = Old_Phase;
	Parms.New_Phase = New_Phase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameMode_Teams.BP_GameMode_Teams_C.ExecuteUbergraph_BP_GameMode_Teams
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameMode_Teams_C::ExecuteUbergraph_BP_GameMode_Teams(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Teams_C", "ExecuteUbergraph_BP_GameMode_Teams");

	Params::BP_GameMode_Teams_C_ExecuteUbergraph_BP_GameMode_Teams Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameMode_Teams.BP_GameMode_Teams_C.SLM Delayed begin play
// (BlueprintCallable, BlueprintEvent)

void ABP_GameMode_Teams_C::SLM_Delayed_begin_play()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Teams_C", "SLM Delayed begin play");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameMode_Teams.BP_GameMode_Teams_C.PostLogin
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*                NewItem                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameMode_Teams_C::PostLogin(const class APlayerController*& NewItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Teams_C", "PostLogin");

	Params::BP_GameMode_Teams_C_PostLogin Parms{};

	Parms.NewItem = NewItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameMode_Teams.BP_GameMode_Teams_C.SubLevelsReturned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    SLM_Load_Complete                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GameMode_Teams_C::SubLevelsReturned(bool SLM_Load_Complete)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Teams_C", "SubLevelsReturned");

	Params::BP_GameMode_Teams_C_SubLevelsReturned Parms{};

	Parms.SLM_Load_Complete = SLM_Load_Complete;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameMode_Teams.BP_GameMode_Teams_C.CheckForSubLevels
// (BlueprintCallable, BlueprintEvent)

void ABP_GameMode_Teams_C::CheckForSubLevels()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Teams_C", "CheckForSubLevels");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameMode_Teams.BP_GameMode_Teams_C.Waiting at Start Expired
// (BlueprintCallable, BlueprintEvent)

void ABP_GameMode_Teams_C::Waiting_at_Start_Expired()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Teams_C", "Waiting at Start Expired");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameMode_Teams.BP_GameMode_Teams_C.Respawn Player
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerController_Teams_C*     Player_Controller                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameMode_Teams_C::Respawn_Player(class ABP_PlayerController_Teams_C* Player_Controller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Teams_C", "Respawn Player");

	Params::BP_GameMode_Teams_C_Respawn_Player Parms{};

	Parms.Player_Controller = Player_Controller;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameMode_Teams.BP_GameMode_Teams_C.K2_OnRestartPlayer
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*                      NewPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameMode_Teams_C::K2_OnRestartPlayer(class AController* NewPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Teams_C", "K2_OnRestartPlayer");

	Params::BP_GameMode_Teams_C_K2_OnRestartPlayer Parms{};

	Parms.NewPlayer = NewPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameMode_Teams.BP_GameMode_Teams_C.Check Loadout Readiness
// (BlueprintCallable, BlueprintEvent)

void ABP_GameMode_Teams_C::Check_Loadout_Readiness()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Teams_C", "Check Loadout Readiness");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameMode_Teams.BP_GameMode_Teams_C.Match Cleanup
// (BlueprintCallable, BlueprintEvent)

void ABP_GameMode_Teams_C::Match_Cleanup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Teams_C", "Match Cleanup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameMode_Teams.BP_GameMode_Teams_C.Match Finish
// (BlueprintCallable, BlueprintEvent)

void ABP_GameMode_Teams_C::Match_Finish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Teams_C", "Match Finish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameMode_Teams.BP_GameMode_Teams_C.Round Cleanup
// (BlueprintCallable, BlueprintEvent)

void ABP_GameMode_Teams_C::Round_Cleanup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Teams_C", "Round Cleanup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameMode_Teams.BP_GameMode_Teams_C.Round Finish
// (BlueprintCallable, BlueprintEvent)

void ABP_GameMode_Teams_C::Round_Finish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Teams_C", "Round Finish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameMode_Teams.BP_GameMode_Teams_C.Round In Progress
// (BlueprintCallable, BlueprintEvent)

void ABP_GameMode_Teams_C::Round_In_Progress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Teams_C", "Round In Progress");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameMode_Teams.BP_GameMode_Teams_C.Round Start
// (BlueprintCallable, BlueprintEvent)

void ABP_GameMode_Teams_C::Round_Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Teams_C", "Round Start");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameMode_Teams.BP_GameMode_Teams_C.Round Initialization
// (BlueprintCallable, BlueprintEvent)

void ABP_GameMode_Teams_C::Round_Initialization()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Teams_C", "Round Initialization");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameMode_Teams.BP_GameMode_Teams_C.Match Start
// (BlueprintCallable, BlueprintEvent)

void ABP_GameMode_Teams_C::Match_Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Teams_C", "Match Start");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameMode_Teams.BP_GameMode_Teams_C.Match Initialization
// (BlueprintCallable, BlueprintEvent)

void ABP_GameMode_Teams_C::Match_Initialization()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Teams_C", "Match Initialization");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameMode_Teams.BP_GameMode_Teams_C.On Match Phase Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// E_TeamsMatchPhase                       Old_Phase                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_TeamsMatchPhase                       New_Phase                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameMode_Teams_C::On_Match_Phase_Changed(E_TeamsMatchPhase Old_Phase, E_TeamsMatchPhase New_Phase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Teams_C", "On Match Phase Changed");

	Params::BP_GameMode_Teams_C_On_Match_Phase_Changed Parms{};

	Parms.Old_Phase = Old_Phase;
	Parms.New_Phase = New_Phase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameMode_Teams.BP_GameMode_Teams_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameMode_Teams_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Teams_C", "ReceiveTick");

	Params::BP_GameMode_Teams_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameMode_Teams.BP_GameMode_Teams_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GameMode_Teams_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Teams_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameMode_Teams.BP_GameMode_Teams_C.K2_OnSetMatchState
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FName                             NewState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameMode_Teams_C::K2_OnSetMatchState(class FName NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Teams_C", "K2_OnSetMatchState");

	Params::BP_GameMode_Teams_C_K2_OnSetMatchState Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameMode_Teams.BP_GameMode_Teams_C.K2_PostLogin
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*                NewPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameMode_Teams_C::K2_PostLogin(class APlayerController* NewPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Teams_C", "K2_PostLogin");

	Params::BP_GameMode_Teams_C_K2_PostLogin Parms{};

	Parms.NewPlayer = NewPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameMode_Teams.BP_GameMode_Teams_C.ChoosePlayerStart
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                      Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AActor* ABP_GameMode_Teams_C::ChoosePlayerStart(class AController* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Teams_C", "ChoosePlayerStart");

	Params::BP_GameMode_Teams_C_ChoosePlayerStart Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_GameMode_Teams.BP_GameMode_Teams_C.ReadyToStartMatch
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_GameMode_Teams_C::ReadyToStartMatch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Teams_C", "ReadyToStartMatch");

	Params::BP_GameMode_Teams_C_ReadyToStartMatch Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_GameMode_Teams.BP_GameMode_Teams_C.Get Sides
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FName>                     Sides_0                                                (Parm, OutParm)

void ABP_GameMode_Teams_C::Get_Sides(TArray<class FName>* Sides_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Teams_C", "Get Sides");

	Params::BP_GameMode_Teams_C_Get_Sides Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Sides_0 != nullptr)
		*Sides_0 = std::move(Parms.Sides_0);
}


// Function BP_GameMode_Teams.BP_GameMode_Teams_C.Get Sides Count
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ABP_GameMode_Teams_C::Get_Sides_Count()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Teams_C", "Get Sides Count");

	Params::BP_GameMode_Teams_C_Get_Sides_Count Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_GameMode_Teams.BP_GameMode_Teams_C.Store Initial Loadouts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_GameMode_Teams_C::Store_Initial_Loadouts()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Teams_C", "Store Initial Loadouts");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameMode_Teams.BP_GameMode_Teams_C.Request Transition to Phase
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_TeamsMatchPhase                       New_Phase                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GameMode_Teams_C::Request_Transition_to_Phase(E_TeamsMatchPhase New_Phase, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Teams_C", "Request Transition to Phase");

	Params::BP_GameMode_Teams_C_Request_Transition_to_Phase Parms{};

	Parms.New_Phase = New_Phase;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function BP_GameMode_Teams.BP_GameMode_Teams_C.Request Transition to Next Phase
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GameMode_Teams_C::Request_Transition_to_Next_Phase(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Teams_C", "Request Transition to Next Phase");

	Params::BP_GameMode_Teams_C_Request_Transition_to_Next_Phase Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function BP_GameMode_Teams.BP_GameMode_Teams_C.Is Match Phase Transition Valid
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_TeamsMatchPhase                       From                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_TeamsMatchPhase                       To                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Transition_Valid                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GameMode_Teams_C::Is_Match_Phase_Transition_Valid(E_TeamsMatchPhase From, E_TeamsMatchPhase To, bool* Transition_Valid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Teams_C", "Is Match Phase Transition Valid");

	Params::BP_GameMode_Teams_C_Is_Match_Phase_Transition_Valid Parms{};

	Parms.From = From;
	Parms.To = To;

	UObject::ProcessEvent(Func, &Parms);

	if (Transition_Valid != nullptr)
		*Transition_Valid = Parms.Transition_Valid;
}


// Function BP_GameMode_Teams.BP_GameMode_Teams_C.Change Phase
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Phase_Changed                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GameMode_Teams_C::Change_Phase(bool* Phase_Changed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Teams_C", "Change Phase");

	Params::BP_GameMode_Teams_C_Change_Phase Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Phase_Changed != nullptr)
		*Phase_Changed = Parms.Phase_Changed;
}


// Function BP_GameMode_Teams.BP_GameMode_Teams_C.ReadyToEndMatch
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_GameMode_Teams_C::ReadyToEndMatch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Teams_C", "ReadyToEndMatch");

	Params::BP_GameMode_Teams_C_ReadyToEndMatch Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_GameMode_Teams.BP_GameMode_Teams_C.Are Loadouts Loaded
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Loadouts_Loaded                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GameMode_Teams_C::Are_Loadouts_Loaded(bool* Loadouts_Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Teams_C", "Are Loadouts Loaded");

	Params::BP_GameMode_Teams_C_Are_Loadouts_Loaded Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Loadouts_Loaded != nullptr)
		*Loadouts_Loaded = Parms.Loadouts_Loaded;
}


// Function BP_GameMode_Teams.BP_GameMode_Teams_C.PlayerCanRestart
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*                Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_GameMode_Teams_C::PlayerCanRestart(class APlayerController* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_Teams_C", "PlayerCanRestart");

	Params::BP_GameMode_Teams_C_PlayerCanRestart Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

