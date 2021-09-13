#pragma once

enum GPUBufferState {
	Mapped,
	MappedAtCreation,
	MappingPending,
	Unmapped,
	Destroyed
};
