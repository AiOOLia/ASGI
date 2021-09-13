#pragma once

struct GPUStorageTextureBindingLayout {
	GPUStorageTextureAccess access;
	GPUTextureFormat format;
	GPUTextureViewDimension viewDimension;
};