#pragma once

struct GPUBufferBindingLayout {
	GPUBufferBindingType type;
	bool hasDynamicOffset = false;
	GPUSize64 minBindingSize = 0;
};