#pragma once

#include "GPUDefines.h"
#include "GPURenderPipeline.h"
#include "GPUBuffer.h"
#include "GPUIndexFormat.h"

struct ASGI_GPURenderEncoderBase {
};

void asgiSetPipeline (ASGI_GPURenderEncoderBase* pEncoder, ASGI_GPURenderPipeline pipeline);

void asgiSetIndexBuffer (ASGI_GPURenderEncoderBase* pEncoder,
	ASGI_GPUBuffer* pBuffer, ASGI_GPUIndexFormat indexFormat, 
	ASGI_GPUSize64 offset, ASGI_GPUSize64 size
);

void asgiSetVertexBuffer (ASGI_GPURenderEncoderBase* pEncoder,
	ASGI_GPUIndex32 slot, ASGI_GPUBuffer* pBuffer, 
	ASGI_GPUSize64 offset, ASGI_GPUSize64 size
);

void asgiDraw (ASGI_GPURenderEncoderBase* pEncoder,
	ASGI_GPUSize32 vertexCount, ASGI_GPUSize32 instanceCount,
	ASGI_GPUSize32 firstVertex, ASGI_GPUSize32 firstInstance
);

void asgiDrawIndexed (ASGI_GPURenderEncoderBase* pEncoder,
	ASGI_GPUSize32 indexCount, ASGI_GPUSize32 instanceCount,
	ASGI_GPUSize32 firstIndex,
	ASGI_GPUSignedOffset32 baseVertex,
	ASGI_GPUSize32 firstInstance
);

void asgiDrawIndirect (ASGI_GPURenderEncoderBase* pEncoder, ASGI_GPUBuffer* pIndirectBuffer, ASGI_GPUSize64 indirectOffset);

void asgiDrawIndexedIndirect (ASGI_GPURenderEncoderBase* pEncoder, ASGI_GPUBuffer* pIndirectBuffer, ASGI_GPUSize64 indirectOffset);