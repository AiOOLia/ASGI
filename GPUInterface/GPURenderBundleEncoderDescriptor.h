#pragma once

#include "GPUTextureFormat.h"
#include "GPUDefines.h"

typedef struct ASGI_GPURenderBundleEncoderDescriptor {
	const char* label;
	int numColorFormat;
	ASGI_GPUTextureFormat* colorFormats;
	ASGI_GPUTextureFormat depthStencilFormat;
	ASGI_GPUSize32 sampleCount;
	BOOL depthReadOnly;
	BOOL stencilReadOnly;
} ASGI_GPURenderBundleEncoderDescriptor;