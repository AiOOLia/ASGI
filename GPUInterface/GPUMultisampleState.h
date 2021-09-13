#pragma once

#include "GPUDefines.h"

struct GPUMultisampleState {
	GPUSize32 count;
	GPUSampleMask mask;
	bool alphaToCoverageEnabled;
};