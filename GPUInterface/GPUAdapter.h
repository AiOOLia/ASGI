#pragma once

#include "GPUDeviceDescriptor.h"
#include "GPUDevice.h"
#include "GPUSupportedFeatures.h"
#include "GPUSupportedLimits.h"

struct ASGI_GPUAdapter {
	const char* name;
	ASGI_GPUSupportedFeatures features;
	ASGI_GPUSupportedLimits limits;
	bool isFallbackAdapter;
};

ASGI_GPUDevice* asgiRequestDevice (ASGI_GPUAdapter* pAdapter, ASGI_GPUDeviceDescriptor* pDescriptor);
