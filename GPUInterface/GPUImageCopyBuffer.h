#pragma once

#include "GPUDefines.h"
#include "GPUBuffer.h"

struct ASGI_GPUImageCopyBuffer {
	ASGI_GPUSize64 offset = 0;
	ASGI_GPUSize32 bytesPerRow;
	ASGI_GPUSize32 rowsPerImage;
	ASGI_GPUBuffer buffer;
};