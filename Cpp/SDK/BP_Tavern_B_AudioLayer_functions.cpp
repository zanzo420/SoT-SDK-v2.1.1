﻿// Name: SoT, Version: 2.1.1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_Tavern_B_AudioLayer.BP_Tavern_B_AudioLayer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Tavern_B_AudioLayer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tavern_B_AudioLayer.BP_Tavern_B_AudioLayer_C.UserConstructionScript");

	ABP_Tavern_B_AudioLayer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Tavern_B_AudioLayer.BP_Tavern_B_AudioLayer_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_Tavern_B_AudioLayer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tavern_B_AudioLayer.BP_Tavern_B_AudioLayer_C.ReceiveBeginPlay");

	ABP_Tavern_B_AudioLayer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Tavern_B_AudioLayer.BP_Tavern_B_AudioLayer_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Tavern_B_AudioLayer_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tavern_B_AudioLayer.BP_Tavern_B_AudioLayer_C.ReceiveEndPlay");

	ABP_Tavern_B_AudioLayer_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Tavern_B_AudioLayer.BP_Tavern_B_AudioLayer_C.ExecuteUbergraph_BP_Tavern_B_AudioLayer
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Tavern_B_AudioLayer_C::ExecuteUbergraph_BP_Tavern_B_AudioLayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tavern_B_AudioLayer.BP_Tavern_B_AudioLayer_C.ExecuteUbergraph_BP_Tavern_B_AudioLayer");

	ABP_Tavern_B_AudioLayer_C_ExecuteUbergraph_BP_Tavern_B_AudioLayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
