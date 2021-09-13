#include "ASGI.h"

struct GPUInterface
{
	ASGI_GPUAdapter* (*ASGI_FUNC_RequestAdapter)(ASGI_GPU* pGpu, ASGI_GPURequestAdapterOptions* pOptions);
	//
	ASGI_GPUDevice* (*ASGI_FUNC_RequestDevice)(ASGI_GPUAdapter* pAdapter, ASGI_GPUDeviceDescriptor* pDescriptor);
	//
	ASGI_GPUBuffer* (*ASGI_FUNC_CreateBuffer)(ASGI_GPUDevice* pDevice, ASGI_GPUBufferDescriptor* pDescriptor);
	ASGI_GPUTexture* (*ASGI_FUNC_CreateTexture)(ASGI_GPUDevice* pDevice, ASGI_GPUTextureDescriptor* pDescriptor);
	ASGI_GPUSampler* (*ASGI_FUNC_CreateSampler)(ASGI_GPUDevice* pDevice, ASGI_GPUSamplerDescriptor* pDescriptor);
	ASGI_GPUExternalTexture* (*ASGI_FUNC_ImportExternalTexture)(ASGI_GPUDevice* pDevice, ASGI_GPUExternalTextureDescriptor* pDescriptor);
	ASGI_GPUBindGroupLayout* (*ASGI_FUNC_CreateBindGroupLayout)(ASGI_GPUDevice* pDevice, ASGI_GPUBindGroupLayoutDescriptor* pDescriptor);
	ASGI_GPUPipelineLayout* (*ASGI_FUNC_CreatePipelineLayout)(ASGI_GPUDevice* pDevice, ASGI_GPUPipelineLayoutDescriptor* pDescriptor);
	ASGI_GPUBindGroup* (*ASGI_FUNC_CreateBindGroup)(ASGI_GPUDevice* pDevice, ASGI_GPUBindGroupDescriptor* pDescriptor);
	ASGI_GPUShaderModule* (*ASGI_FUNC_CreateShaderModule)(ASGI_GPUDevice* pDevice, ASGI_GPUShaderModuleDescriptor* pDescriptor);
	ASGI_GPUComputePipeline* (*ASGI_FUNC_CreateComputePipeline)(ASGI_GPUDevice* pDevice, ASGI_GPUComputePipelineDescriptor* pDescriptor);
	ASGI_GPURenderPipeline* (*ASGI_FUNC_CreateRenderPipeline)(ASGI_GPUDevice* pDevice, ASGI_GPURenderPipelineDescriptor* pDescriptor);
	void (*ASGI_FUNC_CreateComputePipelineAsync)(ASGI_GPUDevice* pDevice, ASGI_GPUComputePipelineDescriptor* pDescriptor, void (*callBack)(ASGI_GPUComputePipeline*));
	void (*ASGI_FUNC_CreateRenderPipelineAsync)(ASGI_GPUDevice* pDevice, ASGI_GPURenderPipelineDescriptor* pDescriptor, void (*callBack)(ASGI_GPURenderPipeline*));
	ASGI_GPUCommandEncoder* (*ASGI_FUNC_CreateCommandEncoder)(ASGI_GPUDevice* pDevice, ASGI_GPUCommandEncoderDescriptor* pDescriptor);
	ASGI_GPURenderBundleEncoder* (*ASGI_FUNC_CreateRenderBundleEncoder)(ASGI_GPUDevice* pDevice, ASGI_GPURenderBundleEncoderDescriptor* pDescriptor);
	ASGI_GPUQuerySet* (*ASGI_FUNC_CreateQuerySet)(ASGI_GPUDevice* pDevice, ASGI_GPUQuerySetDescriptor* pDescriptor);
	//
	void (*ASGI_FUNC_Submit)(ASGI_GPUQueue* pQueue, int numCommandBuffer, ASGI_GPUCommandBuffer* pCommandBuffers);
	void (*ASGI_FUNC_SubmitAsync)(ASGI_GPUQueue* pQueue, int numCommandBuffer, ASGI_GPUCommandBuffer* pCommandBuffers, void (*onSubmittedWorkDone)());
	void (*ASGI_FUNC_WriteBuffer)(ASGI_GPUQueue* pQueue, ASGI_GPUBuffer* pBuffer, ASGI_GPUSize64 bufferOffset, const char* pData, ASGI_GPUSize64 dataOffset, ASGI_GPUSize64 size);
	void (*ASGI_FUNC_WriteTexture)(ASGI_GPUQueue* pQueue, ASGI_GPUImageCopyTexture* pDestination, const char* pData, ASGI_GPUImageDataLayout* pDataLayout, ASGI_GPUExtent3D size);
	void (*ASGI_FUNC_CopyExternalImageToTexture)(ASGI_GPUQueue* pQueue, ASGI_GPUImageCopyExternalImage* pSource, ASGI_GPUImageCopyTextureTagged* pDestination, ASGI_GPUExtent3D copySize);
	//
	void (*ASGI_FUNC_Map)(ASGI_GPUBuffer* pBuffer, ASGI_GPUMapModeFlags mode, ASGI_GPUSize64 offset, ASGI_GPUSize64 size);
	void (*ASGI_FUNC_MapAsync)(ASGI_GPUBuffer* pBuffer, ASGI_GPUMapModeFlags mode, ASGI_GPUSize64 offset, ASGI_GPUSize64 size, void (*callBack)());
	unsigned char* (*ASGI_FUNC_GetMappedRange)(ASGI_GPUBuffer* pBuffer, ASGI_GPUSize64 offset, ASGI_GPUSize64 size);
	void (*ASGI_FUNC_Unmap)(ASGI_GPUBuffer* pBuffer);
	void (*ASGI_FUNC_DestroyGPUBuffer)(ASGI_GPUBuffer* pBuffer);
	//
	ASGI_GPUTextureView* (*ASGI_FUNC_CreateView)(ASGI_GPUTexture* pTexture, ASGI_GPUTextureViewDescriptor* pDescriptor);
	void (*ASGI_FUNC_DestoryGPUTexture)(ASGI_GPUTexture* pTexture);
	//
	ASGI_GPUCompilationInfo* (*ASGI_FUNC_CompilationInfo)(ASGI_GPUShaderModule* pShaderModule);
	//
	ASGI_GPURenderPassEncoder* (*ASGI_FUNC_BeginRenderPass)(ASGI_GPUCommandEncoder* pEncoder, ASGI_GPURenderPassDescriptor* pDescriptor);
	ASGI_GPUComputePassEncoder* (*ASGI_FUNC_BeginComputePass)(ASGI_GPUCommandEncoder* pEncoder, ASGI_GPUComputePassDescriptor* pDescriptor);
	void (*ASGI_FUNC_CopyBufferToBuffer)(ASGI_GPUCommandEncoder* pEncoder, ASGI_GPUBuffer* pSource, ASGI_GPUSize64 sourceOffset, ASGI_GPUBuffer* pDestination, ASGI_GPUSize64 destinationOffset, ASGI_GPUSize64 size);
	void (*ASGI_FUNC_CopyBufferToTexture)(ASGI_GPUCommandEncoder* pEncoder, ASGI_GPUImageCopyBuffer* pSource, ASGI_GPUImageCopyTexture* pDestination, ASGI_GPUExtent3D copySize);
	void (*ASGI_FUNC_CopyTextureToBuffer)(ASGI_GPUCommandEncoder* pEncoder, ASGI_GPUImageCopyTexture* pSource, ASGI_GPUImageCopyBuffer* pDestination, ASGI_GPUExtent3D copySize);
	void (*ASGI_FUNC_CopyTextureToTexture)(ASGI_GPUCommandEncoder* pEncoder, ASGI_GPUImageCopyTexture* pSource, ASGI_GPUImageCopyTexture* pDestination, ASGI_GPUExtent3D copySize);
	void (*ASGI_FUNC_PushDebugGroupCE)(ASGI_GPUCommandEncoder* pEncoder, const char* groupLabel);
	void (*ASGI_FUNC_PopDebugGroupCE)(ASGI_GPUCommandEncoder* pEncoder);
	void (*ASGI_FUNC_InsertDebugMarkerCE)(ASGI_GPUCommandEncoder* pEncoder, const char* markerLabel);
	void (*ASGI_FUNC_WriteTimestampCE)(ASGI_GPUCommandEncoder* pEncoder, ASGI_GPUQuerySet* pQuerySet, ASGI_GPUSize32 queryIndex);
	void (*ASGI_FUNC_ResolveQuerySet)(ASGI_GPUCommandEncoder* pEncoder, ASGI_GPUQuerySet* pQuerySet, ASGI_GPUSize32 firstQuery, ASGI_GPUSize32 queryCount, ASGI_GPUBuffer* pDestination, ASGI_GPUSize64 destinationOffset);
	ASGI_GPUCommandBuffer* (*ASGI_FUNC_FinishCommandEncoder)(ASGI_GPUCommandEncoder* pEncoder, ASGI_GPUCommandBufferDescriptor* pDescriptor);
	//
	void (*ASGI_FUNC_SetBindGroup)(ASGI_GPUProgrammablePassEncoder* pEncoder, ASGI_GPUIndex32 index, ASGI_GPUBindGroup* pBindGroup, int numOffset, ASGI_GPUBufferDynamicOffset* dynamicOffsets);
	void (*ASGI_FUNC_SetBindGroupRange)(ASGI_GPUProgrammablePassEncoder* pEncoder, ASGI_GPUIndex32 index, ASGI_GPUBindGroup* pBindGroup, int numoffsetsData, unsigned int* dynamicOffsetsData, ASGI_GPUSize64 dynamicOffsetsDataStart, ASGI_GPUSize32 dynamicOffsetsDataLength);
	void (*ASGI_FUNC_PushDebugGroupPPE)(ASGI_GPUProgrammablePassEncoder* pEncoder, const char* groupLabel);
	void (*ASGI_FUNC_PopDebugGroupPPE)(ASGI_GPUProgrammablePassEncoder* pEncoder);
	void (*ASGI_FUNC_InsertDebugMarkerPPE)(ASGI_GPUProgrammablePassEncoder* pEncoder, const char* markerLabel);
	//
	void (*ASGI_FUNC_SetRenderPipeline)(ASGI_GPURenderEncoderBase* pEncoder, ASGI_GPURenderPipeline* pPipeline);
	void (*ASGI_FUNC_SetIndexBuffer)(ASGI_GPURenderEncoderBase* pEncoder, ASGI_GPUBuffer* pBuffer, ASGI_GPUIndexFormat indexFormat, ASGI_GPUSize64 offset, ASGI_GPUSize64 size);
	void (*ASGI_FUNC_SetVertexBuffer)(ASGI_GPURenderEncoderBase* pEncoder, ASGI_GPUIndex32 slot, ASGI_GPUBuffer* pBuffer, ASGI_GPUSize64 offset, ASGI_GPUSize64 size);
	void (*ASGI_FUNC_Draw)(ASGI_GPURenderEncoderBase* pEncoder, ASGI_GPUSize32 vertexCount, ASGI_GPUSize32 instanceCount, ASGI_GPUSize32 firstVertex, ASGI_GPUSize32 firstInstance);
	void (*ASGI_FUNC_DrawIndexed)(ASGI_GPURenderEncoderBase* pEncoder, ASGI_GPUSize32 indexCount, ASGI_GPUSize32 instanceCount, ASGI_GPUSize32 firstIndex, ASGI_GPUSignedOffset32 baseVertex, ASGI_GPUSize32 firstInstance);
	void (*ASGI_FUNC_DrawIndirect)(ASGI_GPURenderEncoderBase* pEncoder, ASGI_GPUBuffer* pIndirectBuffer, ASGI_GPUSize64 indirectOffset);
	void (*ASGI_FUNC_DrawIndexedIndirect)(ASGI_GPURenderEncoderBase* pEncoder, ASGI_GPUBuffer* pIndirectBuffer, ASGI_GPUSize64 indirectOffset);
	//
	void (*ASGI_FUNC_SetScissorRect)(ASGI_GPURenderPassEncoder* pEncoder, ASGI_GPUIntegerCoordinate x, ASGI_GPUIntegerCoordinate y, ASGI_GPUIntegerCoordinate width, ASGI_GPUIntegerCoordinate height);
	void (*ASGI_FUNC_SetViewport)(ASGI_GPURenderPassEncoder* pEncoder, float x, float y, float width, float height, float minDepth, float maxDepth);
	void (*ASGI_FUNC_SetBlendConstant)(ASGI_GPURenderPassEncoder* pEncoder, ASGI_GPUColor* pColor);
	void (*ASGI_FUNC_SetStencilReference)(ASGI_GPURenderPassEncoder* pEncoder, ASGI_GPUStencilValue reference);
	void (*ASGI_FUNC_BeginOcclusionQuery)(ASGI_GPURenderPassEncoder* pEncoder, ASGI_GPUSize32 queryIndex);
	void (*ASGI_FUNC_EndOcclusionQuery)(ASGI_GPURenderPassEncoder* pEncoder);
	void (*ASGI_FUNC_BeginRenderPipelineStatisticsQuery)(ASGI_GPURenderPassEncoder* pEncoder, ASGI_GPUQuerySet* pQuerySet, ASGI_GPUSize32 queryIndex);
	void (*ASGI_FUNC_EndRenderPipelineStatisticsQuery)(ASGI_GPURenderPassEncoder* pEncoder);
	void (*ASGI_FUNC_WriteTimestampRPE)(ASGI_GPURenderPassEncoder* pEncoder, ASGI_GPUQuerySet* pQuerySet, ASGI_GPUSize32 queryIndex);
	void (*ASGI_FUNC_ExecuteBundles)(ASGI_GPURenderPassEncoder* pEncoder, int numBundle, ASGI_GPURenderBundle* bundles);
	void (*ASGI_FUNC_EndRenderPass)(ASGI_GPURenderPassEncoder* pEncoder);
	//
	ASGI_GPURenderBundle* (*ASGI_FUNC_FinishRenderBundleEncoder)(ASGI_GPURenderBundleEncoder* pEncoder, ASGI_GPURenderBundleDescriptor* pDescriptor);
	//
	void (*ASGI_FUNC_SetComputePipeline)(ASGI_GPUComputePassEncoder* pEncoder, ASGI_GPUComputePipeline* pPipeline);
	void (*ASGI_FUNC_Dispatch)(ASGI_GPUComputePassEncoder* pEncoder, ASGI_GPUSize32 x, ASGI_GPUSize32 y, ASGI_GPUSize32 z);
	void (*ASGI_FUNC_DispatchIndirect)(ASGI_GPUComputePassEncoder* pEncoder, ASGI_GPUBuffer* pIndirectBuffer, ASGI_GPUSize64 indirectOffset);
	void (*ASGI_FUNC_BeginComputePipelineStatisticsQuery)(ASGI_GPUComputePassEncoder* pEncoder, ASGI_GPUQuerySet* pQuerySet, ASGI_GPUSize32 queryIndex);
	void (*ASGI_FUNC_EndComputePipelineStatisticsQuery)(ASGI_GPUComputePassEncoder* pEncoder);
	void (*ASGI_FUNC_WriteTimestampCPE)(ASGI_GPUComputePassEncoder* pEncoder, ASGI_GPUQuerySet* pQuerySet, ASGI_GPUSize32 queryIndex);
	void (*ASGI_FUNC_EndComputePass)(ASGI_GPUComputePassEncoder* pEncoder);
	//
	ASGI_GPUBindGroupLayout* (*ASGI_FUNC_GetBindGroupLayout)(ASGI_GPUPipelineBase* pPipline, unsigned long index);
	//
	void (*ASGI_FUNC_DestoryGPUQuerySet)(ASGI_GPUQuerySet* pQuerySet);
};
static GPUInterface sGPU;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
ASGI_GPUAdapter* asgiRequestAdapter(
	ASGI_GPU* pGpu,
	ASGI_GPURequestAdapterOptions* pOptions) 
{
	return  sGPU.ASGI_FUNC_RequestAdapter(pGpu, pOptions);
}
//
ASGI_GPUDevice* asgiRequestDevice(
	ASGI_GPUAdapter* pAdapter,
	ASGI_GPUDeviceDescriptor* pDescriptor)
{
	return sGPU.ASGI_FUNC_RequestDevice(pAdapter, pDescriptor);
}
//
ASGI_GPUBuffer* asgiCreateBuffer(
	ASGI_GPUDevice* pDevice,
	ASGI_GPUBufferDescriptor* pDescriptor)
{
	return sGPU.ASGI_FUNC_CreateBuffer(pDevice, pDescriptor);
}

