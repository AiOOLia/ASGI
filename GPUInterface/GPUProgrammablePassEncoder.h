#pragma once

#include "GPUDefines.h"
#include "GPUBindGroup.h"

struct GPUProgrammablePassEncoder {
};

void setBindGroup(GPUProgrammablePassEncoder* encoder,
	GPUIndex32 index, GPUBindGroup bindGroup, int numOffset, GPUBufferDynamicOffset* dynamicOffsets);

void setBindGroupRange(GPUProgrammablePassEncoder* encoder,
	GPUIndex32 index, GPUBindGroup bindGroup,
	int numoffsetsData, unsigned int* dynamicOffsetsData,
	GPUSize64 dynamicOffsetsDataStart,
	GPUSize32 dynamicOffsetsDataLength);

void pushDebugGroup(GPUProgrammablePassEncoder* encoder, const char* groupLabel);
void popDebugGroup(GPUProgrammablePassEncoder* encoder);
void insertDebugMarker(GPUProgrammablePassEncoder* encoder, const char* markerLabel);