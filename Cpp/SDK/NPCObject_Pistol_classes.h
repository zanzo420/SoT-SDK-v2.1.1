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

// BlueprintGeneratedClass NPCObject_Pistol.NPCObject_Pistol_C
// 0x0010 (FullSize[0x0440] - InheritedSize[0x0430])
class ANPCObject_Pistol_C : public AActor
{
public:
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NPCObject_Pistol.NPCObject_Pistol_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
