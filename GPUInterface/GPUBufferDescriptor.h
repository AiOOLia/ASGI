#pragma once

#include "GPUDefines.h"
#include "GPUBufferUsage.h"

struct ASGI_GPUBufferDescriptor {
	ASGI_GPUSize64 size;
	ASGI_GPUBufferUsageFlags usage;
	bool mappedAtCreation;
};