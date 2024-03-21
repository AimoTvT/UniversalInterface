/** *
 * Copyright: Aimo_皑墨
 * Open Source: June 29, 2023
 * making address: https://github.com/AimoTvT/UniversalInterface
 * We welcome the contributions of powerful movers and movers to join this plugin
 * Build powerful plugins together!!!
 *
 * 版权所有权: Aimo_皑墨
 * 开源时间: 2023年6月29号
 * GitHub地址: https://github.com/AimoTvT/UniversalInterface
 * 欢迎有实力的大佬/萌新加入本插件的贡献
 * 一起打造强大的插件!!!
 */


#include "UniversalInterfaces.h"
#include "Kismet/BlueprintFunctionLibrary.h"

FString IUniversalInterfaces::ICommunication_Implementation(UObject* InObject, const FString& InString, UObject*& InReturnObject)
{
	return FString();
}

uint8 IUniversalInterfaces::IUse_Implementation(UObject* InObject, const FString& InUseString, uint8 InUseIndex)
{
	return uint8();
}


FString UUniversalInterfacesStatic::ICommunication(UObject* Owner, UObject* InObject, const FString& InString)
{
	if (Owner && Owner->GetClass()->ImplementsInterface(UUniversalInterfaces::StaticClass()))
	{
		return IUniversalInterfaces::Execute_ICommunication(Owner, InObject, InString, InObject);
	}
	return FString();
}

FString UUniversalInterfacesStatic::ICommunication(UObject* Owner, UObject* InObject, const FString& InString, UObject*& InReturnObject)
{
	if (Owner && Owner->GetClass()->ImplementsInterface(UUniversalInterfaces::StaticClass()))
	{
		return IUniversalInterfaces::Execute_ICommunication(Owner, InObject, InString, InReturnObject);
	}
	return FString();
}

uint8 UUniversalInterfacesStatic::IUse(UObject* Owner, UObject* InObject, const FString& InUseString, uint8 InUseIndex)
{
	if (Owner && Owner->GetClass()->ImplementsInterface(UUniversalInterfaces::StaticClass()))
	{
		return IUniversalInterfaces::Execute_IUse(Owner, InObject, InUseString, InUseIndex);
	}
	return uint8();
}