ASGI_GPUTexture* asgiCreateTexture(
	ASGI_GPUDevice* pDevice,
	ASGI_GPUTextureDescriptor* pDescriptor)
{
	return sGPU.ASGI_FUNC_CreateTexture(pDevice, pDescriptor);
}

ASGI_GPUSampler* asgiCreateSampler(
	ASGI_GPUDevice* pDevice,
	ASGI_GPUSamplerDescriptor* pDescriptor)
{
	return sGPU.ASGI_FUNC_CreateSampler(pDevice, pDescriptor);
}

ASGI_GPUExternalTexture* asgiImportExternalTexture (
	ASGI_GPUDevice* pDevice,
	ASGI_GPUExternalTextureDescriptor* pDescriptor)
{
	return sGPU.ASGI_FUNC_ImportExternalTexture(pDevice, pDescriptor);
}

ASGI_GPUBindGroupLayout* asgiCreateBindGroupLayout(
	ASGI_GPUDevice* pDevice,
	ASGI_GPUBindGroupLayoutDescriptor* pDescriptor)
{
	return sGPU.ASGI_FUNC_CreateBindGroupLayout(pDevice, pDescriptor);
}

ASGI_GPUPipelineLayout* asgiCreatePipelineLayout(
	ASGI_GPUDevice* pDevice,
	ASGI_GPUPipelineLayoutDescriptor* pDescriptor)
{
	return sGPU.ASGI_FUNC_CreatePipelineLayout(pDevice, pDescriptor);
}

