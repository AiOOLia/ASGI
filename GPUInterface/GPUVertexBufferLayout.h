#pragma once

#include "GPUDefines.h"
#include "GPUVertexStepMode.h"
#include "GPUVertexAttribute.h"

struct ASGI_GPUVertexBufferLayout {
	ASGI_GPUSize64 arrayStride;
	ASGI_GPUVertexStepMode stepMode;
	int numAttribute;
	ASGI_GPUVertexAttribute* attributes;
};