#pragma once

#include "../Export.h"
#include "GPURenderPassEncoder.h"
#include "GPURenderPassDescriptor.h"
#include "GPUComputePassEncoder.h"
#include "GPUComputePassDescriptor.h"
#include "GPUImageCopyBuffer.h"
#include "GPUImageCopyTexture.h"
#include "GPUExtent3D.h"
#include "GPUCommandBufferDescriptor.h"
#include "GPUCommandBuffer.h"

typedef struct ASGI_GPUCommandEncoder {
	const char* label;
} ASGI_GPUCommandEncoder;

 ASGI_GPURenderPassEncoder* asgiBeginRenderPass(ASGI_GPUCommandEncoder* pEncoder, ASGI_GPURenderPassDescriptor* pDescriptor);

ASGI_GPUComputePassEncoder* asgiBeginComputePass(ASGI_GPUCommandEncoder* pEncoder, ASGI_GPUComputePassDescriptor* pDescriptor);

void asgiCopyBufferToBuffer(ASGI_GPUCommandEncoder* pEncoder,
	ASGI_GPUBuffer* pSource,
	ASGI_GPUSize64 sourceOffset,
	ASGI_GPUBuffer* pDestination,
	ASGI_GPUSize64 destinationOffset,
	ASGI_GPUSize64 size
);

void asgiCopyBufferToTexture(ASGI_GPUCommandEncoder* pEncoder,
	ASGI_GPUImageCopyBuffer* pSource,
	ASGI_GPUImageCopyTexture* pDestination,
	ASGI_GPUExtent3D copySize
);

void asgiCopyTextureToBuffer(ASGI_GPUCommandEncoder* pEncoder,
	ASGI_GPUImageCopyTexture* pSource,
	ASGI_GPUImageCopyBuffer* pDestination,
	ASGI_GPUExtent3D copySize
);

void asgiCopyTextureToTexture(ASGI_GPUCommandEncoder* pEncoder,
	ASGI_GPUImageCopyTexture* pSource,
	ASGI_GPUImageCopyTexture* pDestination,
	ASGI_GPUExtent3D copySize
);

void asgiPushDebugGroupCE(ASGI_GPUCommandEncoder* pEncoder, const char* groupLabel);

void asgiPopDebugGroupCE(ASGI_GPUCommandEncoder* pEncoder);

void asgiInsertDebugMarkerCE(ASGI_GPUCommandEncoder* pEncoder, const char* markerLabel);

void asgiWriteTimestampCE(ASGI_GPUCommandEncoder* pEncoder, ASGI_GPUQuerySet* pQuerySet, ASGI_GPUSize32 queryIndex);

void asgiResolveQuerySet(ASGI_GPUCommandEncoder* pEncoder,
	ASGI_GPUQuerySet* pQuerySet,
	ASGI_GPUSize32 firstQuery,
	ASGI_GPUSize32 queryCount,
	ASGI_GPUBuffer* pDestination,
	ASGI_GPUSize64 destinationOffset
);

ASGI_GPUCommandBuffer* asgiFinishCommandEncoder(ASGI_GPUCommandEncoder* pEncoder, ASGI_GPUCommandBufferDescriptor* pDescriptor);