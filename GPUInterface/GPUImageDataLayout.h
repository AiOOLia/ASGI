#pragma once

#include "GPUDefines.h"

struct ASGI_GPUImageDataLayout{
    ASGI_GPUSize64 offset;
    ASGI_GPUSize32 bytesPerRow;
    ASGI_GPUSize32 rowsPerImage;
};