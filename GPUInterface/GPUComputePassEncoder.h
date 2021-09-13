#pragma once


#include "GPUComputePipeline.h"
#include "GPUBuffer.h"
#include "GPUProgrammablePassEncoder.h"

struct ASGI_GPUComputePassEncoder {
	const char* label;
	ASGI_GPUProgrammablePassEncoder* programmablePassEncoder;
};

void asgiSetPipeline(ASGI_GPUComputePassEncoder* pEncoder, ASGI_GPUComputePipeline* pPipeline);

void asgiDispatch(ASGI_GPUComputePassEncoder* pEncoder, ASGI_GPUSize32 x, ASGI_GPUSize32 y = 1, ASGI_GPUSize32 z = 1);

void asgiDispatchIndirect(ASGI_GPUComputePassEncoder* pEncoder, ASGI_GPUBuffer* pIndirectBuffer, ASGI_GPUSize64 indirectOffset);

void asgiBeginPipelineStatisticsQuery(ASGI_GPUComputePassEncoder* pEncoder, ASGI_GPUQuerySet* pQuerySet, ASGI_GPUSize32 queryIndex);

void asgiEndPipelineStatisticsQuery(ASGI_GPUComputePassEncoder* pEncoder);

void asgiWriteTimestamp(ASGI_GPUComputePassEncoder* pEncoder, ASGI_GPUQuerySet* pQuerySet, ASGI_GPUSize32 queryIndex);

void asgiEndComputePass(ASGI_GPUComputePassEncoder* pEncoder);