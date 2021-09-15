#pragma once


#include "Export.h"
#include "GPUInterface\GPU.h"

typedef enum ASGI_GPU_INTERFACE_TYPE
{
	ASGI_GPU_INTERFACE_TYPE_VULKAN = 0,
	ASGI_GPU_INTERFACE_TYPE_DIRECTX12
} ASGI_GPU_INTERFACE_TYPE;


ASGI_API ASGI_GPU* asgiCreateGPUInstance(ASGI_GPU_INTERFACE_TYPE interfaceType);

