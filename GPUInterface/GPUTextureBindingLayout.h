#pragma once

#include "GPUTextureSampleType.h"
#include "GPUTextureViewDimension.h"

typedef struct ASGI_GPUTextureBindingLayout {
	ASGI_GPUTextureSampleType sampleType;
	ASGI_GPUTextureViewDimension viewDimension;
	BOOL multisampled;
} ASGI_GPUTextureBindingLayout;