#pragma once

#include "GPUBindGroupLayoutEntry.h"

struct ASGI_GPUBindGroupLayoutDescriptor {
	int numEntry;
	ASGI_GPUBindGroupLayoutEntry* entries;
};