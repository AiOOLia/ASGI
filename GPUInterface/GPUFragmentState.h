#pragma once

#include "GPUShaderModule.h"
#include "GPUColorTargetState.h"
#include "GPUDefines.h"

typedef struct ASGI_GPUFragmentState {
	ASGI_GPUShaderModule* module;
	const char* entryPoint;
	int numConstant;
	const char* const* names;
	ASGI_GPUPipelineConstantValue* values;
	int numTarget;
	ASGI_GPUColorTargetState* targets;
} ASGI_GPUFragmentState;