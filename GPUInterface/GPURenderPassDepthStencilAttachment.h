#pragma once

#include "GPUTextureView.h"
#include "GPULoadOp.h"
#include "GPUStoreOp.h"
#include "GPUDefines.h"

struct GPURenderPassDepthStencilAttachment {
	GPUTextureView view;

	GPULoadOp depthLoadOp;
	float depthLoadValue;
	GPUStoreOp depthStoreOp;
	bool depthReadOnly;

	GPULoadOp stencilLoadOp;
	GPUStencilValue stencilLoadValue;
	GPUStoreOp stencilStoreOp;
	bool stencilReadOnly;
};