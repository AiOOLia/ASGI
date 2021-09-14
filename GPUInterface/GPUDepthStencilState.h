#pragma once

#include "GPUTextureFormat.h"
#include "GPUCompareFunction.h"
#include "GPUStencilFaceState.h"
#include "GPUDefines.h"

typedef struct ASGI_GPUDepthStencilState {
	ASGI_GPUTextureFormat format;

	BOOL depthWriteEnabled;
	ASGI_GPUCompareFunction depthCompare;

	ASGI_GPUStencilFaceState stencilFront;
	ASGI_GPUStencilFaceState stencilBack;

	ASGI_GPUStencilValue stencilReadMask;
	ASGI_GPUStencilValue stencilWriteMask;

	ASGI_GPUDepthBias depthBias;
	float depthBiasSlopeScale;
	float depthBiasClamp;
} ASGI_GPUDepthStencilState;
