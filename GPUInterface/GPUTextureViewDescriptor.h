#pragma once 

#include "GPUDefines.h"
#include "GPUTextureFormat.h"
#include "GPUTextureViewDimension.h"
#include "GPUTextureAspect.h"

struct ASGI_GPUTextureViewDescriptor {
	ASGI_GPUTextureFormat format;
	ASGI_GPUTextureViewDimension dimension;
	ASGI_GPUTextureAspect aspect;
	ASGI_GPUIntegerCoordinate baseMipLevel;
	ASGI_GPUIntegerCoordinate mipLevelCount;
	ASGI_GPUIntegerCoordinate baseArrayLayer;
	ASGI_GPUIntegerCoordinate arrayLayerCount;
};