#pragma once
#include "GPUPowerPreference.h"

struct ASGI_GPURequestAdapterOptions {
	ASGI_GPUPowerPreference powerPreference;
	bool forceFallbackAdapter;
};