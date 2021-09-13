#pragma once

#include "GPUTextureFormat.h"
#include "GPUBlendState.h"
#include "GPUColorWrite.h"

struct GPUColorTargetState {
	GPUTextureFormat format;
	GPUBlendState blend;
	GPUColorWriteFlags writeMask;  // GPUColorWrite.ALL
};