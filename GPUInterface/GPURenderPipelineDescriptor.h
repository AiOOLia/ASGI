#pragma once

#include "GPUPipelineLayout.h"
#include "GPUVertexState.h"
#include "GPUPrimitiveState.h"
#include "GPUDepthStencilState.h"
#include "GPUMultisampleState.h"
#include "GPUFragmentState.h"

typedef struct ASGI_GPURenderPipelineDescriptor {
	const char* label;
	ASGI_GPUPipelineLayout* layout;
	ASGI_GPUVertexState vertex;
	ASGI_GPUPrimitiveState primitive;
	ASGI_GPUDepthStencilState depthStencil;
	ASGI_GPUMultisampleState multisample;
	ASGI_GPUFragmentState fragment;
} ASGI_GPURenderPipelineDescriptor;