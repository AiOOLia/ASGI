#include "DirectX12_GPU.h"
#include <malloc.h>

#pragma comment(lib, "dxgi.lib")

DX12_GPU* createDX12GPU()
{
	DX12_GPU* pGpu = (DX12_GPU*)malloc(sizeof(DX12_GPU));
	pGpu->gpu.apiType = 1;
	pGpu->gpu.name = NULL;
	HRESULT hr = CreateDXGIFactory(__uuidof(IDXGIFactory), (void**)(&pGpu->pFactory));
	//
	return pGpu;
}

ASGI_GPUAdapter* dx12RequestAdapter(ASGI_GPU* pGpu, ASGI_GPURequestAdapterOptions* pOptions)
{
	DX12_GPU* pDxGpu = (DX12_GPU*)pGpu;
	//
	return (ASGI_GPUAdapter*)malloc(sizeof(DX12_GPUAdapter));
}

ASGI_GPUSwapChain* dx12CreateSwapChain(ASGI_GPU* pGpu, ASGI_GPUSwapChainDescriptor* pDescriptor)
{
	DX12_GPU* pDxGpu = (DX12_GPU*)pGpu;
	//
	return 0;
}