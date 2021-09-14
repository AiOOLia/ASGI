#pragma once

typedef enum ASGI_GPUMapMode {
	ASGI_MAP_MODE_READ = 0x0001,
	ASGI_MAP_MODE_WRITE = 0x0002
} ASGI_GPUMapMode;
typedef  unsigned long ASGI_GPUMapModeFlags;