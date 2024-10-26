#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_TicTacToe

#include "Basic.hpp"

#include "UI_TicTacToe_classes.hpp"
#include "UI_TicTacToe_parameters.hpp"


namespace SDK
{

// Function UI_TicTacToe.UI_TicTacToe_C.ExecuteUbergraph_UI_TicTacToe
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TicTacToe_C::ExecuteUbergraph_UI_TicTacToe(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TicTacToe_C", "ExecuteUbergraph_UI_TicTacToe");

	Params::UI_TicTacToe_C_ExecuteUbergraph_UI_TicTacToe Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_TicTacToe.UI_TicTacToe_C.BndEvt__TipPlay_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_TicTacToe_C::BndEvt__TipPlay_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TicTacToe_C", "BndEvt__TipPlay_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_TicTacToe.UI_TicTacToe_C.BndEvt__TipClose_K2Node_ComponentBoundEvent_5_OnActionPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_TicTacToe_C::BndEvt__TipClose_K2Node_ComponentBoundEvent_5_OnActionPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TicTacToe_C", "BndEvt__TipClose_K2Node_ComponentBoundEvent_5_OnActionPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_TicTacToe.UI_TicTacToe_C.OnPlayerMove
// (BlueprintCallable, BlueprintEvent)

void UUI_TicTacToe_C::OnPlayerMove()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TicTacToe_C", "OnPlayerMove");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_TicTacToe.UI_TicTacToe_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_TicTacToe_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TicTacToe_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_TicTacToe.UI_TicTacToe_C.Juice_Rand
// (BlueprintCallable, BlueprintEvent)

void UUI_TicTacToe_C::Juice_Rand()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TicTacToe_C", "Juice_Rand");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_TicTacToe.UI_TicTacToe_C.Juice_O
// (BlueprintCallable, BlueprintEvent)

void UUI_TicTacToe_C::Juice_O()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TicTacToe_C", "Juice_O");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_TicTacToe.UI_TicTacToe_C.Juice_X
// (BlueprintCallable, BlueprintEvent)

void UUI_TicTacToe_C::Juice_X()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TicTacToe_C", "Juice_X");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_TicTacToe.UI_TicTacToe_C.Juice_1
// (BlueprintCallable, BlueprintEvent)

void UUI_TicTacToe_C::Juice_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TicTacToe_C", "Juice_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_TicTacToe.UI_TicTacToe_C.Juice_0
// (BlueprintCallable, BlueprintEvent)

void UUI_TicTacToe_C::Juice_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TicTacToe_C", "Juice_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_TicTacToe.UI_TicTacToe_C.IndexToCoords
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Row                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Col                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TicTacToe_C::IndexToCoords(int32 Index_0, int32* Row, int32* Col)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TicTacToe_C", "IndexToCoords");

	Params::UI_TicTacToe_C_IndexToCoords Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);

	if (Row != nullptr)
		*Row = Parms.Row;

	if (Col != nullptr)
		*Col = Parms.Col;
}


// Function UI_TicTacToe.UI_TicTacToe_C.CoordsToIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Row                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Col                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Index_0                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TicTacToe_C::CoordsToIndex(int32 Row, int32 Col, int32* Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TicTacToe_C", "CoordsToIndex");

	Params::UI_TicTacToe_C_CoordsToIndex Parms{};

	Parms.Row = Row;
	Parms.Col = Col;

	UObject::ProcessEvent(Func, &Parms);

	if (Index_0 != nullptr)
		*Index_0 = Parms.Index_0;
}


