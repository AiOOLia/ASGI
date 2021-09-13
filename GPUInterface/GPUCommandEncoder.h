#pragma once

#include "GPURenderPassEncoder.h"
#include "GPURenderPassDescriptor.h"
#include "GPUComputePassEncoder.h"
#include "GPUComputePassDescriptor.h"
#include "GPUImageCopyBuffer.h"
#include "GPUImageCopyTexture.h"
#include "GPUExtent3D.h"
#include "GPUCommandBufferDescriptor.h"
#include "GPUCommandBuffer.h"

struct GPUCommandEncoder {
	const char* label;
};

GPURenderPassEncoder* beginRenderPass(GPUCommandEncoder* encoder, GPURenderPassDescriptor* descriptor);
GPUComputePassEncoder* beginComputePass(GPUCommandEncoder* encoder, GPUComputePassDescriptor* descriptor);

void copyBufferToBuffer(GPUCommandEncoder* encoder,
	GPUBuffer source,
	GPUSize64 sourceOffset,
	GPUBuffer destination,
	GPUSize64 destinationOffset,
	GPUSize64 size);

void copyBufferToTexture(GPUCommandEncoder* encoder,
	GPUImageCopyBuffer source,
	GPUImageCopyTexture destination,
	GPUExtent3D copySize);

void copyTextureToBuffer(GPUCommandEncoder* encoder,
	GPUImageCopyTexture source,
	GPUImageCopyBuffer destination,
	GPUExtent3D copySize);

void copyTextureToTexture(GPUCommandEncoder* encoder,
	GPUImageCopyTexture source,
	GPUImageCopyTexture destination,
	GPUExtent3D copySize);

void pushDebugGroup(GPUCommandEncoder* encoder, const char* groupLabel);
void popDebugGroup(GPUCommandEncoder* encoder);
void insertDebugMarker(GPUCommandEncoder* encoder, const char* markerLabel);

void writeTimestamp(GPUCommandEncoder* encoder, GPUQuerySet querySet, GPUSize32 queryIndex);

void resolveQuerySet(GPUCommandEncoder* encoder,
	GPUQuerySet querySet,
	GPUSize32 firstQuery,
	GPUSize32 queryCount,
	GPUBuffer destination,
	GPUSize64 destinationOffset);

GPUCommandBuffer finishCommandEncoder(GPUCommandEncoder* encoder, GPUCommandBufferDescriptor* descriptor);