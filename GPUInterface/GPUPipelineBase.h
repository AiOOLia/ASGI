#pragma once

#include "GPUBindGroupLayout.h"

typedef struct ASGI_GPUPipelineBase {
	int type;
} ASGI_GPUPipelineBase;

ASGI_GPUBindGroupLayout* asgiGetBindGroupLayout(ASGI_GPUPipelineBase* pPipline, unsigned long index);