#pragma once

#include "GPUBindGroupLayout.h"

struct ASGI_GPUPipelineLayoutDescriptor {
	int numLayout;
	ASGI_GPUBindGroupLayout* bindGroupLayouts;
};