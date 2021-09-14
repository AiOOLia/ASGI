#pragma once

#include "GPUDefines.h"
#include "GPUBuffer.h"

typedef struct ASGI_GPUImageCopyBuffer {
	ASGI_GPUSize64 offset;
	ASGI_GPUSize32 bytesPerRow;
	ASGI_GPUSize32 rowsPerImage;
	ASGI_GPUBuffer buffer;
} ASGI_GPUImageCopyBuffer;