#pragma once

#include "GPUDefines.h"

typedef struct ASGI_GPUMultisampleState {
	ASGI_GPUSize32 count;
	ASGI_GPUSampleMask mask;
	BOOL alphaToCoverageEnabled;
} ASGI_GPUMultisampleState;