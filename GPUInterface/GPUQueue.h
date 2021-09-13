#pragma once

#include "GPUDefines.h"

struct GPUCommandBuffer;
struct GPUBuffer;

struct GPUQueue {
	const char* label;
    void (*onSubmittedWorkDone)();
};

void submit (GPUQueue* queue, GPUCommandBuffer* commandBuffers, int numCommandBuffer);

void writeBuffer (
    GPUQueue* queue,
    GPUBuffer* buffer,
    GPUSize64 bufferOffset,
    const char* data,
    GPUSize64 dataOffset = 0,
    GPUSize64 size);

void writeTexture (
    GPUQueue* queue,
    GPUImageCopyTexture* destination,
    const char* data,
    GPUImageDataLayout* dataLayout,
    GPUExtent3D size);

void copyExternalImageToTexture(
    GPUQueue* queue,
    GPUImageCopyExternalImage* source,
    GPUImageCopyTextureTagged* destination,
    GPUExtent3D copySize);