#pragma once

#include "GPUTextureFormat.h"
#include "GPUDefines.h"

struct ASGI_GPURenderBundleEncoderDescriptor {
	const char* label;
	int numColorFormat;
	ASGI_GPUTextureFormat* colorFormats;
	ASGI_GPUTextureFormat depthStencilFormat;
	ASGI_GPUSize32 sampleCount;
	bool depthReadOnly;
	bool stencilReadOnly;
};