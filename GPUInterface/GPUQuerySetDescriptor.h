#pragma once

#include "GPUQueryType.h"
#include "GPUPipelineStatisticType.h"

typedef struct ASGI_GPUQuerySetDescriptor {
	const char* label;
	ASGI_GPUQueryType type;
	ASGI_GPUSize32 count;
	int numPipelineStatistic;
	ASGI_GPUPipelineStatisticType* pipelineStatistics;
} ASGI_GPUQuerySetDescriptor;