#pragma once

#include "../Export.h"
#include "GPUDefines.h"
#include "GPUBindGroup.h"

typedef struct ASGI_GPUProgrammablePassEncoder {
	int type;
} ASGI_GPUProgrammablePassEncoder;

ASGI_API void asgiSetBindGroup(ASGI_GPUProgrammablePassEncoder* pEncoder,
	ASGI_GPUIndex32 index, ASGI_GPUBindGroup* pBindGroup, 
	int numOffset, ASGI_GPUBufferDynamicOffset* dynamicOffsets
);

ASGI_API void asgiSetBindGroupRange(ASGI_GPUProgrammablePassEncoder* pEncoder,
	ASGI_GPUIndex32 index, ASGI_GPUBindGroup* pBindGroup,
	int numoffsetsData, unsigned int* dynamicOffsetsData,
	ASGI_GPUSize64 dynamicOffsetsDataStart,
	ASGI_GPUSize32 dynamicOffsetsDataLength
);

ASGI_API void asgiPushDebugGroupPPE(ASGI_GPUProgrammablePassEncoder* pEncoder, const char* groupLabel);

ASGI_API void asgiPopDebugGroupPPE(ASGI_GPUProgrammablePassEncoder* pEncoder);

ASGI_API void asgiInsertDebugMarkerPPE(ASGI_GPUProgrammablePassEncoder* pEncoder, const char* markerLabel);