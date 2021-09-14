#include "DirectX12_GPU.h"
#include <malloc.h>

ASGI_GPUAdapter* dx12RequestAdapter(ASGI_GPU* pGpu, ASGI_GPURequestAdapterOptions* pOptions)
{
	DX12_GPU* pDxGpu = (DX12_GPU*)pGpu;
	//
	return (ASGI_GPUAdapter*)malloc(sizeof(DX12_GPUAdapter));
}