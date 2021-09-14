#pragma once

#include "../Export.h"
#include "GPUComputePipeline.h"
#include "GPUBuffer.h"
#include "GPUProgrammablePassEncoder.h"

typedef struct ASGI_GPUComputePassEncoder {
	const char* label;
	ASGI_GPUProgrammablePassEncoder* programmablePassEncoder;
} ASGI_GPUComputePassEncoder;

ASGI_API void asgiSetComputePipeline(ASGI_GPUComputePassEncoder* pEncoder, ASGI_GPUComputePipeline* pPipeline);

ASGI_API void asgiDispatch(ASGI_GPUComputePassEncoder* pEncoder, ASGI_GPUSize32 x, ASGI_GPUSize32 y, ASGI_GPUSize32 z);

ASGI_API void asgiDispatchIndirect(ASGI_GPUComputePassEncoder* pEncoder, ASGI_GPUBuffer* pIndirectBuffer, ASGI_GPUSize64 indirectOffset);

ASGI_API void asgiBeginComputePipelineStatisticsQuery(ASGI_GPUComputePassEncoder* pEncoder, ASGI_GPUQuerySet* pQuerySet, ASGI_GPUSize32 queryIndex);

ASGI_API void asgiEndComputePipelineStatisticsQuery(ASGI_GPUComputePassEncoder* pEncoder);

ASGI_API void asgiWriteTimestampCPE(ASGI_GPUComputePassEncoder* pEncoder, ASGI_GPUQuerySet* pQuerySet, ASGI_GPUSize32 queryIndex);

ASGI_API void asgiEndComputePass(ASGI_GPUComputePassEncoder* pEncoder);