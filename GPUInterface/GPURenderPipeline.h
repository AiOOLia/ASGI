#pragma once

#include "GPUPipelineBase.h"

struct GPURenderPipeline {
	const char* label;
	struct GPUPipelineBase* pipelineBase;
};