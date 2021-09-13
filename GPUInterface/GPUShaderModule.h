#pragma once


#include "GPUCompilationInfo.h"

struct GPUShaderModule {
	const char* label;
};

GPUCompilationInfo* compilationInfo(GPUShaderModule* shader_module);