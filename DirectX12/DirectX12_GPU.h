#pragma once

#include "../GPUInterface/GPU.h"

struct DX12_GPU {
	struct ASGI_GPU gpu;
	//
};
//
ASGI_GPUAdapter* dx12RequestAdapter(ASGI_GPU* pGpu, ASGI_GPURequestAdapterOptions* pOptions);