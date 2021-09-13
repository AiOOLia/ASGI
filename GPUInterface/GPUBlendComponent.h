#pragma once

#include "GPUBlendOperation.h"
#include "GPUBlendFactor.h"

struct GPUBlendComponent {
	GPUBlendOperation operation;
	GPUBlendFactor srcFactor;
	GPUBlendFactor dstFactor;
};