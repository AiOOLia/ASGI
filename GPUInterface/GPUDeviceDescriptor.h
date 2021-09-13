#pragma once

#include "GPUSupportedFeatures.h"
#include "GPUSupportedLimits.h"

struct ASGI_GPUDeviceDescriptor {
	const char* label;
	ASGI_GPUSupportedFeatures requiredFeatures;
	ASGI_GPUSupportedLimits requiredLimits;
};