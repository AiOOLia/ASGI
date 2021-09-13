#pragma once 

#include "GPUDefines.h"
#include "GPUTextureFormat.h"
#include "GPUTextureViewDimension.h"
#include "GPUTextureAspect.h"

struct GPUTextureViewDescriptor {
	GPUTextureFormat format;
	GPUTextureViewDimension dimension;
	GPUTextureAspect aspect;
	GPUIntegerCoordinate baseMipLevel;
	GPUIntegerCoordinate mipLevelCount;
	GPUIntegerCoordinate baseArrayLayer;
	GPUIntegerCoordinate arrayLayerCount;
};