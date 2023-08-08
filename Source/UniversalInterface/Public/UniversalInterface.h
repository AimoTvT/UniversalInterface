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

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FUniversalInterfaceModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
