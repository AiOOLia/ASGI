#pragma once

#include "GPUDefines.h"
#include "GPUSampler.h"
#include "GPUTextureView.h"
#include "GPUBufferBinding.h"
#include "GPUExternalTexture.h"

struct ASGI_GPUBindGroupEntry {
	ASGI_GPUIndex32 binding;
	ASGI_GPUSampler* resource_sampler;
	ASGI_GPUTextureView* resource_texture_view;
	ASGI_GPUBufferBinding* resource_buffer_binding;
	ASGI_GPUExternalTexture* resource_external_texture;
};