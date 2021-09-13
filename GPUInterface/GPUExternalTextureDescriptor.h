#pragma once

#include "GPUPredefinedColorSpace.h"

struct GPUExternalTextureDescriptor {
	const char* label;
	void* source;
	GPUPredefinedColorSpace colorSpace;
};