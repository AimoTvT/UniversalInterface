/**
 * Copyright: Aimo_皑墨
 * Open Source: June 29, 2023
 * making address: https://github.com/AimoTvT/UniversalInterface
 * We welcome the contributions of powerful movers and movers to join this plugin
 * Build powerful plugins together!!
 *
 * 版权所有权: Aimo_皑墨
 * 开源时间: 2023年6月29号
 * GitHub地址: https://github.com/AimoTvT/UniversalInterface
 * 欢迎有实力的大佬/萌新加入本插件的贡献
 * 一起打造强大的插件!!!
 */


#include "UniversalInterfaces.h"
#include "Kismet/BlueprintFunctionLibrary.h"

FString IUniversalInterfaces::ICommunication_Implementation(UObject* Object, const FString& String, UObject*& ReturnObject)
{
	return FString();
}

uint8 IUniversalInterfaces::IUse_Implementation(UObject* Object, const FString& UseString, uint8 UseIndex)
{
	return uint8();
}


FString UUniversalInterfacesStatic::ICommunication(UObject* Owner, UObject* Object, const FString& String)
{
	if (Owner && Owner->GetClass()->ImplementsInterface(UUniversalInterfaces::StaticClass()))
	{
		return IUniversalInterfaces::Execute_ICommunication(Owner, Object, String, Object);
	}
	return FString();
}

FString UUniversalInterfacesStatic::ICommunication(UObject* Owner, UObject* Object, const FString& String, UObject*& ReturnObject)
{
	if (Owner && Owner->GetClass()->ImplementsInterface(UUniversalInterfaces::StaticClass()))
	{
		return IUniversalInterfaces::Execute_ICommunication(Owner, Object, String, ReturnObject);
	}
	return FString();
}

uint8 UUniversalInterfacesStatic::IUse(UObject* Owner, UObject* Object, const FString& UseString, uint8 UseIndex)
{
	if (Owner && Owner->GetClass()->ImplementsInterface(UUniversalInterfaces::StaticClass()))
	{
		return IUniversalInterfaces::Execute_IUse(Owner, Object, UseString, UseIndex);
	}
	return uint8();
}