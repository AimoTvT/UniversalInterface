# UEAimoPlugins

> - Aimo 虚幻引擎插件(>=5.2)
> - 建议示例,配合插件解析函数来解析
> - 变量,Get
> - 变量,{Set,x}
> - 数据,{变量,{Set,x}}
>
> - ### UniversalInterfaces.h //头文件
>
> - > - FString ICommunication(UObject* Owner, UObject* Object, const FString& String); //函数参数说明
>
> - > - FString ICommunication(UObject* Owner, UObject* Object, const FString& String, UObject\*& ReturnObject); //函数重载 参数说明
>
> - > - 参数解释: Owner //通讯目标
>
> - > - 参数解释: Object //通讯传输实例(可能对方需要的实例)
>
> - > - 参数解释: String //通讯信息
>
> - > - 参数解释: ReturnObject //通讯返回的实例(可能是你需要的实例)
