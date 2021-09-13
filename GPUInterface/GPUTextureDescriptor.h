#pragma once

#include "GPUExtent3D.h"
#include "GPUTextureDimension.h"
#include "GPUTextureFormat.h"
#include "GPUTextureUsage.h"

struct GPUTextureDescriptor {
	const char* label;
	GPUExtent3D size;
	GPUIntegerCoordinate mipLevelCount;
	GPUSize32 sampleCount;
	GPUTextureDimension dimension;
	GPUTextureFormat format;
	GPUTextureUsageFlags usage;
};