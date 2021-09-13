#pragma once

#include "GPUPipelineBase.h"

struct GPUComputePipeline {
	const char* label;
	struct GPUPipelineBase* pipelineBase;
};