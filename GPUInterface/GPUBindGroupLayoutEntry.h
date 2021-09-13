#pragma once

#include "GPUDefine.h"
#include "GPUShaderStage.h"
#include "GPUBufferBindingLayout.h"
#include "GPUSamplerBindingLayout.h"
#include "GPUTextureBindingLayout.h"
#include "GPUStorageTextureBindingLayout.h"
#include "GPUExternalTextureBindingLayout.h"

struct GPUBindGroupLayoutEntry {
	GPUIndex32 binding;
	GPUShaderStageFlags visibility;

	GPUBufferBindingLayout buffer;
	GPUSamplerBindingLayout sampler;
	GPUTextureBindingLayout texture;
	GPUStorageTextureBindingLayout storageTexture;
	GPUExternalTextureBindingLayout externalTexture;
};