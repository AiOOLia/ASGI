#pragma once

#include "GPUBindGroupLayoutEntry.h"

struct GPUBindGroupLayoutDescriptor {
	int numEntry;
	GPUBindGroupLayoutEntry* entries;
};