ASGI_GPUBindGroup* asgiCreateBindGroup(
	ASGI_GPUDevice* pDevice,
	ASGI_GPUBindGroupDescriptor* pDescriptor)
{
	return sGPU.ASGI_FUNC_CreateBindGroup(pDevice, pDescriptor);
}

ASGI_GPUShaderModule* asgiCreateShaderModule(
	ASGI_GPUDevice* pDevice,
	ASGI_GPUShaderModuleDescriptor* pDescriptor)
{
	return sGPU.ASGI_FUNC_CreateShaderModule(pDevice, pDescriptor);
}

ASGI_GPUComputePipeline* asgiCreateComputePipeline(
	ASGI_GPUDevice* pDevice,
	ASGI_GPUComputePipelineDescriptor* pDescriptor)
{
	return sGPU.ASGI_FUNC_CreateComputePipeline(pDevice, pDescriptor);
}

ASGI_GPURenderPipeline* asgiCreateRenderPipeline(
	ASGI_GPUDevice* pDevice,
	ASGI_GPURenderPipelineDescriptor* pDescriptor)
{
	return sGPU.ASGI_FUNC_CreateRenderPipeline(pDevice, pDescriptor);
}

void asgiCreateComputePipelineAsync(
	ASGI_GPUDevice* pDevice,
	ASGI_GPUComputePipelineDescriptor* pDescriptor,
	void (*callBack)(ASGI_GPUComputePipeline*))
{
	return sGPU.ASGI_FUNC_CreateComputePipelineAsync(pDevice, pDescriptor, callBack);
}

