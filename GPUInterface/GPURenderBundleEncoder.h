#pragma once

#include "GPURenderBundle.h"
#include "GPURenderBundleDescriptor.h"
#include "GPUProgrammablePassEncoder.h"
#include "GPURenderEncoderBase.h"

struct GPURenderBundleEncoder {
	const char* label;
	struct GPUProgrammablePassEncoder* programmablePassEncoder;
	struct GPURenderEncoderBase* renderEncoderBase;
};

GPURenderBundle* finishRenderBundleEncoder(GPURenderBundleEncoder* encoder, GPURenderBundleDescriptor* descriptor);