#pragma once

#include "GPUBindGroupLayout.h"

struct GPUPipelineLayoutDescriptor {
	int numLayout;
	GPUBindGroupLayout* bindGroupLayouts;
};