// Function UI_TicTacToe.UI_TicTacToe_C.MakeMoveAt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   LastMove                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TicTacToe_C::MakeMoveAt(int32 LastMove)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TicTacToe_C", "MakeMoveAt");

	Params::UI_TicTacToe_C_MakeMoveAt Parms{};

	Parms.LastMove = LastMove;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_TicTacToe.UI_TicTacToe_C.UpdateBoard
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_TicTacToe_C::UpdateBoard()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TicTacToe_C", "UpdateBoard");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_TicTacToe.UI_TicTacToe_C.RunAI
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<E_TTT_SquareStates>              CurrentState                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   LastMove                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_TTT_SquareStates                      CPUtype                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RecursionDepth                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SelectedMove                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Score                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TicTacToe_C::RunAI(TArray<E_TTT_SquareStates>& CurrentState, int32 LastMove, E_TTT_SquareStates CPUtype, int32 RecursionDepth, int32* SelectedMove, float* Score)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TicTacToe_C", "RunAI");

	Params::UI_TicTacToe_C_RunAI Parms{};

	Parms.CurrentState = std::move(CurrentState);
	Parms.LastMove = LastMove;
	Parms.CPUtype = CPUtype;
	Parms.RecursionDepth = RecursionDepth;

	UObject::ProcessEvent(Func, &Parms);

	CurrentState = std::move(Parms.CurrentState);

	if (SelectedMove != nullptr)
		*SelectedMove = Parms.SelectedMove;

	if (Score != nullptr)
		*Score = Parms.Score;
}


// Function UI_TicTacToe.UI_TicTacToe_C.FindEmptySquaresNear
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<E_TTT_SquareStates>              CurrentState                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<int32>                           EmptyIndices                                           (Parm, OutParm)

void UUI_TicTacToe_C::FindEmptySquaresNear(TArray<E_TTT_SquareStates>& CurrentState, TArray<int32>* EmptyIndices)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TicTacToe_C", "FindEmptySquaresNear");

	Params::UI_TicTacToe_C_FindEmptySquaresNear Parms{};

	Parms.CurrentState = std::move(CurrentState);

	UObject::ProcessEvent(Func, &Parms);

	CurrentState = std::move(Parms.CurrentState);

	if (EmptyIndices != nullptr)
		*EmptyIndices = std::move(Parms.EmptyIndices);
}


// Function UI_TicTacToe.UI_TicTacToe_C.EvaluateBoard
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<E_TTT_SquareStates>              Board_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                                   Score                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TicTacToe_C::EvaluateBoard(TArray<E_TTT_SquareStates>& Board_0, float* Score)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TicTacToe_C", "EvaluateBoard");

	Params::UI_TicTacToe_C_EvaluateBoard Parms{};

	Parms.Board_0 = std::move(Board_0);

	UObject::ProcessEvent(Func, &Parms);

	Board_0 = std::move(Parms.Board_0);

	if (Score != nullptr)
		*Score = Parms.Score;
}


// Function UI_TicTacToe.UI_TicTacToe_C.CountInDir
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<E_TTT_SquareStates>              Board_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   DirX                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   DirY                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Count                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bLocked                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_TicTacToe_C::CountInDir(TArray<E_TTT_SquareStates>& Board_0, int32 Index_0, int32 DirX, int32 DirY, int32* Count, bool* bLocked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TicTacToe_C", "CountInDir");

	Params::UI_TicTacToe_C_CountInDir Parms{};

	Parms.Board_0 = std::move(Board_0);
	Parms.Index_0 = Index_0;
	Parms.DirX = DirX;
	Parms.DirY = DirY;

	UObject::ProcessEvent(Func, &Parms);

	Board_0 = std::move(Parms.Board_0);

	if (Count != nullptr)
		*Count = Parms.Count;

	if (bLocked != nullptr)
		*bLocked = Parms.bLocked;
}


