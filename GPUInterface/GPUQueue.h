#pragma once

#include "../Export.h"
#include "GPUDefines.h"
#include "GPUCommandBuffer.h"
#include "GPUBuffer.h"
#include "GPUExtent3D.h"
#include "GPUImageCopyTexture.h"
#include "GPUImageDataLayout.h"
#include "GPUImageCopyExternalImage.h"
#include "GPUImageCopyTextureTagged.h"



typedef struct ASGI_GPUQueue {
	const char* label;
} ASGI_GPUQueue;

ASGI_API void asgiSubmit (ASGI_GPUQueue* pQueue, int numCommandBuffer, ASGI_GPUCommandBuffer* pCommandBuffers);

ASGI_API void asgiSubmitAsync (ASGI_GPUQueue* pQueue, int numCommandBuffer, ASGI_GPUCommandBuffer* pCommandBuffers, void (*onSubmittedWorkDone)());

ASGI_API void asgiWriteBuffer (
    ASGI_GPUQueue* pQueue,
    ASGI_GPUBuffer* pBuffer,
    ASGI_GPUSize64 bufferOffset,
    const char* pData,
    ASGI_GPUSize64 dataOffset,
    ASGI_GPUSize64 size);

ASGI_API void asgiWriteTexture (
    ASGI_GPUQueue* pQueue,
    ASGI_GPUImageCopyTexture* pDestination,
    const char* pData,
    ASGI_GPUImageDataLayout* pDataLayout,
    ASGI_GPUExtent3D size);

ASGI_API void asgiCopyExternalImageToTexture(
    ASGI_GPUQueue* pQueue,
    ASGI_GPUImageCopyExternalImage* pSource,
    ASGI_GPUImageCopyTextureTagged* pDestination,
    ASGI_GPUExtent3D copySize);