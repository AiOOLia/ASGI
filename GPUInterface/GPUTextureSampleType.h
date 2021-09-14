#pragma once

typedef enum ASGI_GPUTextureSampleType {
	ASGI_TEX_SAMPLE_TYPE_Float32,
	ASGI_TEX_SAMPLE_TYPE_UnfilterableFloat,
	ASGI_TEX_SAMPLE_TYPE_Depth,
	ASGI_TEX_SAMPLE_TYPE_Sint,
	ASGI_TEX_SAMPLE_TYPE_Uint
} ASGI_GPUTextureSampleType;