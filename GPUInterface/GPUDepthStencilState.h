#pragma once

#include "GPUTextureFormat.h"
#include "GPUCompareFunction.h"
#include "GPUStencilFaceState.h"
#include "GPUDefines.h"

struct GPUDepthStencilState {
	GPUTextureFormat format;

	bool depthWriteEnabled;
	GPUCompareFunction depthCompare;

	GPUStencilFaceState stencilFront;
	GPUStencilFaceState stencilBack;

	GPUStencilValue stencilReadMask;
	GPUStencilValue stencilWriteMask;

	GPUDepthBias depthBias;
	float depthBiasSlopeScale;
	float depthBiasClamp;
};
