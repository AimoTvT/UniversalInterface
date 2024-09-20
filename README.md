# UEAimoPlugins

 * Plug-in description: A fast and unified interface
 * Copyright: Aimo_皑墨
 * Open Source: June 29, 2023
 * making address: https://github.com/AimoTvT/UniversalInterface
 * We welcome the contributions of powerful movers and movers to join this plugin
 * Build powerful plugins together!!!
 *
 * 插件描述: 一个快捷统一的接口
 * 版权所有权: Aimo_皑墨
 * 开源时间: 2023年6月29号
 * GitHub地址: https://github.com/AimoTvT/UniversalInterface
 * 欢迎有实力的大佬/萌新加入本插件的贡献
 * 一起打造强大的插件!!!

```C++  
	//English version, 中文版本在下面
	#include "UniversalInterfaces.h"

    /** * Generic interface for string
	* InObject // Raises the target
	* InString // instruction
	* InReturnObject // Object to return
	* return // return instruction
	*/
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Aimo|Interface")
    FString ICommunication(UObject* InObject, const FString& InString, UObject*& InReturnObject);
    /** * Generic interface for string */
    virtual FString ICommunication_Implementation(UObject* InObject, const FString& InString, UObject*& InReturnObject);


   /** * Use a common interface
	* InObject // Raises the target
	* InString // instruction
	* InUseIndex // Indicates the shortcut identifier of the directive
	* return // return instruction
	*/
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Aimo|Interface")
    uint8 IUse(UObject* InObject, const FString& InString, uint8 InUseIndex);
    /** * Use a common interface */
    virtual uint8 IUse_Implementation(UObject* InObject, const FString& InUseString, uint8 InUseIndex);


	/** * Generic interface for string
	* Owner // Send target
	* InObject // Raises the target
	* InString // instruction
	* return // return instruction
	*/
	static FString ICommunication(UObject* Owner, UObject* InObject, const FString& InString);

	/** * Generic interface for string
	* InObject // Raises the target
	* InString // instruction
	* InReturnObject // Object to return
	* return // return instruction
	*/
	static FString ICommunication(UObject* Owner, UObject* InObject, const FString& InString, UObject*& InReturnObject);

	/** * Use a common interface
	* Owner // Send target
	* InObject // Raises the target
	* InString // instruction
	* InUseIndex // Indicates the shortcut identifier of the directive
	* return // return instruction
	*/
	static uint8 IUse(UObject* Owner, UObject* InObject, const FString& InUseString, uint8 InUseIndex);
```

```C++ 
	//中文版本
	#include "UniversalInterfaces.h"

    /** * 字符串通用接口
        * InObject //引发的目标
        * InString //指令
        * InReturnObject //需要返回的Object
        * return //返回指令
    */
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Aimo|Interface")
    FString ICommunication(UObject* InObject, const FString& InString, UObject*& InReturnObject);
    /** * 字符串通用接口 */
    virtual FString ICommunication_Implementation(UObject* InObject, const FString& InString, UObject*& InReturnObject);


    /** * 使用通用接口 
        * InObject //引发的目标
        * InString //指令
        * InUseIndex //指令的快捷标识
        * return //返回指令
    */
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Aimo|Interface")
    uint8 IUse(UObject* InObject, const FString& InString, uint8 InUseIndex);
    /** * 使用通用接口 */
    virtual uint8 IUse_Implementation(UObject* InObject, const FString& InUseString, uint8 InUseIndex);



	/** * 字符串通用接口
		* Owner //发送目标
		* InObject //引发的目标
		* InString //指令
		* InReturnObject //需要返回的Object
		* return //返回指令
	*/
	static FString ICommunication(UObject* Owner, UObject* InObject, const FString& InString);

	/** * 字符串通用接口
		* Owner //发送目标
		* InObject //引发的目标
		* InString //指令
		* InReturnObject //需要返回的Object
		* return //返回指令
	*/
	static FString ICommunication(UObject* Owner, UObject* InObject, const FString& InString, UObject*& InReturnObject);

	/** * 使用通用接口
		* Owner //发送目标
		* InObject //引发的目标
		* InString //指令
		* InUseIndex //指令的快捷标识
		* return //返回指令
	*/
	static uint8 IUse(UObject* Owner, UObject* InObject, const FString& InUseString, uint8 InUseIndex);

```
