#pragma once

#include "GPUDefines.h"
#include "GPUBufferBindingType.h"

typedef struct ASGI_GPUBufferBindingLayout {
	ASGI_GPUBufferBindingType type;
	BOOL hasDynamicOffset;
	ASGI_GPUSize64 minBindingSize;
} ASGI_GPUBufferBindingLayout;