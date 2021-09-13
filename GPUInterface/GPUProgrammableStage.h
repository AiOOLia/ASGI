#pragma once

#include "GPUShaderModule.h"
#include "GPUDefines.h"

struct GPUProgrammableStage {
	GPUShaderModule* module;
	const char* entryPoint;
	int numConstant;
	const char* const* names;
	GPUPipelineConstantValue* values;
};