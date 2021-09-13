#pragma once

#include "GPURenderPassColorAttachment.h"
#include "GPURenderPassDepthStencilAttachment.h"
#include "GPUQuerySet.h"

struct GPURenderPassDescriptor {
	const char* label;
	int numColorAttachments;
	GPURenderPassColorAttachment* colorAttachments;
	GPURenderPassDepthStencilAttachment depthStencilAttachment;
	GPUQuerySet occlusionQuerySet;
};