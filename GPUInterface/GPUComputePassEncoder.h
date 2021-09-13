#pragma once


#include "GPUComputePipeline.h"
#include "GPUBuffer.h"

struct GPUComputePassEncoder {
	const char* label;
};

void setPipeline(GPUComputePassEncoder* encoder, GPUComputePipeline pipeline);
void dispatch(GPUComputePassEncoder* encoder, GPUSize32 x, GPUSize32 y = 1, GPUSize32 z = 1);
void dispatchIndirect(GPUComputePassEncoder* encoder, GPUBuffer indirectBuffer, GPUSize64 indirectOffset);

void beginPipelineStatisticsQuery(GPUComputePassEncoder* encoder, GPUQuerySet querySet, GPUSize32 queryIndex);
void endPipelineStatisticsQuery(GPUComputePassEncoder* encoder);

void writeTimestamp(GPUComputePassEncoder* encoder, GPUQuerySet querySet, GPUSize32 queryIndex);

void endComputePass(GPUComputePassEncoder* encoder);