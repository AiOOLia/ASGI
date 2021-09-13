#pragma once

#include "GPUPrimitiveTopology.h"
#include "GPUIndexFormat.h"
#include "GPUFrontFace.h"
#include "GPUCullMode.h"

struct GPUPrimitiveState {
	GPUPrimitiveTopology topology;
	GPUIndexFormat stripIndexFormat;
	GPUFrontFace frontFace;
	GPUCullMode cullMode;

	// Enable depth clamping (requires "depth-clamping" feature)
	bool clampDepth;
};