void asgiCreateRenderPipelineAsync(
	ASGI_GPUDevice* pDevice,
	ASGI_GPURenderPipelineDescriptor* pDescriptor,
	void (*callBack)(ASGI_GPURenderPipeline*))
{
	return sGPU.ASGI_FUNC_CreateRenderPipelineAsync(pDevice, pDescriptor, callBack);
}

ASGI_GPUCommandEncoder* asgiCreateCommandEncoder(
	ASGI_GPUDevice* pDevice,
	ASGI_GPUCommandEncoderDescriptor* pDescriptor)
{
	return sGPU.ASGI_FUNC_CreateCommandEncoder(pDevice, pDescriptor);
}

ASGI_GPURenderBundleEncoder* asgiCreateRenderBundleEncoder(
	ASGI_GPUDevice* pDevice,
	ASGI_GPURenderBundleEncoderDescriptor* pDescriptor)
{
	return sGPU.ASGI_FUNC_CreateRenderBundleEncoder(pDevice, pDescriptor);
}

ASGI_GPUQuerySet* asgiCreateQuerySet(
	ASGI_GPUDevice* pDevice,
	ASGI_GPUQuerySetDescriptor* pDescriptor)
{
	return sGPU.ASGI_FUNC_CreateQuerySet(pDevice, pDescriptor);
}
//
void asgiSubmit(
	ASGI_GPUQueue* pQueue,
	int numCommandBuffer,
	ASGI_GPUCommandBuffer* pCommandBuffers)
{
	return sGPU.ASGI_FUNC_Submit(pQueue, numCommandBuffer, pCommandBuffers);
}

