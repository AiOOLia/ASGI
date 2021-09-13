#pragma once


#include "GPUCompilationInfo.h"

struct ASGI_GPUShaderModule {
	const char* label;
};

ASGI_GPUCompilationInfo* asgiCompilationInfo(ASGI_GPUShaderModule* pShaderModule);