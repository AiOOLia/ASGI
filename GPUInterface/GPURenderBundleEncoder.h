#pragma once

#include "GPURenderBundle.h"
#include "GPURenderBundleDescriptor.h"
#include "GPUProgrammablePassEncoder.h"
#include "GPURenderEncoderBase.h"

struct ASGI_GPURenderBundleEncoder {
	const char* label;
	struct ASGI_GPUProgrammablePassEncoder* programmablePassEncoder;
	struct ASGI_GPURenderEncoderBase* renderEncoder;
};

ASGI_GPURenderBundle* asgiFinishRenderBundleEncoder(ASGI_GPURenderBundleEncoder* pEncoder, ASGI_GPURenderBundleDescriptor* pDescriptor);