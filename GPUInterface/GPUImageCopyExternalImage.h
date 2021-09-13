#pragma once

#include "GPUOrigin2D.h"

struct ASGI_GPUImageCopyExternalImage
{
    const char* pSource;
    ASGI_GPUOrigin2D origin;
};