#pragma once

#include "GPUStorageTextureAccess.h"
#include "GPUTextureFormat.h"
#include "GPUTextureViewDimension.h"

struct ASGI_GPUStorageTextureBindingLayout {
	ASGI_GPUStorageTextureAccess access;
	ASGI_GPUTextureFormat format;
	ASGI_GPUTextureViewDimension viewDimension;
};