void asgiSubmitAsync(
	ASGI_GPUQueue* pQueue,
	int numCommandBuffer,
	ASGI_GPUCommandBuffer* pCommandBuffers,
	void (*onSubmittedWorkDone)())
{
	return sGPU.ASGI_FUNC_SubmitAsync(pQueue, numCommandBuffer, pCommandBuffers, onSubmittedWorkDone);
}

void asgiWriteBuffer(
	ASGI_GPUQueue* pQueue,
	ASGI_GPUBuffer* pBuffer,
	ASGI_GPUSize64 bufferOffset,
	const char* pData,
	ASGI_GPUSize64 dataOffset,
	ASGI_GPUSize64 size)
{
	return sGPU.ASGI_FUNC_WriteBuffer(pQueue, pBuffer, bufferOffset, pData, dataOffset, size);
}

void asgiWriteTexture(
	ASGI_GPUQueue* pQueue,
	ASGI_GPUImageCopyTexture* pDestination,
	const char* pData,
	ASGI_GPUImageDataLayout* pDataLayout,
	ASGI_GPUExtent3D size)
{
	return sGPU.ASGI_FUNC_WriteTexture(pQueue, pDestination, pData, pDataLayout, size);
}

void asgiCopyExternalImageToTexture(
	ASGI_GPUQueue* pQueue,
	ASGI_GPUImageCopyExternalImage* pSource,
	ASGI_GPUImageCopyTextureTagged* pDestination,
	ASGI_GPUExtent3D copySize)
{
	return sGPU.ASGI_FUNC_CopyExternalImageToTexture(pQueue, pSource, pDestination, copySize);
}
//
void asgiMap(
	ASGI_GPUBuffer* pBuffer,
	ASGI_GPUMapModeFlags mode,
	ASGI_GPUSize64 offset,
	ASGI_GPUSize64 size)
{
	return sGPU.ASGI_FUNC_Map(pBuffer, mode, offset, size);
}

void asgiMapAsync(
	ASGI_GPUBuffer* pBuffer,
	ASGI_GPUMapModeFlags mode,
	ASGI_GPUSize64 offset,
	ASGI_GPUSize64 size,
	void (*callBack)())
{
	return sGPU.ASGI_FUNC_MapAsync(pBuffer, mode, offset, size, callBack);
}

unsigned char* asgiGetMappedRange(
	ASGI_GPUBuffer* pBuffer,
	ASGI_GPUSize64 offset,
	ASGI_GPUSize64 size)
{
	return sGPU.ASGI_FUNC_GetMappedRange(pBuffer, offset, size);
}

void asgiUnmap(ASGI_GPUBuffer* pBuffer)
{
	return sGPU.ASGI_FUNC_Unmap(pBuffer);
}

void asgiDestroyGPUBuffer(ASGI_GPUBuffer* pBuffer)
{
	return sGPU.ASGI_FUNC_DestroyGPUBuffer(pBuffer);
}
//
ASGI_GPUTextureView* asgiCreateView(
	ASGI_GPUTexture* pTexture,
	ASGI_GPUTextureViewDescriptor* pDescriptor)
{
	return sGPU.ASGI_FUNC_CreateView(pTexture, pDescriptor);
}

void asgiDestoryGPUTexture(ASGI_GPUTexture* pTexture)
{
	return sGPU.ASGI_FUNC_DestoryGPUTexture(pTexture);
}
//
ASGI_GPUCompilationInfo* asgiCompilationInfo(ASGI_GPUShaderModule* pShaderModule)
{
	return sGPU.ASGI_FUNC_CompilationInfo(pShaderModule);
}
//
ASGI_GPURenderPassEncoder* asgiBeginRenderPass(
	ASGI_GPUCommandEncoder* pEncoder,
	ASGI_GPURenderPassDescriptor* pDescriptor)
{
	return sGPU.ASGI_FUNC_BeginRenderPass(pEncoder, pDescriptor);
}

