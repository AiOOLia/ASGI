#pragma once

#include "../Export.h"
#include "GPUDefines.h"
#include "GPUMapMode.h"

typedef struct ASGI_GPUBuffer {
	const char* label;
} ASGI_GPUBuffer;

ASGI_API void asgiMap (ASGI_GPUBuffer* pBuffer, ASGI_GPUMapModeFlags mode, ASGI_GPUSize64 offset, ASGI_GPUSize64 size);

ASGI_API void asgiMapAsync (ASGI_GPUBuffer* pBuffer, ASGI_GPUMapModeFlags mode, ASGI_GPUSize64 offset, ASGI_GPUSize64 size, void (*callBack)());

ASGI_API unsigned char* asgiGetMappedRange (ASGI_GPUBuffer* pBuffer, ASGI_GPUSize64 offset, ASGI_GPUSize64 size);

ASGI_API void asgiUnmap (ASGI_GPUBuffer* pBuffer);

ASGI_API void asgiDestroyGPUBuffer (ASGI_GPUBuffer* pBuffer);
