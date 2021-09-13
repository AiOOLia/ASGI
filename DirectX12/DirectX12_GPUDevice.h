#pragma once

#include "../GPUInterface/GPUDevice.h"

struct  DX12_GPUDevice {
	struct ASGI_GPUDevice gpuDevice;
	//
};

ASGI_GPUBuffer* dx12CreateBuffer(ASGI_GPUDevice* pDevice, ASGI_GPUBufferDescriptor* pDescriptor);

ASGI_GPUTexture* dx12CreateTexture(ASGI_GPUDevice* pDevice, ASGI_GPUTextureDescriptor* pDescriptor);

ASGI_GPUSampler* dx12CreateSampler(ASGI_GPUDevice* pDevice, ASGI_GPUSamplerDescriptor* pDescriptor);

ASGI_GPUExternalTexture* dx12ImportExternalTexture(ASGI_GPUDevice* pDevice, ASGI_GPUExternalTextureDescriptor* pDescriptor);

ASGI_GPUBindGroupLayout* dx12CreateBindGroupLayout(ASGI_GPUDevice* pDevice, ASGI_GPUBindGroupLayoutDescriptor* pDescriptor);

ASGI_GPUPipelineLayout* dx12CreatePipelineLayout(ASGI_GPUDevice* pDevice, ASGI_GPUPipelineLayoutDescriptor* pDescriptor);

ASGI_GPUBindGroup* dx12CreateBindGroup(ASGI_GPUDevice* pDevice, ASGI_GPUBindGroupDescriptor* pDescriptor);

ASGI_GPUShaderModule* dx12CreateShaderModule(ASGI_GPUDevice* pDevice, ASGI_GPUShaderModuleDescriptor* pDescriptor);

ASGI_GPUComputePipeline* dx12CreateComputePipeline(ASGI_GPUDevice* pDevice, ASGI_GPUComputePipelineDescriptor* pDescriptor);

ASGI_GPURenderPipeline* dx12CreateRenderPipeline(ASGI_GPUDevice* pDevice, ASGI_GPURenderPipelineDescriptor* pDescriptor);

void dx12CreateComputePipelineAsync(ASGI_GPUDevice* pDevice, ASGI_GPUComputePipelineDescriptor* pDescriptor, void (*callBack)(ASGI_GPUComputePipeline*));

void dx12CreateRenderPipelineAsync(ASGI_GPUDevice* pDevice, ASGI_GPURenderPipelineDescriptor* pDescriptor, void (*callBack)(ASGI_GPURenderPipeline*));

ASGI_GPUCommandEncoder* dx12CreateCommandEncoder(ASGI_GPUDevice* pDevice, ASGI_GPUCommandEncoderDescriptor* pDescriptor);

ASGI_GPURenderBundleEncoder* dx12CreateRenderBundleEncoder(ASGI_GPUDevice* pDevice, ASGI_GPURenderBundleEncoderDescriptor* pDescriptor);

ASGI_GPUQuerySet* dx12CreateQuerySet(ASGI_GPUDevice* pDevice, ASGI_GPUQuerySetDescriptor* pDescriptor);

