#pragma once

#include "GPUBlendOperation.h"
#include "GPUBlendFactor.h"

typedef struct ASGI_GPUBlendComponent {
	ASGI_GPUBlendOperation operation;
	ASGI_GPUBlendFactor srcFactor;
	ASGI_GPUBlendFactor dstFactor;
} ASGI_GPUBlendComponent;