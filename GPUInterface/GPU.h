#pragma once

#include "GPURequestAdapterOptions.h"
#include "GPUAdapter.h"

struct ASGI_GPU {
};

ASGI_GPUAdapter* asgiRequestAdapter(ASGI_GPU* pGpu, ASGI_GPURequestAdapterOptions* pOptions);