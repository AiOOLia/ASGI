#pragma once



#include "GPUQueue.h"
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

struct ASGI_GPUAdapter;
struct ASGI_GPUDevice
{
	const char* label;
	ASGI_GPUAdapter* adapter;
	ASGI_GPUSupportedFeatures features;
	ASGI_GPUSupportedLimits limits;
	ASGI_GPUQueue* queue;
};

ASGI_GPUBuffer* asgiCreateBuffer(ASGI_GPUDevice* pDevice, ASGI_GPUBufferDescriptor* pDescriptor);

ASGI_GPUTexture* asgiCreateTexture(ASGI_GPUDevice* pDevice, ASGI_GPUTextureDescriptor* pDescriptor);

ASGI_GPUSampler* asgiCreateSampler(ASGI_GPUDevice* pDevice, ASGI_GPUSamplerDescriptor* pDescriptor);

ASGI_GPUExternalTexture* asgiImportExternalTexture(ASGI_GPUDevice* pDevice, ASGI_GPUExternalTextureDescriptor* pDescriptor);

ASGI_GPUBindGroupLayout* asgiCreateBindGroupLayout(ASGI_GPUDevice* pDevice, ASGI_GPUBindGroupLayoutDescriptor* pDescriptor);

ASGI_GPUPipelineLayout* asgiCreatePipelineLayout(ASGI_GPUDevice* pDevice, ASGI_GPUPipelineLayoutDescriptor* pDescriptor);

ASGI_GPUBindGroup* asgiCreateBindGroup(ASGI_GPUDevice* pDevice, ASGI_GPUBindGroupDescriptor* pDescriptor);

ASGI_GPUShaderModule* asgiCreateShaderModule(ASGI_GPUDevice* pDevice, ASGI_GPUShaderModuleDescriptor* pDescriptor);

ASGI_GPUComputePipeline* asgiCreateComputePipeline(ASGI_GPUDevice* pDevice, ASGI_GPUComputePipelineDescriptor* pDescriptor);

ASGI_GPURenderPipeline* asgiCreateRenderPipeline(ASGI_GPUDevice* pDevice, ASGI_GPURenderPipelineDescriptor* pDescriptor);

void asgiCreateComputePipelineAsync(ASGI_GPUDevice* pDevice, ASGI_GPUComputePipelineDescriptor* pDescriptor, void (*callBack)(ASGI_GPUComputePipeline*));

void asgiCreateRenderPipelineAsync(ASGI_GPUDevice* pDevice, ASGI_GPURenderPipelineDescriptor* pDescriptor, void (*callBack)(ASGI_GPURenderPipeline*));

ASGI_GPUCommandEncoder* asgiCreateCommandEncoder(ASGI_GPUDevice* pDevice, ASGI_GPUCommandEncoderDescriptor* pDescriptor);

ASGI_GPURenderBundleEncoder* asgiCreateRenderBundleEncoder(ASGI_GPUDevice* pDevice, ASGI_GPURenderBundleEncoderDescriptor* pDescriptor);

ASGI_GPUQuerySet* asgiCreateQuerySet(ASGI_GPUDevice* pDevice, ASGI_GPUQuerySetDescriptor* pDescriptor);