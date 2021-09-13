#pragma once

#include "GPUAddressMode.h"
#include "GPUFilterMode.h"
#include "GPUCompareFunction.h"

struct GPUSamplerDescriptor {
	const char* label;
	GPUAddressMode addressModeU;
	GPUAddressMode addressModeV;
	GPUAddressMode addressModeW;
	GPUFilterMode magFilter;
	GPUFilterMode minFilter;
	GPUFilterMode mipmapFilter;
	float lodMinClamp;
	float lodMaxClamp;
	GPUCompareFunction compare;
	unsigned short maxAnisotropy = 1;
};