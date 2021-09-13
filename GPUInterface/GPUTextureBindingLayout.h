#pragma once

#include "GPUTextureSampleType.h"
#include "GPUTextureViewDimension.h"

struct ASGI_GPUTextureBindingLayout {
	ASGI_GPUTextureSampleType sampleType;
	ASGI_GPUTextureViewDimension viewDimension;
	BOOL multisampled;
};