#pragma once

#include "GPUDefines.h"
#include "GPUTexture.h"
#include "GPUOrigin3D.h"
#include "GPUTextureAspect.h"
#include "GPUPredefinedColorSpace.h"

struct ASGI_GPUImageCopyTextureTagged
{
	//ASGI_GPUImageCopyTexture
	ASGI_GPUTexture* texture;
	ASGI_GPUIntegerCoordinate mipLevel;
	ASGI_GPUOrigin3D origin;
	ASGI_GPUTextureAspect aspect;
	//
    ASGI_GPUPredefinedColorSpace colorSpace;
    BOOL premultipliedAlpha;
};