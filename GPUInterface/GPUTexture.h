#pragma once

#include "GPUTextureView.h"
#include "GPUTextureViewDescriptor.h"

struct ASGI_GPUTexture {
	const char* label;
};

ASGI_GPUTextureView* asgiCreateView(ASGI_GPUTexture* pTexture, ASGI_GPUTextureViewDescriptor* pDescriptor);
void asgiDestoryGPUTexture(ASGI_GPUTexture* pTexture);