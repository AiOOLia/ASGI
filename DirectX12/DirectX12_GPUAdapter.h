#pragma once

#include "../GPUInterface/GPUAdapter.h"

struct DX12_GPUAdapter {
	struct ASGI_GPUAdapter gpuAdapter;
	//
};

ASGI_GPUDevice* dx12RequestDevice(ASGI_GPUAdapter* pAdapter, ASGI_GPUDeviceDescriptor* pDescriptor);
