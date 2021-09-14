#pragma once

#include "GPUDefines.h"

typedef struct ASGI_GPUExtent3D {
	ASGI_GPUIntegerCoordinate width;
	ASGI_GPUIntegerCoordinate height;
	ASGI_GPUIntegerCoordinate depthOrArrayLayers;
} ASGI_GPUExtent3D;