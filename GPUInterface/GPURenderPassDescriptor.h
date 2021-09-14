#pragma once

#include "GPURenderPassColorAttachment.h"
#include "GPURenderPassDepthStencilAttachment.h"
#include "GPUQuerySet.h"

typedef struct ASGI_GPURenderPassDescriptor {
	const char* label;
	int numColorAttachments;
	ASGI_GPURenderPassColorAttachment* colorAttachments;
	ASGI_GPURenderPassDepthStencilAttachment depthStencilAttachment;
	ASGI_GPUQuerySet occlusionQuerySet;
} ASGI_GPURenderPassDescriptor;