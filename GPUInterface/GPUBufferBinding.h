#pragma once

#include "GPUDefines.h"
#include "GPUBuffer.h"

typedef struct ASGI_GPUBufferBinding {
	ASGI_GPUBuffer buffer;
	ASGI_GPUSize64 offset;
	ASGI_GPUSize64 size;
} ASGI_GPUBufferBinding;