#pragma once

#include "GPUDefines.h"
#include "GPUBufferBindingType.h"

struct ASGI_GPUBufferBindingLayout {
	ASGI_GPUBufferBindingType type;
	bool hasDynamicOffset = false;
	ASGI_GPUSize64 minBindingSize = 0;
};