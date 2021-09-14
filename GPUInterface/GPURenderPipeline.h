#pragma once

#include "GPUPipelineBase.h"

typedef struct ASGI_GPURenderPipeline {
	const char* label;
	struct ASGI_GPUPipelineBase* pipelineBase;
} ASGI_GPURenderPipeline;