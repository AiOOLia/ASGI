#pragma once

enum ASGI_GPUStencilOperation {
	ASGI_STENCIL_OP_Keep,
	ASGI_STENCIL_OP_Zero,
	ASGI_STENCIL_OP_Replace,
	ASGI_STENCIL_OP_Invert,
	ASGI_STENCIL_OP_IncrementClamp,
	ASGI_STENCIL_OP_DecrementClamp,
	ASGI_STENCIL_OP_IncrementWrap,
	ASGI_STENCIL_OP_DecrementWrap
};
