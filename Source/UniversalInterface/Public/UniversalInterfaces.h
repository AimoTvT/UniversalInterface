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

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "UniversalInterfaces.generated.h"

 /** *
  *
  */
UINTERFACE(MinimalAPI) //UNIVERSALINTERFACE_API 
class UUniversalInterfaces : public UInterface
{
	GENERATED_BODY()

public:

};

/** *
 *
 */
class UNIVERSALINTERFACE_API IUniversalInterfaces
{
	GENERATED_BODY()

public:

	/** * 字符串通用接口 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Aimo|Interface")
	FString ICommunication(UObject* InObject, const FString& InString, UObject*& InReturnObject);
	/** * 字符串通用接口 */
	virtual FString ICommunication_Implementation(UObject* InObject, const FString& InString, UObject*& InReturnObject);


	/** * 使用通用接口 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Aimo|Interface")
	uint8 IUse(UObject* InObject, const FString& InString, uint8 InUseIndex);
	/** * 使用通用接口 */
	virtual uint8 IUse_Implementation(UObject* InObject, const FString& InUseString, uint8 InUseIndex);

};

UCLASS(Blueprintable)
class UNIVERSALINTERFACE_API UUniversalInterfacesStatic : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	/** * 字符串通用接口 */
	static FString ICommunication(UObject* Owner, UObject* InObject, const FString& InString);

	/** * 字符串通用接口返回 Object */
	static FString ICommunication(UObject* Owner, UObject* InObject, const FString& InString, UObject*& InReturnObject);

	/** * 使用通用接口 */
	static uint8 IUse(UObject* Owner, UObject* InObject, const FString& InUseString, uint8 InUseIndex);

};