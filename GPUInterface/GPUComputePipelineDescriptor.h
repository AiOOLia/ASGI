#pragma once

#include "GPUPipelineLayout.h"
#include "GPUProgrammableStage.h"

typedef struct ASGI_GPUComputePipelineDescriptor {
	ASGI_GPUPipelineLayout* layout;
	ASGI_GPUProgrammableStage* compute;
} ASGI_GPUComputePipelineDescriptor;
