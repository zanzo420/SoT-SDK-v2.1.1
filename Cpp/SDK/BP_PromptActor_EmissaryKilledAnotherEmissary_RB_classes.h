﻿#pragma once

// Name: SoT, Version: 2.1.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PromptActor_EmissaryKilledAnotherEmissary_RB.BP_PromptActor_EmissaryKilledAnotherEmissary_RB_C
// 0x0050 (FullSize[0x04B8] - InheritedSize[0x0468])
class ABP_PromptActor_EmissaryKilledAnotherEmissary_RB_C : public ABP_PromptActorBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0468(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_Prompt_EmissaryKilledAnotherEmissary_C*  PromptCoordinator;                                         // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      PromptCounterAccessKey;                                    // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      Company;                                                   // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<struct FPrioritisedPromptWithHandle>        Prompts;                                                   // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               ExpectedVictimCompanyName;                                 // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              ExpectedVictimCompanies;                                   // 0x04A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PromptActor_EmissaryKilledAnotherEmissary_RB.BP_PromptActor_EmissaryKilledAnotherEmissary_RB_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_PromptActor_EmissaryKilledAnotherEmissary_RB(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif