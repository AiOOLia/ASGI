#pragma once

#include "../Export.h"
#include "GPURequestAdapterOptions.h"
#include "GPUAdapter.h"
#include "GPUSwapChain.h"
#include "GPUSwapChainDescriptor.h"

typedef struct ASGI_GPU {
	const char* name;
	long apiType;
} ASGI_GPU;

ASGI_API ASGI_GPUAdapter* asgiRequestAdapter(ASGI_GPU* pGpu, ASGI_GPURequestAdapterOptions* pOptions);

ASGI_API ASGI_GPUSwapChain* asgiCreateSwapChain(ASGI_GPU* pGpu, ASGI_GPUSwapChainDescriptor* pDescriptor);