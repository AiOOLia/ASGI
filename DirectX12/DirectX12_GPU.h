#pragma once

#include "../GPUInterface/GPU.h"
#include "DirectX12_GPUAdapter.h"

typedef struct DX12_GPU {
	ASGI_GPU gpu;
	//
} DX12_GPU;
//
ASGI_GPUAdapter* dx12RequestAdapter(ASGI_GPU* pGpu, ASGI_GPURequestAdapterOptions* pOptions);