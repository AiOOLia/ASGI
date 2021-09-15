#pragma once

#include "../Export.h"
#include "GPUSupportedFeatures.h"
#include "GPUSupportedLimits.h"
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
#include "GPUSwapChain.h"
#include "GPUSwapChainDescriptor.h"

struct ASGI_GPUAdapter;
typedef struct ASGI_GPUDevice {
	const char* label;
	struct ASGI_GPUAdapter* adapter;
	ASGI_GPUSupportedFeatures features;
	ASGI_GPUSupportedLimits limits;
	ASGI_GPUQueue* queue;
} ASGI_GPUDevice;

ASGI_API ASGI_GPUSwapChain* asgiCreateSwapChain(ASGI_GPUDevice* pDevice, ASGI_GPUSwapChainDescriptor* pDescriptor);

ASGI_API ASGI_GPUBuffer* asgiCreateBuffer(ASGI_GPUDevice* pDevice, ASGI_GPUBufferDescriptor* pDescriptor);

ASGI_API ASGI_GPUTexture* asgiCreateTexture(ASGI_GPUDevice* pDevice, ASGI_GPUTextureDescriptor* pDescriptor);

ASGI_API ASGI_GPUSampler* asgiCreateSampler(ASGI_GPUDevice* pDevice, ASGI_GPUSamplerDescriptor* pDescriptor);

ASGI_API ASGI_GPUExternalTexture* asgiImportExternalTexture(ASGI_GPUDevice* pDevice, ASGI_GPUExternalTextureDescriptor* pDescriptor);

ASGI_API ASGI_GPUBindGroupLayout* asgiCreateBindGroupLayout(ASGI_GPUDevice* pDevice, ASGI_GPUBindGroupLayoutDescriptor* pDescriptor);

ASGI_API ASGI_GPUPipelineLayout* asgiCreatePipelineLayout(ASGI_GPUDevice* pDevice, ASGI_GPUPipelineLayoutDescriptor* pDescriptor);

ASGI_API ASGI_GPUBindGroup* asgiCreateBindGroup(ASGI_GPUDevice* pDevice, ASGI_GPUBindGroupDescriptor* pDescriptor);

ASGI_API ASGI_GPUShaderModule* asgiCreateShaderModule(ASGI_GPUDevice* pDevice, ASGI_GPUShaderModuleDescriptor* pDescriptor);

ASGI_API ASGI_GPUComputePipeline* asgiCreateComputePipeline(ASGI_GPUDevice* pDevice, ASGI_GPUComputePipelineDescriptor* pDescriptor);

ASGI_API ASGI_GPURenderPipeline* asgiCreateRenderPipeline(ASGI_GPUDevice* pDevice, ASGI_GPURenderPipelineDescriptor* pDescriptor);

ASGI_API void asgiCreateComputePipelineAsync(ASGI_GPUDevice* pDevice, ASGI_GPUComputePipelineDescriptor* pDescriptor, void (*callBack)(ASGI_GPUComputePipeline*));

ASGI_API void asgiCreateRenderPipelineAsync(ASGI_GPUDevice* pDevice, ASGI_GPURenderPipelineDescriptor* pDescriptor, void (*callBack)(ASGI_GPURenderPipeline*));

ASGI_API ASGI_GPUCommandEncoder* asgiCreateCommandEncoder(ASGI_GPUDevice* pDevice, ASGI_GPUCommandEncoderDescriptor* pDescriptor);

ASGI_API ASGI_GPURenderBundleEncoder* asgiCreateRenderBundleEncoder(ASGI_GPUDevice* pDevice, ASGI_GPURenderBundleEncoderDescriptor* pDescriptor);

ASGI_API ASGI_GPUQuerySet* asgiCreateQuerySet(ASGI_GPUDevice* pDevice, ASGI_GPUQuerySetDescriptor* pDescriptor);