ASGI_GPUComputePassEncoder* asgiBeginComputePass(
	ASGI_GPUCommandEncoder* pEncoder,
	ASGI_GPUComputePassDescriptor* pDescriptor)
{
	return sGPU.ASGI_FUNC_BeginComputePass(pEncoder, pDescriptor);
}

void asgiCopyBufferToBuffer(
	ASGI_GPUCommandEncoder* pEncoder,
	ASGI_GPUBuffer* pSource,
	ASGI_GPUSize64 sourceOffset,
	ASGI_GPUBuffer* pDestination,
	ASGI_GPUSize64 destinationOffset,
	ASGI_GPUSize64 size)
{
	return sGPU.ASGI_FUNC_CopyBufferToBuffer(pEncoder, pSource, sourceOffset, pDestination, destinationOffset, size);
}

void asgiCopyBufferToTexture(
	ASGI_GPUCommandEncoder* pEncoder,
	ASGI_GPUImageCopyBuffer* pSource,
	ASGI_GPUImageCopyTexture* pDestination,
	ASGI_GPUExtent3D copySize)
{
	return sGPU.ASGI_FUNC_CopyBufferToTexture(pEncoder, pSource, pDestination, copySize);
}

void asgiCopyTextureToBuffer(
	ASGI_GPUCommandEncoder* pEncoder,
	ASGI_GPUImageCopyTexture* pSource,
	ASGI_GPUImageCopyBuffer* pDestination,
	ASGI_GPUExtent3D copySize)
{
	return sGPU.ASGI_FUNC_CopyTextureToBuffer(pEncoder, pSource, pDestination, copySize);
}

void asgiCopyTextureToTexture(
	ASGI_GPUCommandEncoder* pEncoder,
	ASGI_GPUImageCopyTexture* pSource,
	ASGI_GPUImageCopyTexture* pDestination,
	ASGI_GPUExtent3D copySize)
{
	return sGPU.ASGI_FUNC_CopyTextureToTexture(pEncoder, pSource, pDestination, copySize);
}

void asgiPushDebugGroupCE(
	ASGI_GPUCommandEncoder* pEncoder,
	const char* groupLabel)
{
	return sGPU.ASGI_FUNC_PushDebugGroupCE(pEncoder, groupLabel);
}

void asgiPopDebugGroupCE(ASGI_GPUCommandEncoder* pEncoder)
{
	return sGPU.ASGI_FUNC_PopDebugGroupCE(pEncoder);
}

void asgiInsertDebugMarkerCE(
	ASGI_GPUCommandEncoder* pEncoder,
	const char* markerLabel)
{
	return sGPU.ASGI_FUNC_InsertDebugMarkerCE(pEncoder, markerLabel);
}

void asgiWriteTimestampCE(
	ASGI_GPUCommandEncoder* pEncoder,
	ASGI_GPUQuerySet* pQuerySet,
	ASGI_GPUSize32 queryIndex)
{
	return sGPU.ASGI_FUNC_WriteTimestampCE(pEncoder, pQuerySet, queryIndex);
}

void asgiResolveQuerySet(
	ASGI_GPUCommandEncoder* pEncoder,
	ASGI_GPUQuerySet* pQuerySet,
	ASGI_GPUSize32 firstQuery,
	ASGI_GPUSize32 queryCount,
	ASGI_GPUBuffer* pDestination,
	ASGI_GPUSize64 destinationOffset)
{
	return sGPU.ASGI_FUNC_ResolveQuerySet(pEncoder, pQuerySet, firstQuery, queryCount, pDestination, destinationOffset);
}

ASGI_GPUCommandBuffer* asgiFinishCommandEncoder(
	ASGI_GPUCommandEncoder* pEncoder,
	ASGI_GPUCommandBufferDescriptor* pDescriptor)
{
	return sGPU.ASGI_FUNC_FinishCommandEncoder(pEncoder, pDescriptor);
}
//
void asgiSetBindGroup(
	ASGI_GPUProgrammablePassEncoder* pEncoder,
	ASGI_GPUIndex32 index,
	ASGI_GPUBindGroup* pBindGroup,
	int numOffset,
	ASGI_GPUBufferDynamicOffset* dynamicOffsets)
{
	return sGPU.ASGI_FUNC_SetBindGroup(pEncoder, index, pBindGroup, numOffset, dynamicOffsets);
}

void asgiSetBindGroupRange(
	ASGI_GPUProgrammablePassEncoder* pEncoder,
	ASGI_GPUIndex32 index,
	ASGI_GPUBindGroup* pBindGroup,
	int numoffsetsData,
	unsigned int* dynamicOffsetsData,
	ASGI_GPUSize64 dynamicOffsetsDataStart,
	ASGI_GPUSize32 dynamicOffsetsDataLength)
{
	return sGPU.ASGI_FUNC_SetBindGroupRange(pEncoder, index, pBindGroup, numoffsetsData, dynamicOffsetsData, dynamicOffsetsDataStart, dynamicOffsetsDataLength);
}

