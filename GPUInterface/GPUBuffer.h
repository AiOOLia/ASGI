#pragma once

#include "GPUDefines.h"
#include "GPUMapMode.h"

typedef struct ASGI_GPUBuffer {
	const char* label;
} ASGI_GPUBuffer;

void asgiMap (ASGI_GPUBuffer* pBuffer, ASGI_GPUMapModeFlags mode, ASGI_GPUSize64 offset, ASGI_GPUSize64 size);

void asgiMapAsync (ASGI_GPUBuffer* pBuffer, ASGI_GPUMapModeFlags mode, ASGI_GPUSize64 offset, ASGI_GPUSize64 size, void (*callBack)());

unsigned char* asgiGetMappedRange (ASGI_GPUBuffer* pBuffer, ASGI_GPUSize64 offset, ASGI_GPUSize64 size);

void asgiUnmap (ASGI_GPUBuffer* pBuffer);

void asgiDestroyGPUBuffer (ASGI_GPUBuffer* pBuffer);
