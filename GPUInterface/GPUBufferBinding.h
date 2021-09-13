#pragma once

#include "GPUDefines.h"
#include "GPUBuffer.h"

struct ASGI_GPUBufferBinding {
	ASGI_GPUBuffer buffer;
	ASGI_GPUSize64 offset;
	ASGI_GPUSize64 size;
};