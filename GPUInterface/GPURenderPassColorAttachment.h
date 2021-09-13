#pragma once

#include "GPUTextureView.h"
#include "GPULoadOp.h"
#include "GPUColor.h"
#include "GPUStoreOp.h"

struct GPURenderPassColorAttachment {
	GPUTextureView view;
	GPUTextureView resolveTarget;
	GPULoadOp loadOp;
	GPUColor loadValue;
	GPUStoreOp storeOp;
};