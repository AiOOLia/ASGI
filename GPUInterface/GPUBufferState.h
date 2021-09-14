#pragma once

typedef enum ASGI_GPUBufferState {
	ASGI_BUFFER_STATE_Mapped,
	ASGI_BUFFER_STATE_MappedAtCreation,
	ASGI_BUFFER_STATE_MappingPending,
	ASGI_BUFFER_STATE_Unmapped,
	ASGI_BUFFER_STATE_Destroyed
} ASGI_GPUBufferState;
