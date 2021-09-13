#include "DirectX12_GPUAdapter.h"
#include "DirectX12_GPUDevice.h"
#include <malloc.h>

ASGI_GPUDevice* dx12RequestDevice(ASGI_GPUAdapter* pAdapter, ASGI_GPUDeviceDescriptor* pDescriptor)
{
	return (ASGI_GPUDevice*)malloc(sizeof(DX12_GPUDevice));
}