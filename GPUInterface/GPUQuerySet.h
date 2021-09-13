#pragma once


struct GPUQuerySet {
	const char* label;
};

void destoryGPUQuerySet(GPUQuerySet* querySet);