// Function UI_TicTacToe.UI_TicTacToe_C.CountInRow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<E_TTT_SquareStates>              Board_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Hori                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Blocked1H                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Blocked2H                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Vert                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Blocked1V                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Blocked2v                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   DiagA                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Blocked1A                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Blocked2A                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   DiagB                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Blocked1B                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Blocked2B                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_TicTacToe_C::CountInRow(TArray<E_TTT_SquareStates>& Board_0, int32 Index_0, int32* Hori, bool* Blocked1H, bool* Blocked2H, int32* Vert, bool* Blocked1V, bool* Blocked2v, int32* DiagA, bool* Blocked1A, bool* Blocked2A, int32* DiagB, bool* Blocked1B, bool* Blocked2B)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TicTacToe_C", "CountInRow");

	Params::UI_TicTacToe_C_CountInRow Parms{};

	Parms.Board_0 = std::move(Board_0);
	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);

	Board_0 = std::move(Parms.Board_0);

	if (Hori != nullptr)
		*Hori = Parms.Hori;

	if (Blocked1H != nullptr)
		*Blocked1H = Parms.Blocked1H;

	if (Blocked2H != nullptr)
		*Blocked2H = Parms.Blocked2H;

	if (Vert != nullptr)
		*Vert = Parms.Vert;

	if (Blocked1V != nullptr)
		*Blocked1V = Parms.Blocked1V;

	if (Blocked2v != nullptr)
		*Blocked2v = Parms.Blocked2v;

	if (DiagA != nullptr)
		*DiagA = Parms.DiagA;

	if (Blocked1A != nullptr)
		*Blocked1A = Parms.Blocked1A;

	if (Blocked2A != nullptr)
		*Blocked2A = Parms.Blocked2A;

	if (DiagB != nullptr)
		*DiagB = Parms.DiagB;

	if (Blocked1B != nullptr)
		*Blocked1B = Parms.Blocked1B;

	if (Blocked2B != nullptr)
		*Blocked2B = Parms.Blocked2B;
}


// Function UI_TicTacToe.UI_TicTacToe_C.TestAndMarkWinner
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<E_TTT_SquareStates>              GameState_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// E_TTT_SquareStates                      Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   LastMove                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsWinner                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsDraw                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_TicTacToe_C::TestAndMarkWinner(TArray<E_TTT_SquareStates>& GameState_0, E_TTT_SquareStates Player, int32 LastMove, bool* IsWinner, bool* IsDraw)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TicTacToe_C", "TestAndMarkWinner");

	Params::UI_TicTacToe_C_TestAndMarkWinner Parms{};

	Parms.GameState_0 = std::move(GameState_0);
	Parms.Player = Player;
	Parms.LastMove = LastMove;

	UObject::ProcessEvent(Func, &Parms);

	GameState_0 = std::move(Parms.GameState_0);

	if (IsWinner != nullptr)
		*IsWinner = Parms.IsWinner;

	if (IsDraw != nullptr)
		*IsDraw = Parms.IsDraw;
}


// Function UI_TicTacToe.UI_TicTacToe_C.MarkWinnerInDir
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<E_TTT_SquareStates>              Board_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   DirX                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   DirY                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_TTT_SquareStates                      OldType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_TTT_SquareStates                      WinningType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TicTacToe_C::MarkWinnerInDir(TArray<E_TTT_SquareStates>& Board_0, int32 Index_0, int32 DirX, int32 DirY, E_TTT_SquareStates OldType, E_TTT_SquareStates WinningType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TicTacToe_C", "MarkWinnerInDir");

	Params::UI_TicTacToe_C_MarkWinnerInDir Parms{};

	Parms.Board_0 = std::move(Board_0);
	Parms.Index_0 = Index_0;
	Parms.DirX = DirX;
	Parms.DirY = DirY;
	Parms.OldType = OldType;
	Parms.WinningType = WinningType;

	UObject::ProcessEvent(Func, &Parms);

	Board_0 = std::move(Parms.Board_0);
}


// Function UI_TicTacToe.UI_TicTacToe_C.EvaluateBoardBySearching
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<E_TTT_SquareStates>              Board_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   Depth                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   LastMove                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_TTT_SquareStates                      Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Score                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TicTacToe_C::EvaluateBoardBySearching(TArray<E_TTT_SquareStates>& Board_0, int32 Depth, int32 LastMove, E_TTT_SquareStates Type, float* Score)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TicTacToe_C", "EvaluateBoardBySearching");

	Params::UI_TicTacToe_C_EvaluateBoardBySearching Parms{};

	Parms.Board_0 = std::move(Board_0);
	Parms.Depth = Depth;
	Parms.LastMove = LastMove;
	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

	Board_0 = std::move(Parms.Board_0);

	if (Score != nullptr)
		*Score = Parms.Score;
}


