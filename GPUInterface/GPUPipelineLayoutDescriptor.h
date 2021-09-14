#pragma once

#include "GPUBindGroupLayout.h"

typedef struct ASGI_GPUPipelineLayoutDescriptor {
	int numLayout;
	ASGI_GPUBindGroupLayout* bindGroupLayouts;
} ASGI_GPUPipelineLayoutDescriptor;