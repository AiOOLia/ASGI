#pragma once

#include "GPUPipelineBase.h"

typedef struct ASGI_GPUComputePipeline {
	const char* label;
	struct ASGI_GPUPipelineBase* pipelineBase;
} ASGI_GPUComputePipeline;