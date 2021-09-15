#pragma once

#include "../GPUInterface/GPUAdapter.h"
#include "DirectX12_GPUDevice.h"

typedef struct DX12_GPUAdapter {
	ASGI_GPUAdapter gpuAdapter;
	//
} DX12_GPUAdapter;

ASGI_GPUDevice*  dx12RequestDevice(ASGI_GPUAdapter* pAdapter, ASGI_GPUDeviceDescriptor* pDescriptor);
