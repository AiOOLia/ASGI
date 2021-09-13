#pragma once

#include "GPUDefines.h"
#include "GPUBufferUsage.h"

struct GPUBufferDescriptor {
	GPUSize64 size;
	GPUBufferUsageFlags usage;
	bool mappedAtCreation;
};