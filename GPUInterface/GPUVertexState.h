#pragma once

#include "GPUShaderModule.h"
#include "GPUDefines.h"
#include "GPUVertexBufferLayout.h"

typedef struct ASGI_GPUVertexState {
	ASGI_GPUShaderModule* module;
	const char* entryPoint;
	int numConstant;
	const char* const* names;
	ASGI_GPUPipelineConstantValue* values;
	int numBuffer;
	ASGI_GPUVertexBufferLayout* buffers;
} ASGI_GPUVertexState;