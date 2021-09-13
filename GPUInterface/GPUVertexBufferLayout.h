#pragma once

#include "GPUDefines.h"
#include "GPUVertexStepMode.h"
#include "GPUVertexAttribute.h"

struct GPUVertexBufferLayout {
	GPUSize64 arrayStride;
	GPUVertexStepMode stepMode;
	int numAttribute;
	GPUVertexAttribute* attributes;
};