#pragma once

struct GPUQuerySetDescriptor {
	const char* label;
	GPUQueryType type;
	GPUSize32 count;
	int numPipelineStatistic;
	GPUPipelineStatisticType* pipelineStatistics;
};