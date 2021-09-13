#pragma once

#include "GPUTextureFormat.h"
#include "GPUBlendState.h"
#include "GPUColorWrite.h"

struct ASGI_GPUColorTargetState {
	ASGI_GPUTextureFormat format;
	ASGI_GPUBlendState blend;
	ASGI_GPUColorWriteFlags writeMask;  // ASGI_GPUColorWrite.ALL
};