// Fill out your copyright notice in the Description page of Project Settings.


#include "UniversalInterfaces.h"
#include "Kismet/BlueprintFunctionLibrary.h"

FString IUniversalInterfaces::ICommunication_Implementation(UObject* Object, const FString& String, UObject*& ReturnObject)
{
	return "Null";
}


FString UUniversalInterfacesStatic::ICommunication(UObject* Owner, UObject* Object, const FString& String)
{

	if (Owner && Owner->GetClass()->ImplementsInterface(UUniversalInterfaces::StaticClass()))
	{
		UObject* GObject = nullptr;
		return IUniversalInterfaces::Execute_ICommunication(Owner, Object, String, GObject);
	}
	return "Null";
}

FString UUniversalInterfacesStatic::ICommunication(UObject* Owner, UObject* Object, const FString& String, UObject*& ReturnObject)
{
	if (Owner && Owner->GetClass()->ImplementsInterface(UUniversalInterfaces::StaticClass()))
	{
		//IUniversalInterfaces* IObject = Cast<IUniversalInterfaces>(Owner);
		
		return IUniversalInterfaces::Execute_ICommunication(Owner, Object, String, ReturnObject);
	}
	return "Null";
}