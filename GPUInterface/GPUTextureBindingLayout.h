#pragma once

struct GPUTextureBindingLayout {
	GPUTextureSampleType sampleType;
	GPUTextureViewDimension viewDimension;
	bool multisampled;
};