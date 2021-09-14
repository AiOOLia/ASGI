#pragma once

#include "GPUDefines.h"
#include "GPUPowerPreference.h"

typedef struct ASGI_GPURequestAdapterOptions {
	ASGI_GPUPowerPreference powerPreference;
	BOOL forceFallbackAdapter;
} ASGI_GPURequestAdapterOptions;