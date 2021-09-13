#pragma once

#include "GPUBindGroupLayout.h"
#include "GPUBindGroupEntry.h"

struct ASGI_GPUBindGroupDescriptor {
	ASGI_GPUBindGroupLayout layout;
	int numEntry;
	ASGI_GPUBindGroupEntry* entries;
};