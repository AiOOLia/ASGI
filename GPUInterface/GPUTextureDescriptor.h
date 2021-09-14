#pragma once

#include "GPUExtent3D.h"
#include "GPUTextureDimension.h"
#include "GPUTextureFormat.h"
#include "GPUTextureUsage.h"

typedef struct ASGI_GPUTextureDescriptor {
	const char* label;
	ASGI_GPUExtent3D size;
	ASGI_GPUIntegerCoordinate mipLevelCount;
	ASGI_GPUSize32 sampleCount;
	ASGI_GPUTextureDimension dimension;
	ASGI_GPUTextureFormat format;
	ASGI_GPUTextureUsageFlags usage;
} ASGI_GPUTextureDescriptor;