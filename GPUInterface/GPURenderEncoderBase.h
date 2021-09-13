#pragma once

#include "GPUDefines.h"
#include "GPURenderPipeline.h"
#include "GPUBuffer.h"
#include "GPUIndexFormat.h"

struct GPURenderEncoderBase {
};

void setPipeline (GPURenderEncoderBase* encoder, GPURenderPipeline pipeline);

void setIndexBuffer (GPURenderEncoderBase* encoder,
	GPUBuffer buffer, GPUIndexFormat indexFormat, GPUSize64 offset, GPUSize64 size);

void setVertexBuffer (GPURenderEncoderBase* encoder,
	GPUIndex32 slot, GPUBuffer buffer, GPUSize64 offset, GPUSize64 size);

void draw (GPURenderEncoderBase* encoder,
	GPUSize32 vertexCount, GPUSize32 instanceCount,
	GPUSize32 firstVertex, GPUSize32 firstInstance);

void drawIndexed (GPURenderEncoderBase* encoder,
	GPUSize32 indexCount, GPUSize32 instanceCount,
	GPUSize32 firstIndex,
	GPUSignedOffset32 baseVertex,
	GPUSize32 firstInstance);

void drawIndirect (GPURenderEncoderBase* encoder, GPUBuffer indirectBuffer, GPUSize64 indirectOffset);
void drawIndexedIndirect (GPURenderEncoderBase* encoder, GPUBuffer indirectBuffer, GPUSize64 indirectOffset);