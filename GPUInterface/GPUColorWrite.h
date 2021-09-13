#pragma once

enum GPUColorWrite {
	RED = 0x1,
	GREEN = 0x2,
	BLUE = 0x4,
	ALPHA = 0x8,
	ALL = 0xF
};
typedef unsigned long GPUColorWriteFlags;