#pragma once

#include "GPUTexture.h"
#include "GPUOrigin3D.h"
#include "GPUTextureAspect.h"

struct GPUImageCopyTexture {
	GPUTexture* texture;
	GPUIntegerCoordinate mipLevel;
	GPUOrigin3D origin;
	GPUTextureAspect aspect;
};