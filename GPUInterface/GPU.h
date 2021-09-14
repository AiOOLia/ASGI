#pragma once

#include "../Export.h"
#include "GPURequestAdapterOptions.h"
#include "GPUAdapter.h"

typedef struct ASGI_GPU {
	const char* name;
	long apiType;
} ASGI_GPU;

ASGI_API ASGI_GPUAdapter* asgiRequestAdapter(ASGI_GPU* pGpu, ASGI_GPURequestAdapterOptions* pOptions);