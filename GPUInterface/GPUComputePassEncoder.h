#pragma once


#include "GPUComputePipeline.h"
#include "GPUBuffer.h"
#include "GPUProgrammablePassEncoder.h"

typedef struct ASGI_GPUComputePassEncoder {
	const char* label;
	ASGI_GPUProgrammablePassEncoder* programmablePassEncoder;
} ASGI_GPUComputePassEncoder;

void asgiSetComputePipeline(ASGI_GPUComputePassEncoder* pEncoder, ASGI_GPUComputePipeline* pPipeline);

void asgiDispatch(ASGI_GPUComputePassEncoder* pEncoder, ASGI_GPUSize32 x, ASGI_GPUSize32 y, ASGI_GPUSize32 z);

void asgiDispatchIndirect(ASGI_GPUComputePassEncoder* pEncoder, ASGI_GPUBuffer* pIndirectBuffer, ASGI_GPUSize64 indirectOffset);

void asgiBeginComputePipelineStatisticsQuery(ASGI_GPUComputePassEncoder* pEncoder, ASGI_GPUQuerySet* pQuerySet, ASGI_GPUSize32 queryIndex);

void asgiEndComputePipelineStatisticsQuery(ASGI_GPUComputePassEncoder* pEncoder);

void asgiWriteTimestampCPE(ASGI_GPUComputePassEncoder* pEncoder, ASGI_GPUQuerySet* pQuerySet, ASGI_GPUSize32 queryIndex);

void asgiEndComputePass(ASGI_GPUComputePassEncoder* pEncoder);