void asgiPushDebugGroupPPE(
	ASGI_GPUProgrammablePassEncoder* pEncoder,
	const char* groupLabel)
{
	return sGPU.ASGI_FUNC_PushDebugGroupPPE(pEncoder, groupLabel);
}

void asgiPopDebugGroupPPE(ASGI_GPUProgrammablePassEncoder* pEncoder)
{
	return sGPU.ASGI_FUNC_PopDebugGroupPPE(pEncoder);
}

void asgiInsertDebugMarkerPPE(
	ASGI_GPUProgrammablePassEncoder* pEncoder,
	const char* markerLabel)
{
	return sGPU.ASGI_FUNC_InsertDebugMarkerPPE(pEncoder, markerLabel);
}
//
void asgiSetRenderPipeline(
	ASGI_GPURenderEncoderBase* pEncoder,
	ASGI_GPURenderPipeline* pPipeline)
{
	return sGPU.ASGI_FUNC_SetRenderPipeline(pEncoder, pPipeline);
}
void asgiSetIndexBuffer(
	ASGI_GPURenderEncoderBase* pEncoder,
	ASGI_GPUBuffer* pBuffer,
	ASGI_GPUIndexFormat indexFormat,
	ASGI_GPUSize64 offset,
	ASGI_GPUSize64 size)
{
	return sGPU.ASGI_FUNC_SetIndexBuffer(pEncoder, pBuffer, indexFormat, offset, size);
}

void asgiSetVertexBuffer(
	ASGI_GPURenderEncoderBase* pEncoder,
	ASGI_GPUIndex32 slot,
	ASGI_GPUBuffer* pBuffer,
	ASGI_GPUSize64 offset,
	ASGI_GPUSize64 size)
{
	return sGPU.ASGI_FUNC_SetVertexBuffer(pEncoder, slot, pBuffer, offset, size);
}

void asgiDraw(
	ASGI_GPURenderEncoderBase* pEncoder,
	ASGI_GPUSize32 vertexCount,
	ASGI_GPUSize32 instanceCount,
	ASGI_GPUSize32 firstVertex,
	ASGI_GPUSize32 firstInstance)
{
	return sGPU.ASGI_FUNC_Draw(pEncoder, vertexCount, instanceCount, firstVertex, firstInstance);
}

void asgiDrawIndexed(
	ASGI_GPURenderEncoderBase* pEncoder,
	ASGI_GPUSize32 indexCount,
	ASGI_GPUSize32 instanceCount,
	ASGI_GPUSize32 firstIndex,
	ASGI_GPUSignedOffset32 baseVertex,
	ASGI_GPUSize32 firstInstance)
{
	return sGPU.ASGI_FUNC_DrawIndexed(pEncoder, indexCount, instanceCount, firstIndex, baseVertex, firstInstance);
}

void asgiDrawIndirect(
	ASGI_GPURenderEncoderBase* pEncoder,
	ASGI_GPUBuffer* pIndirectBuffer,
	ASGI_GPUSize64 indirectOffset)
{
	return sGPU.ASGI_FUNC_DrawIndirect(pEncoder, pIndirectBuffer, indirectOffset);
}

void asgiDrawIndexedIndirect(
	ASGI_GPURenderEncoderBase* pEncoder,
	ASGI_GPUBuffer* pIndirectBuffer,
	ASGI_GPUSize64 indirectOffset)
{
	return sGPU.ASGI_FUNC_DrawIndexedIndirect(pEncoder, pIndirectBuffer, indirectOffset);
}
//
void asgiSetScissorRect(
	ASGI_GPURenderPassEncoder* pEncoder,
	ASGI_GPUIntegerCoordinate x,
	ASGI_GPUIntegerCoordinate y,
	ASGI_GPUIntegerCoordinate width,
	ASGI_GPUIntegerCoordinate height)
{
	return sGPU.ASGI_FUNC_SetScissorRect(pEncoder, x, y, width, height);
}

void asgiSetViewport(
	ASGI_GPURenderPassEncoder* pEncoder,
	float x, float y, float width, float height,
	float minDepth, float maxDepth)
{
	return sGPU.ASGI_FUNC_SetViewport(pEncoder, x, y, width, height, minDepth, maxDepth);
}

void asgiSetBlendConstant(
	ASGI_GPURenderPassEncoder* pEncoder,
	ASGI_GPUColor* pColor)
{
	return sGPU.ASGI_FUNC_SetBlendConstant(pEncoder, pColor);
}

void asgiSetStencilReference(
	ASGI_GPURenderPassEncoder* pEncoder,
	ASGI_GPUStencilValue reference)
{
	return sGPU.ASGI_FUNC_SetStencilReference(pEncoder, reference);
}

void asgiBeginOcclusionQuery(
	ASGI_GPURenderPassEncoder* pEncoder,
	ASGI_GPUSize32 queryIndex)
{
	return sGPU.ASGI_FUNC_BeginOcclusionQuery(pEncoder, queryIndex);
}

void asgiEndOcclusionQuery(ASGI_GPURenderPassEncoder* pEncoder)
{
	return sGPU.ASGI_FUNC_EndOcclusionQuery(pEncoder);
}

