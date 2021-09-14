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

ASGI_API ASGI_GPURenderPassEncoder* asgiBeginRenderPass(ASGI_GPUCommandEncoder* pEncoder, ASGI_GPURenderPassDescriptor* pDescriptor);

ASGI_API ASGI_GPUComputePassEncoder* asgiBeginComputePass(ASGI_GPUCommandEncoder* pEncoder, ASGI_GPUComputePassDescriptor* pDescriptor);

ASGI_API void asgiCopyBufferToBuffer(ASGI_GPUCommandEncoder* pEncoder,
	ASGI_GPUBuffer* pSource,
	ASGI_GPUSize64 sourceOffset,
	ASGI_GPUBuffer* pDestination,
	ASGI_GPUSize64 destinationOffset,
	ASGI_GPUSize64 size
);

ASGI_API void asgiCopyBufferToTexture(ASGI_GPUCommandEncoder* pEncoder,
	ASGI_GPUImageCopyBuffer* pSource,
	ASGI_GPUImageCopyTexture* pDestination,
	ASGI_GPUExtent3D copySize
);

ASGI_API void asgiCopyTextureToBuffer(ASGI_GPUCommandEncoder* pEncoder,
	ASGI_GPUImageCopyTexture* pSource,
	ASGI_GPUImageCopyBuffer* pDestination,
	ASGI_GPUExtent3D copySize
);

ASGI_API void asgiCopyTextureToTexture(ASGI_GPUCommandEncoder* pEncoder,
	ASGI_GPUImageCopyTexture* pSource,
	ASGI_GPUImageCopyTexture* pDestination,
	ASGI_GPUExtent3D copySize
);

ASGI_API void asgiPushDebugGroupCE(ASGI_GPUCommandEncoder* pEncoder, const char* groupLabel);

ASGI_API void asgiPopDebugGroupCE(ASGI_GPUCommandEncoder* pEncoder);

ASGI_API void asgiInsertDebugMarkerCE(ASGI_GPUCommandEncoder* pEncoder, const char* markerLabel);

ASGI_API void asgiWriteTimestampCE(ASGI_GPUCommandEncoder* pEncoder, ASGI_GPUQuerySet* pQuerySet, ASGI_GPUSize32 queryIndex);

ASGI_API void asgiResolveQuerySet(ASGI_GPUCommandEncoder* pEncoder,
	ASGI_GPUQuerySet* pQuerySet,
	ASGI_GPUSize32 firstQuery,
	ASGI_GPUSize32 queryCount,
	ASGI_GPUBuffer* pDestination,
	ASGI_GPUSize64 destinationOffset
);

ASGI_API ASGI_GPUCommandBuffer* asgiFinishCommandEncoder(ASGI_GPUCommandEncoder* pEncoder, ASGI_GPUCommandBufferDescriptor* pDescriptor);