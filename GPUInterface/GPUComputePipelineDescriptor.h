#pragma once

#include "GPUPipelineLayout.h"
#include "GPUProgrammableStage.h"

struct ASGI_GPUComputePipelineDescriptor {
	ASGI_GPUPipelineLayout* layout;
	ASGI_GPUProgrammableStage* compute;
};
