#pragma once

#include "GPUDefines.h"
#include "GPUPowerPreference.h"

struct ASGI_GPURequestAdapterOptions {
	ASGI_GPUPowerPreference powerPreference;
	BOOL forceFallbackAdapter;
};