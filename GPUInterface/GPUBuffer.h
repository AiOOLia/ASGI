#pragma once

#include "GPUDefines.h"
#include "GPUMapMode.h"

struct GPUBuffer
{
	const char* label;
};

void mapAsync (GPUBuffer* buffer, GPUMapModeFlags mode, GPUSize64 offset, GPUSize64 size);
unsigned char* getMappedRange (GPUBuffer* buffer, GPUSize64 offset, GPUSize64 size);
void unmap (GPUBuffer* buffer);
void destroyGPUBuffer (GPUBuffer* buffer);
