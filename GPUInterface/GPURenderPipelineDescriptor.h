#pragma once

#include "GPUPipelineLayout.h"
#include "GPUVertexState.h"
#include "GPUPrimitiveState.h"
#include "GPUDepthStencilState.h"
#include "GPUMultisampleState.h"
#include "GPUFragmentState.h"

struct GPURenderPipelineDescriptor {
	const char* label;
	GPUPipelineLayout* layout;
	GPUVertexState vertex;
	GPUPrimitiveState primitive;
	GPUDepthStencilState depthStencil;
	GPUMultisampleState multisample;
	GPUFragmentState fragment;
};