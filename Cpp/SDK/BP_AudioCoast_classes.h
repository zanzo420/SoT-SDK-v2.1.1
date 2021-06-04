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

// BlueprintGeneratedClass BP_AudioCoast.BP_AudioCoast_C
// 0x0024 (FullSize[0x0454] - InheritedSize[0x0430])
class ABP_AudioCoast_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0430(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USplineComponent*                            SplineInner;                                               // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USplineComponent*                            SplineCoast;                                               // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             Scene;                                                     // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	struct FBlueprintableIntegerHandle                 Handle;                                                    // 0x0450(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AudioCoast.BP_AudioCoast_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_AudioCoast(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
