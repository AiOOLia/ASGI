#pragma once

#include "GPUPredefinedColorSpace.h"

struct ASGI_GPUExternalTextureDescriptor {
	const char* label;
	void* source;
	ASGI_GPUPredefinedColorSpace colorSpace;
};