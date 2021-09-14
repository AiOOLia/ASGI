#pragma once

#include "GPUDefines.h"
#include "GPUPrimitiveTopology.h"
#include "GPUIndexFormat.h"
#include "GPUFrontFace.h"
#include "GPUCullMode.h"

typedef struct ASGI_GPUPrimitiveState {
	ASGI_GPUPrimitiveTopology topology;
	ASGI_GPUIndexFormat stripIndexFormat;
	ASGI_GPUFrontFace frontFace;
	ASGI_GPUCullMode cullMode;

	// Enable depth clamping (requires "depth-clamping" feature)
	BOOL clampDepth;
} ASGI_GPUPrimitiveState;