#pragma once

#include "GPUDefines.h"

struct GPUExtent3D
{
	GPUIntegerCoordinate width;
	GPUIntegerCoordinate height = 1;
	GPUIntegerCoordinate depthOrArrayLayers = 1;
};