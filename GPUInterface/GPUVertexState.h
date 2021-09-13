#pragma once

#include "GPUShaderModule.h"
#include "GPUDefines.h"
#include "GPUVertexBufferLayout.h"

struct GPUVertexState {
	GPUShaderModule* module;
	const char* entryPoint;
	int numConstant;
	const char* const* names;
	GPUPipelineConstantValue* values;
	int numBuffer;
	GPUVertexBufferLayout* buffers;
};