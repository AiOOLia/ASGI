#pragma once

#include "GPUDeviceDescriptor.h"
#include "GPUDevice.h"
#include "GPUSupportedFeatures.h"
#include "GPUSupportedLimits.h"

typedef struct ASGI_GPUAdapter {
	const char* name;
	ASGI_GPUSupportedFeatures features;
	ASGI_GPUSupportedLimits limits;
	BOOL isFallbackAdapter;
} ASGI_GPUAdapter;

ASGI_GPUDevice* asgiRequestDevice (ASGI_GPUAdapter* pAdapter, ASGI_GPUDeviceDescriptor* pDescriptor);
