#pragma once


#include "GPUCompilationInfo.h"

typedef struct ASGI_GPUShaderModule {
	const char* label;
} ASGI_GPUShaderModule;

ASGI_GPUCompilationInfo* asgiCompilationInfo(ASGI_GPUShaderModule* pShaderModule);