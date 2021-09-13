#pragma once

#include "GPUBindGroupLayout.h"
#include "GPUBindGroupEntry.h"

struct GPUBindGroupDescriptor {
	GPUBindGroupLayout layout;
	int numEntry;
	GPUBindGroupEntry* entries;
};