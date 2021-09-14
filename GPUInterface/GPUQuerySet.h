#pragma once


typedef struct ASGI_GPUQuerySet {
	const char* label;
} ASGI_GPUQuerySet;

void asgiDestoryGPUQuerySet(ASGI_GPUQuerySet* pQuerySet);