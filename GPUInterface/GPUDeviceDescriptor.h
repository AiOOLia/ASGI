#pragma once

#include "GPUSupportedFeatures.h"
#include "GPUSupportedLimits.h"
struct GPUDeviceDescriptor {
	const char* label;
	GPUSupportedFeatures requiredFeatures;
	GPUSupportedLimits requiredLimits;
};