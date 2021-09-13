#pragma once

#include "GPUShaderModule.h"
#include "GPUColorTargetState.h"
#include "GPUDefines.h"

struct GPUFragmentState {
	GPUShaderModule* module;
	const char* entryPoint;
	int numConstant;
	const char* const* names;
	GPUPipelineConstantValue* values;
	int numTarget;
	GPUColorTargetState* targets;
};