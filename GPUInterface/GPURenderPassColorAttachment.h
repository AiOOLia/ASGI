#pragma once

#include "GPUTextureView.h"
#include "GPULoadOp.h"
#include "GPUColor.h"
#include "GPUStoreOp.h"

struct ASGI_GPURenderPassColorAttachment {
	ASGI_GPUTextureView view;
	ASGI_GPUTextureView resolveTarget;
	ASGI_GPULoadOp loadOp;
	ASGI_GPUColor loadValue;
	ASGI_GPUStoreOp storeOp;
};