#pragma once

struct GPUTextureView;

struct GPUTexture {
	const char* label;
};

GPUTextureView* createView(GPUTexture* texture, GPUTextureViewDescriptor* descriptor);
void destoryTexture(GPUTexture* texture);