#pragma once

#include "GPUDefines.h"

struct ASGI_GPUMultisampleState {
	ASGI_GPUSize32 count;
	ASGI_GPUSampleMask mask;
	bool alphaToCoverageEnabled;
};