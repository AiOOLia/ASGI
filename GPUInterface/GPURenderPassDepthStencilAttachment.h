#pragma once

#include "GPUTextureView.h"
#include "GPULoadOp.h"
#include "GPUStoreOp.h"
#include "GPUDefines.h"

struct ASGI_GPURenderPassDepthStencilAttachment {
	ASGI_GPUTextureView view;

	ASGI_GPULoadOp depthLoadOp;
	float depthLoadValue;
	ASGI_GPUStoreOp depthStoreOp;
	BOOL depthReadOnly;

	ASGI_GPULoadOp stencilLoadOp;
	ASGI_GPUStencilValue stencilLoadValue;
	ASGI_GPUStoreOp stencilStoreOp;
	BOOL stencilReadOnly;
};