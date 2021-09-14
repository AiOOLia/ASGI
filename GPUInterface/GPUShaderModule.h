#pragma once

#include "../Export.h"
#include "GPUCompilationInfo.h"

typedef struct ASGI_GPUShaderModule {
	const char* label;
} ASGI_GPUShaderModule;

ASGI_API ASGI_GPUCompilationInfo* asgiCompilationInfo(ASGI_GPUShaderModule* pShaderModule);