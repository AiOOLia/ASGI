#pragma once

#include "../Export.h"
#include "GPUDefines.h"
#include "GPURenderPipeline.h"
#include "GPUBuffer.h"
#include "GPUIndexFormat.h"

typedef struct ASGI_GPURenderEncoderBase {
	int type;
} ASGI_GPURenderEncoderBase;

ASGI_API void asgiSetRenderPipeline (ASGI_GPURenderEncoderBase* pEncoder, ASGI_GPURenderPipeline* pPipeline);

ASGI_API void asgiSetIndexBuffer (ASGI_GPURenderEncoderBase* pEncoder,
	ASGI_GPUBuffer* pBuffer, ASGI_GPUIndexFormat indexFormat, 
	ASGI_GPUSize64 offset, ASGI_GPUSize64 size
);

ASGI_API void asgiSetVertexBuffer (ASGI_GPURenderEncoderBase* pEncoder,
	ASGI_GPUIndex32 slot, ASGI_GPUBuffer* pBuffer, 
	ASGI_GPUSize64 offset, ASGI_GPUSize64 size
);

ASGI_API void asgiDraw (ASGI_GPURenderEncoderBase* pEncoder,
	ASGI_GPUSize32 vertexCount, ASGI_GPUSize32 instanceCount,
	ASGI_GPUSize32 firstVertex, ASGI_GPUSize32 firstInstance
);

ASGI_API void asgiDrawIndexed (ASGI_GPURenderEncoderBase* pEncoder,
	ASGI_GPUSize32 indexCount, ASGI_GPUSize32 instanceCount,
	ASGI_GPUSize32 firstIndex,
	ASGI_GPUSignedOffset32 baseVertex,
	ASGI_GPUSize32 firstInstance
);

ASGI_API void asgiDrawIndirect (ASGI_GPURenderEncoderBase* pEncoder, ASGI_GPUBuffer* pIndirectBuffer, ASGI_GPUSize64 indirectOffset);

ASGI_API void asgiDrawIndexedIndirect (ASGI_GPURenderEncoderBase* pEncoder, ASGI_GPUBuffer* pIndirectBuffer, ASGI_GPUSize64 indirectOffset);