#pragma once

#include "GPUTexture.h"
#include "GPUOrigin3D.h"
#include "GPUTextureAspect.h"

struct ASGI_GPUImageCopyTexture {
	ASGI_GPUTexture* texture;
	ASGI_GPUIntegerCoordinate mipLevel;
	ASGI_GPUOrigin3D origin;
	ASGI_GPUTextureAspect aspect;
};