void asgiBeginRenderPipelineStatisticsQuery(
	ASGI_GPURenderPassEncoder* pEncoder,
	ASGI_GPUQuerySet* pQuerySet,
	ASGI_GPUSize32 queryIndex)
{
	return sGPU.ASGI_FUNC_BeginRenderPipelineStatisticsQuery(pEncoder, pQuerySet, queryIndex);
}
void asgiEndRenderPipelineStatisticsQuer(ASGI_GPURenderPassEncoder* pEncoder)
{
	return sGPU.ASGI_FUNC_EndRenderPipelineStatisticsQuery(pEncoder);
}

void asgiWriteTimestampRPE(
	ASGI_GPURenderPassEncoder* pEncoder,
	ASGI_GPUQuerySet* pQuerySet,
	ASGI_GPUSize32 queryIndex)
{
	return sGPU.ASGI_FUNC_WriteTimestampRPE(pEncoder, pQuerySet, queryIndex);
}

void asgiExecuteBundles(
	ASGI_GPURenderPassEncoder* pEncoder,
	int numBundle,
	ASGI_GPURenderBundle* bundles)
{
	return sGPU.ASGI_FUNC_ExecuteBundles(pEncoder, numBundle, bundles);
}

void asgiEndRenderPass(ASGI_GPURenderPassEncoder* pEncoder)
{
	return sGPU.ASGI_FUNC_EndRenderPass(pEncoder);
}
//
ASGI_GPURenderBundle* asgiFinishRenderBundleEncoder(
	ASGI_GPURenderBundleEncoder* pEncoder,
	ASGI_GPURenderBundleDescriptor* pDescriptor)
{
	return sGPU.ASGI_FUNC_FinishRenderBundleEncoder(pEncoder, pDescriptor);
}
//
void asgiSetComputePipeline(
	ASGI_GPUComputePassEncoder* pEncoder,
	ASGI_GPUComputePipeline* pPipeline)
{
	return sGPU.ASGI_FUNC_SetComputePipeline(pEncoder, pPipeline);
}

void asgiDispatch(
	ASGI_GPUComputePassEncoder* pEncoder,
	ASGI_GPUSize32 x, ASGI_GPUSize32 y, ASGI_GPUSize32 z)
{
	return sGPU.ASGI_FUNC_Dispatch(pEncoder, x, y, z);
}

void asgiDispatchIndirect(
	ASGI_GPUComputePassEncoder* pEncoder,
	ASGI_GPUBuffer* pIndirectBuffer,
	ASGI_GPUSize64 indirectOffset)
{
	return sGPU.ASGI_FUNC_DispatchIndirect(pEncoder, pIndirectBuffer, indirectOffset);
}

void asgiBeginComputePipelineStatisticsQuery(
	ASGI_GPUComputePassEncoder* pEncoder,
	ASGI_GPUQuerySet* pQuerySet,
	ASGI_GPUSize32 queryIndex)
{
	return sGPU.ASGI_FUNC_BeginComputePipelineStatisticsQuery(pEncoder, pQuerySet, queryIndex);
}

void asgiEndComputePipelineStatisticsQuery(ASGI_GPUComputePassEncoder* pEncoder)
{
	return sGPU.ASGI_FUNC_EndComputePipelineStatisticsQuery(pEncoder);
}

void asgiWriteTimestampCPE(
	ASGI_GPUComputePassEncoder* pEncoder,
	ASGI_GPUQuerySet* pQuerySet,
	ASGI_GPUSize32 queryIndex)
{
	return sGPU.ASGI_FUNC_WriteTimestampCPE(pEncoder, pQuerySet, queryIndex);
}

void asgiEndComputePass(ASGI_GPUComputePassEncoder* pEncoder)
{
	return sGPU.ASGI_FUNC_EndComputePass(pEncoder);
}
//
ASGI_GPUBindGroupLayout* asgiGetBindGroupLayout(
	ASGI_GPUPipelineBase* pPipline,
	unsigned long index)
{
	return sGPU.ASGI_FUNC_GetBindGroupLayout(pPipline, index);
}
//
void asgiDestoryGPUQuerySet(ASGI_GPUQuerySet* pQuerySet)
{
	return sGPU.ASGI_FUNC_DestoryGPUQuerySet(pQuerySet);
}

//////////////
//////////////////////////////////////////////////////////////////////////////////////////////////
#include <malloc.h>
#include "DirectX12\DirectX12_GPU.h"

void initDx12GPU() {
	sGPU.ASGI_FUNC_RequestAdapter = dx12RequestAdapter;
	sGPU.ASGI_FUNC_RequestDevice = dx12RequestDevice;
}

ASGI_GPU* asgiCreateGPUInstance(ASGI_GPU_INTERFACE_TYPE interfaceType)
{
	switch (interfaceType)
	{
	case ASGI_GPU_INTERFACE_TYPE_VULKAN:
		break;
	case ASGI_GPU_INTERFACE_TYPE_DIRECTX12:
		initDx12GPU();
		return (ASGI_GPU*)malloc(sizeof(DX12_GPU));
		break;
	default:
		break;
	}
	return nullptr;
}