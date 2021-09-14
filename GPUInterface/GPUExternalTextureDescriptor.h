#pragma once

#include "GPUPredefinedColorSpace.h"

typedef struct ASGI_GPUExternalTextureDescriptor {
	const char* label;
	void* source;
	ASGI_GPUPredefinedColorSpace colorSpace;
} ASGI_GPUExternalTextureDescriptor;