#pragma once

#include "GPUSupportedFeatures.h"
#include "GPUSupportedLimits.h"

typedef struct ASGI_GPUDeviceDescriptor {
	const char* label;
	ASGI_GPUSupportedFeatures requiredFeatures;
	ASGI_GPUSupportedLimits requiredLimits;
} ASGI_GPUDeviceDescriptor;