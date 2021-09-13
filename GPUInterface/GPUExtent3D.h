#pragma once

#include "GPUDefines.h"

struct ASGI_GPUExtent3D
{
	ASGI_GPUIntegerCoordinate width;
	ASGI_GPUIntegerCoordinate height = 1;
	ASGI_GPUIntegerCoordinate depthOrArrayLayers = 1;
};