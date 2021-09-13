#pragma once

#include "GPUAddressMode.h"
#include "GPUFilterMode.h"
#include "GPUCompareFunction.h"

struct ASGI_GPUSamplerDescriptor {
	const char* label;
	ASGI_GPUAddressMode addressModeU;
	ASGI_GPUAddressMode addressModeV;
	ASGI_GPUAddressMode addressModeW;
	ASGI_GPUFilterMode magFilter;
	ASGI_GPUFilterMode minFilter;
	ASGI_GPUFilterMode mipmapFilter;
	float lodMinClamp;
	float lodMaxClamp;
	ASGI_GPUCompareFunction compare;
	unsigned short maxAnisotropy = 1;
};