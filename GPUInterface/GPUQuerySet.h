#pragma once

#include "../Export.h"
typedef struct ASGI_GPUQuerySet {
	const char* label;
} ASGI_GPUQuerySet;

ASGI_API void asgiDestoryGPUQuerySet(ASGI_GPUQuerySet* pQuerySet);