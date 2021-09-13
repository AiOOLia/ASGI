#pragma once

struct ASGI_GPUSupportedFeatures {
	bool depth_clamping;
	bool depth24unorm_stencil8;
	bool depth32float_stencil8;
	bool pipeline_statistics_query;
	bool texture_compression_bc;
	bool timestamp_query;
};
