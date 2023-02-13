// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UniversalInterfaces.generated.h"

/**
 * 
 */
UINTERFACE(MinimalAPI) //UNIVERSALINTERFACE_API 
class UUniversalInterfaces : public UInterface
{
	GENERATED_BODY()

public:

	/** 字符串通用接口返回Object */
	//static FString ICommunications(UObject* Owner, UObject* Object, const FString& String, UObject*& ReturnObject);
	/** 字符串通用接口 */
	//static FString ICommunications(UObject* Owner, UObject* Object, const FString& String);
};

/**
 *
 */
class UNIVERSALINTERFACE_API IUniversalInterfaces
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Aimo|Interface")
		/** 字符串通用接口 */
		FString ICommunication(UObject* Object, const FString& String, UObject*& ReturnObject);
		/** 字符串通用接口 */
		virtual FString ICommunication_Implementation(UObject* Object, const FString& String, UObject*& ReturnObject);

};

UCLASS(Blueprintable)
class UNIVERSALINTERFACE_API UUniversalInterfacesStatic : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	
	/** 字符串通用接口 */
	static FString ICommunication(UObject* Owner, UObject* Object, const FString& String);

	/** 字符串通用接口返回Object */
	static FString ICommunication(UObject* Owner, UObject* Object, const FString& String, UObject*& ReturnObject);

};