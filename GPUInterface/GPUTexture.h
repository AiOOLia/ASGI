#pragma once

#include "../Export.h"
#include "GPUTextureView.h"
#include "GPUTextureViewDescriptor.h"

typedef struct ASGI_GPUTexture {
	const char* label;
} ASGI_GPUTexture;

ASGI_API ASGI_GPUTextureView* asgiCreateView(ASGI_GPUTexture* pTexture, ASGI_GPUTextureViewDescriptor* pDescriptor);
ASGI_API void asgiDestoryGPUTexture(ASGI_GPUTexture* pTexture);