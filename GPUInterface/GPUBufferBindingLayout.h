#pragma once

#include "GPUDefines.h"
#include "GPUBufferBindingType.h"

struct ASGI_GPUBufferBindingLayout {
	ASGI_GPUBufferBindingType type;
	BOOL hasDynamicOffset;
	ASGI_GPUSize64 minBindingSize = 0;
};