#pragma once

typedef enum ASGI_GPUCompareFunction {
	ASGI_COMPARE_FUNC_Never,
	ASGI_COMPARE_FUNC_Less,
	ASGI_COMPARE_FUNC_Equal,
	ASGI_COMPARE_FUNC_LessEqual,
	ASGI_COMPARE_FUNC_Greater,
	ASGI_COMPARE_FUNC_NotEqual,
	ASGI_COMPARE_FUNC_GreaterEqual,
	ASGI_COMPARE_FUNC_Always
} ASGI_GPUCompareFunction;
