#pragma once

#include "GPUDefines.h"
#include "GPURenderBundle.h"

struct GPURenderPassEncoder {
	const char* label;
};

void setScissorRect(GPURenderPassEncoder* encoder, GPUIntegerCoordinate x, GPUIntegerCoordinate y,
	GPUIntegerCoordinate width, GPUIntegerCoordinate height);

void setViewport(GPURenderPassEncoder* encoder, float x, float y,
	float width, float height,
	float minDepth, float maxDepth);

void setBlendConstant(GPURenderPassEncoder* encoder, GPUColor color);
void setStencilReference(GPURenderPassEncoder* encoder, GPUStencilValue reference);

void beginOcclusionQuery(GPURenderPassEncoder* encoder, GPUSize32 queryIndex);
void endOcclusionQuery(GPURenderPassEncoder* encoder);

void beginPipelineStatisticsQuery(GPURenderPassEncoder* encoder, GPUQuerySet querySet, GPUSize32 queryIndex);
void endPipelineStatisticsQuery(GPURenderPassEncoder* encoder);

void writeTimestamp(GPURenderPassEncoder* encoder, GPUQuerySet querySet, GPUSize32 queryIndex);

void executeBundles(GPURenderPassEncoder* encoder, int numBundle, GPURenderBundle* bundles);
void endRenderPass(GPURenderPassEncoder* encoder);