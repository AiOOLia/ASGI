#pragma once

#include "GPUStorageTextureAccess.h"
#include "GPUTextureFormat.h"
#include "GPUTextureViewDimension.h"

typedef struct ASGI_GPUStorageTextureBindingLayout {
	ASGI_GPUStorageTextureAccess access;
	ASGI_GPUTextureFormat format;
	ASGI_GPUTextureViewDimension viewDimension;
} ASGI_GPUStorageTextureBindingLayout;