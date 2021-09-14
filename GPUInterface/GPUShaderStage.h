#pragma once

typedef enum ASGI_GPUShaderStage {
	ASGI_SHADER_STAGE_VERTEX = 0x1,
	ASGI_SHADER_STAGE_FRAGMENT = 0x2,
	ASGI_SHADER_STAGE_COMPUTE = 0x4
} ASGI_GPUShaderStage;
typedef unsigned long ASGI_GPUShaderStageFlags;