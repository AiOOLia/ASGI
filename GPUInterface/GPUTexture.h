#pragma once

#include "GPUTextureView.h"
#include "GPUTextureViewDescriptor.h"

typedef struct ASGI_GPUTexture {
	const char* label;
} ASGI_GPUTexture;

ASGI_GPUTextureView* asgiCreateView(ASGI_GPUTexture* pTexture, ASGI_GPUTextureViewDescriptor* pDescriptor);
void asgiDestoryGPUTexture(ASGI_GPUTexture* pTexture);