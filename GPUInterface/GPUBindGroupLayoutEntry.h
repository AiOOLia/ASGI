#pragma once

#include "GPUDefines.h"
#include "GPUShaderStage.h"
#include "GPUBufferBindingLayout.h"
#include "GPUSamplerBindingLayout.h"
#include "GPUTextureBindingLayout.h"
#include "GPUStorageTextureBindingLayout.h"
#include "GPUExternalTextureBindingLayout.h"

struct ASGI_GPUBindGroupLayoutEntry {
	ASGI_GPUIndex32 binding;
	ASGI_GPUShaderStageFlags visibility;

	ASGI_GPUBufferBindingLayout buffer;
	ASGI_GPUSamplerBindingLayout sampler;
	ASGI_GPUTextureBindingLayout texture;
	ASGI_GPUStorageTextureBindingLayout storageTexture;
	ASGI_GPUExternalTextureBindingLayout externalTexture;
};