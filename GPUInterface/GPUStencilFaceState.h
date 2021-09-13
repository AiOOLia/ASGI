#pragma once
#include "GPUCompareFunction.h"
#include "GPUStencilOperation.h"

struct GPUStencilFaceState {
	GPUCompareFunction compare;
	GPUStencilOperation failOp;
	GPUStencilOperation depthFailOp;
	GPUStencilOperation passOp;
};