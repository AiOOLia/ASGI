#pragma once


#include "GPUBufferDescriptor.h"
#include "GPUBuffer.h"
#include "GPUTexture.h"
#include "GPUTextureDescriptor.h"
#include "GPUSampler.h"
#include "GPUSamplerDescriptor.h"
#include "GPUExternalTexture.h"
#include "GPUExternalTextureDescriptor.h"
#include "GPUBindGroupLayout.h"
#include "GPUBindGroupLayoutDescriptor.h"
#include "GPUPipelineLayout.h"
#include "GPUPipelineLayoutDescriptor.h"
#include "GPUBindGroup.h"
#include "GPUBindGroupDescriptor.h"
#include "GPUShaderModule.h"
#include "GPUShaderModuleDescriptor.h"
#include "GPUComputePipeline.h"
#include "GPUComputePipelineDescriptor.h"
#include "GPURenderPipeline.h"
#include "GPURenderPipelineDescriptor.h"
#include "GPUCommandEncoder.h"
#include "GPUCommandEncoderDescriptor.h"
#include "GPURenderBundleEncoder.h"
#include "GPURenderBundleEncoderDescriptor.h"
#include "GPUQuerySet.h"
#include "GPUQuerySetDescriptor.h"


struct GPUDevice
{
	const char* label;
	GPUAdapter* adapter;
	GPUSupportedFeatures features;
	GPUSupportedLimits limits;
	GPUQueue* queue;
};

GPUBuffer* createBuffer(GPUDevice* device, GPUBufferDescriptor descriptor);

GPUTexture* createTexture(GPUDevice* device, GPUTextureDescriptor* descriptor);

GPUSampler* createSampler(GPUDevice* device, GPUSamplerDescriptor* descriptor);

GPUExternalTexture* importExternalTexture(GPUDevice* device, GPUExternalTextureDescriptor descriptor);

GPUBindGroupLayout* createBindGroupLayout(GPUDevice* device, GPUBindGroupLayoutDescriptor descriptor);

GPUPipelineLayout createPipelineLayout(GPUDevice* device, GPUPipelineLayoutDescriptor* descriptor);

GPUBindGroup createBindGroup(GPUDevice* device, GPUBindGroupDescriptor descriptor);

GPUShaderModule* createShaderModule(GPUDevice* device, GPUShaderModuleDescriptor descriptor);

GPUComputePipeline* createComputePipeline(GPUDevice* device, GPUComputePipelineDescriptor descriptor);

GPURenderPipeline createRenderPipeline(GPUDevice* device, GPURenderPipelineDescriptor descriptor);

//Promise<GPUComputePipeline> createComputePipelineAsync(GPUComputePipelineDescriptor descriptor);
//Promise<GPURenderPipeline> createRenderPipelineAsync(GPURenderPipelineDescriptor descriptor);

GPUCommandEncoder* createCommandEncoder(GPUDevice* device, GPUCommandEncoderDescriptor* descriptor);

GPURenderBundleEncoder* createRenderBundleEncoder(GPUDevice* device, GPURenderBundleEncoderDescriptor* descriptor);

GPUQuerySet* createQuerySet(GPUDevice* device, GPUQuerySetDescriptor* descriptor);