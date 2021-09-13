#pragma once

struct GPUSupportedLimits {
	unsigned long maxTextureDimension1D;
	unsigned long maxTextureDimension2D;
	unsigned long maxTextureDimension3D;
	unsigned long maxTextureArrayLayers;
	unsigned long maxBindGroups;
	unsigned long maxDynamicUniformBuffersPerPipelineLayout;
	unsigned long maxDynamicStorageBuffersPerPipelineLayout;
	unsigned long maxSampledTexturesPerShaderStage;
	unsigned long maxSamplersPerShaderStage;
	unsigned long maxStorageBuffersPerShaderStage;
	unsigned long maxStorageTexturesPerShaderStage;
	unsigned long maxUniformBuffersPerShaderStage;
	unsigned long long maxUniformBufferBindingSize;
	unsigned long long maxStorageBufferBindingSize;
	unsigned long minUniformBufferOffsetAlignment;
	unsigned long minStorageBufferOffsetAlignment;
	unsigned long maxVertexBuffers;
	unsigned long maxVertexAttributes;
	unsigned long maxVertexBufferArrayStride;
	unsigned long maxInterStageShaderComponents;
	unsigned long maxComputeWorkgroupStorageSize;
	unsigned long maxComputeInvocationsPerWorkgroup;
	unsigned long maxComputeWorkgroupSizeX;
	unsigned long maxComputeWorkgroupSizeY;
	unsigned long maxComputeWorkgroupSizeZ;
	unsigned long maxComputeWorkgroupsPerDimension;
};