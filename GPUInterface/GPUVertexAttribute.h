#pragma once

#include "GPUVertexFormat.h"
#include "GPUDefines.h"

struct ASGI_GPUVertexAttribute {
	ASGI_GPUVertexFormat format;
	ASGI_GPUSize64 offset;
	ASGI_GPUIndex32 shaderLocation;
};