#pragma once

#include "GPUOrigin2D.h"

typedef struct ASGI_GPUImageCopyExternalImage {
    const char* pSource;
    ASGI_GPUOrigin2D origin;
} ASGI_GPUImageCopyExternalImage;