#pragma once

#include "GPUDeviceDescriptor.h"
#include "GPUDevice.h"

struct GPUAdapter {
	const char* name;
	GPUSupportedFeatures features;
	GPUSupportedLimits limits;
	bool isFallbackAdapter;
};

GPUDevice* requestDevice (GPUAdapter* pAdapter, GPUDeviceDescriptor* descriptor);