// Function UI_TicTacToe.UI_TicTacToe_C.FillBoard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SizeX_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SizeY_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TicTacToe_C::FillBoard(int32 SizeX_0, int32 SizeY_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TicTacToe_C", "FillBoard");

	Params::UI_TicTacToe_C_FillBoard Parms{};

	Parms.SizeX_0 = SizeX_0;
	Parms.SizeY_0 = SizeY_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_TicTacToe.UI_TicTacToe_C.ResizeBoard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SizeX_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SizeY_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TicTacToe_C::ResizeBoard(int32 SizeX_0, int32 SizeY_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TicTacToe_C", "ResizeBoard");

	Params::UI_TicTacToe_C_ResizeBoard Parms{};

	Parms.SizeX_0 = SizeX_0;
	Parms.SizeY_0 = SizeY_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_TicTacToe.UI_TicTacToe_C.UpdateIndicators
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_TicTacToe_C::UpdateIndicators()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TicTacToe_C", "UpdateIndicators");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_TicTacToe.UI_TicTacToe_C.ConvertBoardToStrings
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<E_TTT_SquareStates>              Array                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   SizeX_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SizeY_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>                   All                                                    (Parm, OutParm)

void UUI_TicTacToe_C::ConvertBoardToStrings(TArray<E_TTT_SquareStates>& Array, int32 SizeX_0, int32 SizeY_0, TArray<class FString>* All)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TicTacToe_C", "ConvertBoardToStrings");

	Params::UI_TicTacToe_C_ConvertBoardToStrings Parms{};

	Parms.Array = std::move(Array);
	Parms.SizeX_0 = SizeX_0;
	Parms.SizeY_0 = SizeY_0;

	UObject::ProcessEvent(Func, &Parms);

	Array = std::move(Parms.Array);

	if (All != nullptr)
		*All = std::move(Parms.All);
}


// Function UI_TicTacToe.UI_TicTacToe_C.CountOfSubstrings
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           SourceString                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           SearchText                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UUI_TicTacToe_C::CountOfSubstrings(const class FString& SourceString, const class FString& SearchText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TicTacToe_C", "CountOfSubstrings");

	Params::UI_TicTacToe_C_CountOfSubstrings Parms{};

	Parms.SourceString = std::move(SourceString);
	Parms.SearchText = std::move(SearchText);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_TicTacToe.UI_TicTacToe_C.PregenerateScoreTable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_TicTacToe_C::PregenerateScoreTable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TicTacToe_C", "PregenerateScoreTable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_TicTacToe.UI_TicTacToe_C.FinishLog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    PlayerWin                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    AIWin                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_TicTacToe_C::FinishLog(bool PlayerWin, bool AIWin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TicTacToe_C", "FinishLog");

	Params::UI_TicTacToe_C_FinishLog Parms{};

	Parms.PlayerWin = PlayerWin;
	Parms.AIWin = AIWin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_TicTacToe.UI_TicTacToe_C.FinishGame
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    PlayerWin                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    AIWin                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_TicTacToe_C::FinishGame(bool PlayerWin, bool AIWin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TicTacToe_C", "FinishGame");

	Params::UI_TicTacToe_C_FinishGame Parms{};

	Parms.PlayerWin = PlayerWin;
	Parms.AIWin = AIWin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_TicTacToe.UI_TicTacToe_C.PlayJuice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Variant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TicTacToe_C::PlayJuice(int32 Variant)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TicTacToe_C", "PlayJuice");

	Params::UI_TicTacToe_C_PlayJuice Parms{};

	Parms.Variant = Variant;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_TicTacToe.UI_TicTacToe_C.StopJuice
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_TicTacToe_C::StopJuice()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TicTacToe_C", "StopJuice");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_TicTacToe.UI_TicTacToe_C.UpdateBoard_Juice
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_TicTacToe_C::UpdateBoard_Juice()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TicTacToe_C", "UpdateBoard_Juice");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_TicTacToe.UI_TicTacToe_C.Test4InRow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<E_TTT_SquareStates>              GameState_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   LastMove                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TicTacToe_C::Test4InRow(TArray<E_TTT_SquareStates>& GameState_0, int32 LastMove)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TicTacToe_C", "Test4InRow");

	Params::UI_TicTacToe_C_Test4InRow Parms{};

	Parms.GameState_0 = std::move(GameState_0);
	Parms.LastMove = LastMove;

	UObject::ProcessEvent(Func, &Parms);

	GameState_0 = std::move(Parms.GameState_0);
}

}

