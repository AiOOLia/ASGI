#pragma once

#include "GPUDefines.h"

struct ASGI_GPUSupportedFeatures {
	BOOL depth_clamping;
	BOOL depth24unorm_stencil8;
	BOOL depth32float_stencil8;
	BOOL pipeline_statistics_query;
	BOOL texture_compression_bc;
	BOOL timestamp_query;
};
