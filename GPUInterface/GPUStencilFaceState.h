#pragma once
#include "GPUCompareFunction.h"
#include "GPUStencilOperation.h"

typedef struct ASGI_GPUStencilFaceState {
	ASGI_GPUCompareFunction compare;
	ASGI_GPUStencilOperation failOp;
	ASGI_GPUStencilOperation depthFailOp;
	ASGI_GPUStencilOperation passOp;
} ASGI_GPUStencilFaceState;