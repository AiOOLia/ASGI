#pragma once

#include "GPUBindGroupLayout.h"

struct ASGI_GPUPipelineBase {
};

ASGI_GPUBindGroupLayout* asgiGetBindGroupLayout(ASGI_GPUPipelineBase* pPipline, unsigned long index);