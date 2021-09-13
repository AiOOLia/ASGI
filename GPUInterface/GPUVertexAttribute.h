#pragma once

#include "GPUVertexFormat.h"
#include "GPUDefines.h"

struct GPUVertexAttribute {
	GPUVertexFormat format;
	GPUSize64 offset;
	GPUIndex32 shaderLocation;
};