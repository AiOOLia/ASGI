#pragma once

enum GPUShaderStage {
	VERTEX = 0x1,
	FRAGMENT = 0x2,
	COMPUTE = 0x4
};
typedef unsigned long GPUShaderStageFlags;