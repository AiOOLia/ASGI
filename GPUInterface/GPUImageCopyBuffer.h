#pragma once

#include "GPUDefines.h"
#include "GPUBuffer.h"

struct GPUImageCopyBuffer {
	GPUSize64 offset = 0;
	GPUSize32 bytesPerRow;
	GPUSize32 rowsPerImage;
	GPUBuffer buffer;
};