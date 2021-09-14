#pragma once

#include "GPUShaderModule.h"
#include "GPUDefines.h"

typedef struct ASGI_GPUProgrammableStage {
	ASGI_GPUShaderModule* module;
	const char* entryPoint;
	int numConstant;
	const char* const* names;
	ASGI_GPUPipelineConstantValue* values;
} ASGI_GPUProgrammableStage;