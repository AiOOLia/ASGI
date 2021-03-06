#pragma once

typedef enum ASGI_GPUBufferUsage {
	ASGI_BUFFER_USG_MAP_READ = 0x0001,
	ASGI_BUFFER_USG_MAP_WRITE = 0x0002,
	ASGI_BUFFER_USG_COPY_SRC = 0x0004,
	ASGI_BUFFER_USG_COPY_DST = 0x0008,
	ASGI_BUFFER_USG_INDEX = 0x0010,
	ASGI_BUFFER_USG_VERTEX = 0x0020,
	ASGI_BUFFER_USG_UNIFORM = 0x0040,
	ASGI_BUFFER_USG_STORAGE = 0x0080,
	ASGI_BUFFER_USG_INDIRECT = 0x0100,
	ASGI_BUFFER_USG_QUERY_RESOLVE = 0x0200
} ASGI_GPUBufferUsage;
typedef unsigned long ASGI_GPUBufferUsageFlags;