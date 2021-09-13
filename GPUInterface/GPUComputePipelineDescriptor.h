#pragma once

#include "GPUPipelineLayout.h"
#include "GPUProgrammableStage.h"

struct GPUComputePipelineDescriptor {
	GPUPipelineLayout* layout;
	GPUProgrammableStage* compute;
};
