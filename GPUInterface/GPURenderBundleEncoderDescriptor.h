#pragma once

#include "GPUTextureFormat.h"
#include "GPUDefines.h"

struct GPURenderBundleEncoderDescriptor {
	const char* label;
	int numColorFormat;
	GPUTextureFormat* colorFormats;
	GPUTextureFormat depthStencilFormat;
	GPUSize32 sampleCount;
	bool depthReadOnly;
	bool stencilReadOnly;
};