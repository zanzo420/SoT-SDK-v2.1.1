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

// Function BP_audio_wpn_shop_wld.BP_audio_wpn_shop_wld_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_audio_wpn_shop_wld_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_audio_wpn_shop_wld.BP_audio_wpn_shop_wld_C.UserConstructionScript");

	ABP_audio_wpn_shop_wld_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_audio_wpn_shop_wld.BP_audio_wpn_shop_wld_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_audio_wpn_shop_wld_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_audio_wpn_shop_wld.BP_audio_wpn_shop_wld_C.ReceiveBeginPlay");

	ABP_audio_wpn_shop_wld_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_audio_wpn_shop_wld.BP_audio_wpn_shop_wld_C.ExecuteUbergraph_BP_audio_wpn_shop_wld
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_audio_wpn_shop_wld_C::ExecuteUbergraph_BP_audio_wpn_shop_wld(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_audio_wpn_shop_wld.BP_audio_wpn_shop_wld_C.ExecuteUbergraph_BP_audio_wpn_shop_wld");

	ABP_audio_wpn_shop_wld_C_ExecuteUbergraph_BP_audio_wpn_shop_wld_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
