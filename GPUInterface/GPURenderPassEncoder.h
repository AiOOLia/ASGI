#pragma once

#include "../Export.h"
#include "GPUDefines.h"
#include "GPURenderEncoderBase.h"
#include "GPUProgrammablePassEncoder.h"
#include "GPURenderBundle.h"
#include "GPUQuerySet.h"
#include "GPUColor.h"


typedef struct ASGI_GPURenderPassEncoder {
	const char* label;
	ASGI_GPUProgrammablePassEncoder* programmablePassEncoder;
	ASGI_GPURenderEncoderBase* renderEncoder;
} ASGI_GPURenderPassEncoder;

ASGI_API void asgiSetScissorRect(ASGI_GPURenderPassEncoder* pEncoder,
	ASGI_GPUIntegerCoordinate x, ASGI_GPUIntegerCoordinate y,
	ASGI_GPUIntegerCoordinate width, ASGI_GPUIntegerCoordinate height
);

ASGI_API void asgiSetViewport(ASGI_GPURenderPassEncoder* pEncoder,
	float x, float y,
	float width, float height,
	float minDepth, float maxDepth
);

ASGI_API void asgiSetBlendConstant(ASGI_GPURenderPassEncoder* pEncoder, ASGI_GPUColor* pColor);

ASGI_API void asgiSetStencilReference(ASGI_GPURenderPassEncoder* pEncoder, ASGI_GPUStencilValue reference);

ASGI_API void asgiBeginOcclusionQuery(ASGI_GPURenderPassEncoder* pEncoder, ASGI_GPUSize32 queryIndex);

ASGI_API void asgiEndOcclusionQuery(ASGI_GPURenderPassEncoder* pEncoder);

ASGI_API void asgiBeginRenderPipelineStatisticsQuery(ASGI_GPURenderPassEncoder* pEncoder, ASGI_GPUQuerySet* pQuerySet, ASGI_GPUSize32 queryIndex);

ASGI_API void asgiEndRenderPipelineStatisticsQuery(ASGI_GPURenderPassEncoder* pEncoder);

ASGI_API void asgiWriteTimestampRPE(ASGI_GPURenderPassEncoder* pEncoder, ASGI_GPUQuerySet* pQuerySet, ASGI_GPUSize32 queryIndex);

ASGI_API void asgiExecuteBundles(ASGI_GPURenderPassEncoder* pEncoder, int numBundle, ASGI_GPURenderBundle* bundles);

ASGI_API void asgiEndRenderPass(ASGI_GPURenderPassEncoder* pEncoder);