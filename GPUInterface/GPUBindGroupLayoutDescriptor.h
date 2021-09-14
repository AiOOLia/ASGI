#pragma once

#include "GPUBindGroupLayoutEntry.h"

typedef struct ASGI_GPUBindGroupLayoutDescriptor {
	int numEntry;
	ASGI_GPUBindGroupLayoutEntry* entries;
} ASGI_GPUBindGroupLayoutDescriptor;