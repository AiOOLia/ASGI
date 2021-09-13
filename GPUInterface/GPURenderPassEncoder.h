#pragma once

#include "GPUDefines.h"
#include "GPURenderEncoderBase.h"
#include "GPUProgrammablePassEncoder.h"
#include "GPURenderBundle.h"
#include "GPUQuerySet.h"
#include "GPUColor.h"


struct ASGI_GPURenderPassEncoder {
	const char* label;
	ASGI_GPUProgrammablePassEncoder* programmablePassEncoder;
	ASGI_GPURenderEncoderBase* renderEncoder;
};

void asgiSetScissorRect(ASGI_GPURenderPassEncoder* pEncoder, 
	ASGI_GPUIntegerCoordinate x, ASGI_GPUIntegerCoordinate y,
	ASGI_GPUIntegerCoordinate width, ASGI_GPUIntegerCoordinate height
);

void asgiSetViewport(ASGI_GPURenderPassEncoder* pEncoder, 
	float x, float y,
	float width, float height,
	float minDepth, float maxDepth
);

void asgiSetBlendConstant(ASGI_GPURenderPassEncoder* pEncoder, ASGI_GPUColor* pColor);

void asgiSetStencilReference(ASGI_GPURenderPassEncoder* pEncoder, ASGI_GPUStencilValue reference);

void asgiBeginOcclusionQuery(ASGI_GPURenderPassEncoder* pEncoder, ASGI_GPUSize32 queryIndex);

void asgiEndOcclusionQuery(ASGI_GPURenderPassEncoder* pEncoder);

void asgiBeginPipelineStatisticsQuery(ASGI_GPURenderPassEncoder* pEncoder, ASGI_GPUQuerySet* pQuerySet, ASGI_GPUSize32 queryIndex);

void asgiEndPipelineStatisticsQuery(ASGI_GPURenderPassEncoder* pEncoder);

void asgiWriteTimestampRPE(ASGI_GPURenderPassEncoder* pEncoder, ASGI_GPUQuerySet* pQuerySet, ASGI_GPUSize32 queryIndex);

void asgiExecuteBundles(ASGI_GPURenderPassEncoder* pEncoder, int numBundle, ASGI_GPURenderBundle* bundles);

void asgiEndRenderPass(ASGI_GPURenderPassEncoder* pEncoder);