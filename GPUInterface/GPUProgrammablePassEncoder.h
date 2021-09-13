#pragma once

#include "GPUDefines.h"
#include "GPUBindGroup.h"

struct ASGI_GPUProgrammablePassEncoder {
};

void asgiSetBindGroup(ASGI_GPUProgrammablePassEncoder* pEncoder,
	ASGI_GPUIndex32 index, ASGI_GPUBindGroup* pBindGroup, 
	int numOffset, ASGI_GPUBufferDynamicOffset* dynamicOffsets
);

void asgiSetBindGroupRange(ASGI_GPUProgrammablePassEncoder* pEncoder,
	ASGI_GPUIndex32 index, ASGI_GPUBindGroup* pBindGroup,
	int numoffsetsData, unsigned int* dynamicOffsetsData,
	ASGI_GPUSize64 dynamicOffsetsDataStart,
	ASGI_GPUSize32 dynamicOffsetsDataLength
);

void asgiPushDebugGroupPPE(ASGI_GPUProgrammablePassEncoder* pEncoder, const char* groupLabel);

void asgiPopDebugGroupPPE(ASGI_GPUProgrammablePassEncoder* pEncoder);

void asgiInsertDebugMarkerPPE(ASGI_GPUProgrammablePassEncoder* pEncoder, const char* markerLabel);