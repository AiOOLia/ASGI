#pragma once
#include "GPUPowerPreference.h"

struct GPURequestAdapterOptions {
	GPUPowerPreference powerPreference;
	bool forceFallbackAdapter;
};