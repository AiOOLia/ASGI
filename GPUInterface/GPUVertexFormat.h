#pragma once

typedef enum ASGI_GPUVertexFormat {
	ASGI_VERTEX_FORMAT_Uint8x2,
	ASGI_VERTEX_FORMAT_Uint8x4,
	ASGI_VERTEX_FORMAT_Sint8x2,
	ASGI_VERTEX_FORMAT_Sint8x4,
	ASGI_VERTEX_FORMAT_Unorm8x2,
	ASGI_VERTEX_FORMAT_Unorm8x4,
	ASGI_VERTEX_FORMAT_Snorm8x2,
	ASGI_VERTEX_FORMAT_Snorm8x4,
	ASGI_VERTEX_FORMAT_Uint16x2,
	ASGI_VERTEX_FORMAT_Uint16x4,
	ASGI_VERTEX_FORMAT_Sint16x2,
	ASGI_VERTEX_FORMAT_Sint16x4,
	ASGI_VERTEX_FORMAT_Unorm16x2,
	ASGI_VERTEX_FORMAT_Unorm16x4,
	ASGI_VERTEX_FORMAT_Snorm16x2,
	ASGI_VERTEX_FORMAT_Snorm16x4,
	ASGI_VERTEX_FORMAT_Float16x2,
	ASGI_VERTEX_FORMAT_Float16x4,
	ASGI_VERTEX_FORMAT_Float32,
	ASGI_VERTEX_FORMAT_Float32x2,
	ASGI_VERTEX_FORMAT_Float32x3,
	ASGI_VERTEX_FORMAT_Float32x4,
	ASGI_VERTEX_FORMAT_Uint32,
	ASGI_VERTEX_FORMAT_Uint32x2,
	ASGI_VERTEX_FORMAT_Uint32x3,
	ASGI_VERTEX_FORMAT_Uint32x4,
	ASGI_VERTEX_FORMAT_Sint32,
	ASGI_VERTEX_FORMAT_Sint32x2,
	ASGI_VERTEX_FORMAT_Sint32x3,
	ASGI_VERTEX_FORMAT_Sint32x4
} ASGI_GPUVertexFormat;