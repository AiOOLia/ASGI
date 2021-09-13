#pragma once

#include "GPUDefines.h"
#include "GPUBuffer.h"

struct GPUBufferBinding {
	GPUBuffer buffer;
	GPUSize64 offset;
	GPUSize64 size;
};