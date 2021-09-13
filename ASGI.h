﻿#pragma once

#include "GPUInterface\GPU.h"

enum ASGI_GPU_INTERFACE_TYPE
{
	ASGI_GPU_INTERFACE_TYPE_VULKAN,
	ASGI_GPU_INTERFACE_TYPE_DIRECTX12
};

ASGI_GPU* asgiCreateGPUInstance(ASGI_GPU_INTERFACE_TYPE interfaceType);

