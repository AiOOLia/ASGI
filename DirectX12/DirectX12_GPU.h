#pragma once

#include "../GPUInterface/GPU.h"
#include "DirectX12_GPUAdapter.h"
#include <dxgi.h>

typedef struct DX12_GPU {
	ASGI_GPU gpu;
	//
	IDXGIFactory* pFactory;
} DX12_GPU;
//
DX12_GPU* createDX12GPU();
//
ASGI_GPUAdapter * dx12RequestAdapter(ASGI_GPU * pGpu, ASGI_GPURequestAdapterOptions * pOptions);

ASGI_GPUSwapChain* dx12CreateSwapChain(ASGI_GPU* pGpu, ASGI_GPUSwapChainDescriptor* pDescriptor);