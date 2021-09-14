#pragma once

#include "GPUBindGroupLayout.h"
#include "GPUBindGroupEntry.h"

typedef struct ASGI_GPUBindGroupDescriptor {
	ASGI_GPUBindGroupLayout layout;
	int numEntry;
	ASGI_GPUBindGroupEntry* entries;
} ASGI_GPUBindGroupDescriptor;