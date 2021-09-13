#pragma once

#include "GPUBindGroupLayout.h"

struct GPUPipelineBase {
};

GPUBindGroupLayout getBindGroupLayout(GPUPipelineBase* pipline, unsigned long index);