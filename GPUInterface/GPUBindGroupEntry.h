#pragma once

#include "GPUDefines.h"
#include "GPUSampler.h"
#include "GPUTextureView.h"
#include "GPUBufferBinding.h"
#include "GPUExternalTexture.h"

struct GPUBindGroupEntry {
	GPUIndex32 binding;
	GPUSampler* resource_sampler;
	GPUTextureView* resource_texture_view;
	GPUBufferBinding* resource_buffer_binding;
	GPUExternalTexture* resource_external_texture;
};