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

// BlueprintGeneratedClass BP_ShipStorageBarrelTwo.BP_ShipStorageBarrelTwo_C
// 0x0008 (FullSize[0x0438] - InheritedSize[0x0430])
class ABP_ShipStorageBarrelTwo_C : public AActor
{
public:
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShipStorageBarrelTwo.BP_ShipStorageBarrelTwo_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
