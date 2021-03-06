#pragma once

typedef enum ASGI_GPUTextureUsage {
	ASGI_TEX_USG_COPY_SRC = 0x01,
	ASGI_TEX_USG_COPY_DST = 0x02,
	ASGI_TEX_USG_TEXTURE_BINDING = 0x04,
	ASGI_TEX_USG_STORAGE_BINDING = 0x08,
	ASGI_TEX_USG_RENDER_ATTACHMENT = 0x10
} ASGI_GPUTextureUsage;
typedef unsigned long ASGI_GPUTextureUsageFlags;
