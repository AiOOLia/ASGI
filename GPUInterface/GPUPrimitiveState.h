#pragma once

#include "GPUPrimitiveTopology.h"
#include "GPUIndexFormat.h"
#include "GPUFrontFace.h"
#include "GPUCullMode.h"

struct ASGI_GPUPrimitiveState {
	ASGI_GPUPrimitiveTopology topology;
	ASGI_GPUIndexFormat stripIndexFormat;
	ASGI_GPUFrontFace frontFace;
	ASGI_GPUCullMode cullMode;

	// Enable depth clamping (requires "depth-clamping" feature)
	bool clampDepth;
};