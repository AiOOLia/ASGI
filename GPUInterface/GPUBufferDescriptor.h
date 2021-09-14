#pragma once

#include "GPUDefines.h"
#include "GPUBufferUsage.h"

typedef struct ASGI_GPUBufferDescriptor {
	ASGI_GPUSize64 size;
	ASGI_GPUBufferUsageFlags usage;
	BOOL mappedAtCreation;
} ASGI_GPUBufferDescriptor;