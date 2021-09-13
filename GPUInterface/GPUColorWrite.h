#pragma once

enum ASGI_GPUColorWrite {
	ASGI_COLOR_WRITE_RED = 0x1,
	ASGI_COLOR_WRITE_GREEN = 0x2,
	ASGI_COLOR_WRITE_BLUE = 0x4,
	ASGI_COLOR_WRITE_ALPHA = 0x8,
	ASGI_COLOR_WRITE_ALL = 0xF
};
typedef unsigned long ASGI_GPUColorWriteFlags;