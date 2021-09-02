#pragma once

typedef unsigned long GPUBufferDynamicOffset;
typedef unsigned long GPUStencilValue;
typedef unsigned long GPUSampleMask;
typedef long GPUDepthBias;

typedef unsigned long long GPUSize64;
typedef unsigned long GPUIntegerCoordinate;
typedef unsigned long GPUIndex32;
typedef unsigned long GPUSize32;
typedef long GPUSignedOffset32;

typedef unsigned long GPUFlagsConstant;


enum GPUPredefinedColorSpace {
	srgb
};

enum GPUPowerPreference {
	low_power = 0,
	high_performance
};

enum GPUBufferUsage {
	MAP_READ = 0x0001,
	MAP_WRITE = 0x0002,
	COPY_SRC = 0x0004,
	COPY_DST = 0x0008,
	INDEX = 0x0010,
	VERTEX = 0x0020,
	UNIFORM = 0x0040,
	STORAGE = 0x0080,
	INDIRECT = 0x0100,
	QUERY_RESOLVE = 0x0200
};
typedef unsigned long GPUBufferUsageFlags;

enum GPUBufferState {
	mapped,
	mapped_at_creation,
	mapping_pending,
	unmapped,
	destroyed
};

enum GPUMapMode {
	READ = 0x0001,
	WRITE = 0x0002
};
typedef  unsigned long GPUMapModeFlags;

enum GPUTextureDimension {
	d1,
	d2,
	d3
};

enum GPUTextureUsage {
	COPY_SRC = 0x01,
	COPY_DST = 0x02,
	TEXTURE_BINDING = 0x04,
	STORAGE_BINDING = 0x08,
	RENDER_ATTACHMENT = 0x10
};
typedef unsigned long GPUTextureUsageFlags;

enum GPUTextureFormat {
	// 8-bit formats
	r8unorm,
	r8snorm,
	r8uint,
	r8sint,

	// 16-bit formats
	r16uint,
	r16sint,
	r16float,
	rg8unorm,
	rg8snorm,
	rg8uint,
	rg8sint,

	// 32-bit formats
	r32uint,
	r32sint,
	r32float,
	rg16uint,
	rg16sint,
	rg16float,
	rgba8unorm,
	rgba8unorm_srgb,
	rgba8snorm,
	rgba8uint,
	rgba8sint,
	bgra8unorm,
	bgra8unorm_srgb,
	// Packed 32-bit formats
	rgb9e5ufloat,
	rgb10a2unorm,
	rg11b10ufloat,

	// 64-bit formats
	rg32uint,
	rg32sint,
	rg32float,
	rgba16uint,
	rgba16sint,
	rgba16float,

	// 128-bit formats
	rgba32uint,
	rgba32sint,
	rgba32float,

	// Depth and stencil formats
	stencil8,
	depth16unorm,
	depth24plus,
	depth24plus_stencil8,
	depth32float,

	// BC compressed formats usable if "texture-compression-bc" is both
	// supported by the device/user agent and enabled in requestDevice.
	bc1_rgba_unorm,
	bc1_rgba_unorm_srgb,
	bc2_rgba_unorm,
	bc2_rgba_unorm_srgb,
	bc3_rgba_unorm,
	bc3_rgba_unorm_srgb,
	bc4_r_unorm,
	bc4_r_snorm,
	bc5_rg_unorm,
	bc5_rg_snorm,
	bc6h_rgb_ufloat,
	bc6h_rgb_float,
	bc7_rgba_unorm,
	bc7_rgba_unorm_srgb,

	// "depth24unorm-stencil8" feature
	depth24unorm_stencil8,

	// "depth32float-stencil8" feature
	depth32float_stencil8
};

enum GPUAddressMode {
	clamp_to_edge,
	repeat,
	mirror_repeat
};

enum GPUFilterMode {
	nearest,
	linear
};

enum GPUCompareFunction {
	never,
	less,
	equal,
	less_equal,
	greater,
	not_equal,
	greater_equal,
	always
};

enum GPUShaderStage {
	VERTEX = 0x1,
	FRAGMENT = 0x2,
	COMPUTE = 0x4
};
typedef unsigned long GPUShaderStageFlags;

enum GPUBufferBindingType {
	uniform,
	storage,
	read_only_storage
};

enum GPUSamplerBindingType {
	filtering,
	non_filtering,
	comparison
};

enum GPUTextureSampleType {
	float32,
	unfilterable_float,
	depth,
	sint,
	uint
};

enum GPUStorageTextureAccess {
	write_only
};

enum GPUTextureViewDimension {
	d1,
	d2,
	d2_array,
	cube,
	cube_array,
	d3
};

enum GPUTextureAspect {
	all,
	stencil_only,
	depth_only
};

enum GPUCompilationMessageType {
	error,
	warning,
	info
};

enum GPUPrimitiveTopology {
	point_list,
	line_list,
	line_strip,
	triangle_list,
	triangle_strip
};

enum GPUIndexFormat {
	uint16,
	uint32
};

enum GPUFrontFace {
	ccw,
	cw
};

enum GPUCullMode {
	none,
	front,
	back
};

enum GPUVertexFormat {
	uint8x2,
	uint8x4,
	sint8x2,
	sint8x4,
	unorm8x2,
	unorm8x4,
	snorm8x2,
	snorm8x4,
	uint16x2,
	uint16x4,
	sint16x2,
	sint16x4,
	unorm16x2,
	unorm16x4,
	snorm16x2,
	snorm16x4,
	float16x2,
	float16x4,
	float32,
	float32x2,
	float32x3,
	float32x4,
	uint32,
	uint32x2,
	uint32x3,
	uint32x4,
	sint32,
	sint32x2,
	sint32x3,
	sint32x4
};

enum GPUVertexStepMode {
	vertex,
	instance
};

enum GPUStencilOperation {
	keep,
	zero,
	replace,
	invert,
	increment_clamp,
	decrement_clamp,
	increment_wrap,
	decrement_wrap
};

enum GPUColorWrite {
	RED = 0x1,
	GREEN = 0x2,
	BLUE = 0x4,
	ALPHA = 0x8,
	ALL = 0xF
};
typedef unsigned long GPUColorWriteFlags;

enum GPUBlendFactor {
	zero,
	one,
	src,
	one_minus_src,
	src_alpha,
	one_minus_src_alpha,
	dst,
	one_minus_dst,
	dst_alpha,
	one_minus_dst_alpha,
	src_alpha_saturated,
	constant,
	one_minus_constant
};

enum GPUBlendOperation {
	add,
	subtract,
	reverse_subtract,
	min,
	max
};

enum GPULoadOp {
	clear,
	load
};

enum GPUStoreOp {
	store,
	discard
};

enum GPUQueryType {
	occlusion,
	pipeline_statistics,
	timestamp
};

enum GPUPipelineStatisticType {
	vertex_shader_invocations,
	clipper_invocations,
	clipper_primitives_out,
	fragment_shader_invocations,
	compute_shader_invocations
};

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

struct GPURequestAdapterOptions {
	GPUPowerPreference powerPreference;
	bool forceFallbackAdapter;
};

struct GPUSupportedFeatures {
	bool depth_clamping;
	bool depth24unorm_stencil8;
	bool depth32float_stencil8;
	bool pipeline_statistics_query;
	bool texture_compression_bc;
	bool timestamp_query;
};

struct GPUAdapter {
	const char* name;
	GPUSupportedFeatures features;
	GPUSupportedLimits limits;
	bool isFallbackAdapter;
};

struct GPUDeviceDescriptor {
	const char* label;
	GPUSupportedFeatures requiredFeatures;
	GPUSupportedLimits requiredLimits;
};

struct GPUQueue {
	const char* label;
};

struct GPUDevice
{
	const char* label;
	GPUAdapter* adapter;
	GPUSupportedFeatures features;
	GPUSupportedLimits limits;
	GPUQueue* queue;
};

struct GPUBufferDescriptor {
	GPUSize64 size;
	GPUBufferUsageFlags usage;
	bool mappedAtCreation;
};

struct GPUBuffer
{
	const char* label;
};

struct GPUExtent3D
{
	GPUIntegerCoordinate width;
	GPUIntegerCoordinate height = 1;
	GPUIntegerCoordinate depthOrArrayLayers = 1;
};

struct GPUTextureDescriptor {
	const char* label;
	GPUExtent3D size;
	GPUIntegerCoordinate mipLevelCount;
	GPUSize32 sampleCount;
	GPUTextureDimension dimension;
	GPUTextureFormat format;
	GPUTextureUsageFlags usage;
};

struct GPUTexture {
	const char* label;
};

struct GPUTextureView {
	const char* label;
};
GPUTextureView createView(GPUTexture* texture, GPUTextureViewDescriptor descriptor );

struct GPUSampler {
	const char* label;
};

struct GPUSamplerDescriptor {
	const char* label;
	GPUAddressMode addressModeU;
	GPUAddressMode addressModeV;
	GPUAddressMode addressModeW;
	GPUFilterMode magFilter;
	GPUFilterMode minFilter;
	GPUFilterMode mipmapFilter;
	float lodMinClamp;
	float lodMaxClamp;
	GPUCompareFunction compare;
	unsigned short maxAnisotropy = 1;
};

struct GPUExternalTexture {
	const char* label;
};

struct GPUExternalTextureDescriptor{
	const char* label;
	void* source;
	GPUPredefinedColorSpace colorSpace;
};

struct GPUBufferBindingLayout{
	GPUBufferBindingType type;
	bool hasDynamicOffset = false;
	GPUSize64 minBindingSize = 0;
};

struct GPUSamplerBindingLayout{
	GPUSamplerBindingType type;
};

struct GPUTextureViewDescriptor {
	GPUTextureFormat format;
	GPUTextureViewDimension dimension;
	GPUTextureAspect aspect ;
	GPUIntegerCoordinate baseMipLevel;
	GPUIntegerCoordinate mipLevelCount;
	GPUIntegerCoordinate baseArrayLayer;
	GPUIntegerCoordinate arrayLayerCount;
};

struct GPUStorageTextureBindingLayout{
	GPUStorageTextureAccess access ;
	GPUTextureFormat format;
	GPUTextureViewDimension viewDimension;
};

struct GPUTextureBindingLayout {
	GPUTextureSampleType sampleType;
	GPUTextureViewDimension viewDimension;
	bool multisampled;
};

struct GPUExternalTextureBindingLayout {
	const char* label;
};

struct GPUBindGroupLayoutEntry{
	GPUIndex32 binding;
	GPUShaderStageFlags visibility;

	GPUBufferBindingLayout buffer;
	GPUSamplerBindingLayout sampler;
	GPUTextureBindingLayout texture;
	GPUStorageTextureBindingLayout storageTexture;
	GPUExternalTextureBindingLayout externalTexture;
};

struct GPUBindGroupLayout {
	const char* label;
};

struct GPUBindGroupLayoutDescriptor {
	int numEntry;
	GPUBindGroupLayoutEntry* entries;
};

struct GPUPipelineLayoutDescriptor {
	int numLayout;
	GPUBindGroupLayout* bindGroupLayouts;
};

struct GPUPipelineLayout {
	const char* label;
};

struct GPUBufferBinding {
	GPUBuffer buffer;
	GPUSize64 offset;
	GPUSize64 size;
};

struct GPUBindGroupEntry {
	 GPUIndex32 binding;
	 GPUSampler* resource_sampler;
	 GPUTextureView* resource_texture_view;
	 GPUBufferBinding* resource_buffer_binding;
	 GPUExternalTexture* resource_external_texture;
};

struct GPUBindGroupDescriptor{
	GPUBindGroupLayout layout;
	int numEntry;
	GPUBindGroupEntry* entries;
};

struct GPUBindGroup {
	const char* label;
};


struct GPUShaderModuleDescriptor{
	const char* code;
	void* sourceMap;
};

struct GPUShaderModule {
	const char* label;
};

struct GPUCompilationMessage {
	const char* message;
	const GPUCompilationMessageType type;
	const unsigned long long lineNum;
	const unsigned long long linePos;
	const unsigned long long offset;
	const unsigned long long length;
};

struct GPUCompilationInfo {
	const int numMessage;
	const GPUCompilationMessage*  messages;
};

typedef double GPUPipelineConstantValue;
struct GPUProgrammableStage{
	GPUShaderModule* module;
	const char* entryPoint;
	int numConstant;
	const char* const* names;
	GPUPipelineConstantValue* values;
};

struct GPUComputePipelineDescriptor {
	GPUPipelineLayout* layout;
	GPUProgrammableStage* compute;
};

struct GPUComputePipeline {
	const char* label;
};

struct GPUPrimitiveState{
	GPUPrimitiveTopology topology;
	GPUIndexFormat stripIndexFormat;
	GPUFrontFace frontFace;
	GPUCullMode cullMode;

	// Enable depth clamping (requires "depth-clamping" feature)
	bool clampDepth;
};

struct GPUVertexAttribute{
	GPUVertexFormat format;
	GPUSize64 offset;
	GPUIndex32 shaderLocation;
};

struct GPUVertexBufferLayout{
	GPUSize64 arrayStride;
	GPUVertexStepMode stepMode;
	int numAttribute;
	GPUVertexAttribute* attributes;
};

struct GPUVertexState {
	GPUShaderModule* module;
	const char* entryPoint;
	int numConstant;
	const char* const* names;
	GPUPipelineConstantValue* values;
	int numBuffer;
	GPUVertexBufferLayout* buffers;
};

struct GPUStencilFaceState {
	GPUCompareFunction compare;
	GPUStencilOperation failOp;
	GPUStencilOperation depthFailOp;
	GPUStencilOperation passOp;
};

struct GPUDepthStencilState {
	GPUTextureFormat format;

	bool depthWriteEnabled;
	GPUCompareFunction depthCompare;

	GPUStencilFaceState stencilFront;
	GPUStencilFaceState stencilBack;

	GPUStencilValue stencilReadMask;
	GPUStencilValue stencilWriteMask;

	GPUDepthBias depthBias;
	float depthBiasSlopeScale;
	float depthBiasClamp;
};

struct GPUMultisampleState {
	GPUSize32 count;
	GPUSampleMask mask;
	bool alphaToCoverageEnabled;
};

struct GPUBlendComponent {
	GPUBlendOperation operation;
	GPUBlendFactor srcFactor;
	GPUBlendFactor dstFactor;
};

struct GPUBlendState {
	GPUBlendComponent color;
	GPUBlendComponent alpha;
};

struct GPUColorTargetState {
	GPUTextureFormat format;
	GPUBlendState blend;
	GPUColorWriteFlags writeMask;  // GPUColorWrite.ALL
};

struct GPUFragmentState : GPUProgrammableStage {
	GPUShaderModule* module;
	const char* entryPoint;
	int numConstant;
	const char* const* names;
	GPUPipelineConstantValue* values;
	int numTarget;
	GPUColorTargetState* targets;
};

struct GPURenderPipelineDescriptor {
	GPUPipelineLayout* layout;
	GPUVertexState vertex;
	GPUPrimitiveState primitive = {};
	GPUDepthStencilState depthStencil;
	GPUMultisampleState multisample = {};
	GPUFragmentState fragment;
};

struct GPURenderPipeline {
	const char* label;
};



//Promise<GPUComputePipeline> createComputePipelineAsync(GPUComputePipelineDescriptor descriptor);
//Promise<GPURenderPipeline> createRenderPipelineAsync(GPURenderPipelineDescriptor descriptor);

typedef void* GPUProgrammablePassEncoderHandle;
//
struct GPUColor {
	double r;
	double g;
	double b;
	double a;
};

struct GPUOrigin2D {
	GPUIntegerCoordinate x;
	GPUIntegerCoordinate y;
};

struct GPUOrigin3D {
	GPUIntegerCoordinate x;
	GPUIntegerCoordinate y;
	GPUIntegerCoordinate z;
};

struct GPURenderPassEncoder {
	const char* label;
};

struct GPUQuerySet {
	const char* label;
};

struct GPURenderBundle {
	const char* label;
};

struct GPUCommandEncoderDescriptor {
	bool measureExecutionTime;
};

struct GPUCommandEncoder {
	const char* label;
};

struct GPURenderPassColorAttachment{
	GPUTextureView view;
	GPUTextureView resolveTarget;
	GPULoadOp loadOp;
	GPUColor loadValue;
	GPUStoreOp storeOp;
};

struct GPURenderPassDepthStencilAttachment{
	GPUTextureView view;

	GPULoadOp depthLoadOp;
	float depthLoadValue;
	GPUStoreOp depthStoreOp;
	bool depthReadOnly;

	GPULoadOp stencilLoadOp;
	GPUStencilValue stencilLoadValue;
	GPUStoreOp stencilStoreOp;
	bool stencilReadOnly;
};

struct GPURenderPassDescriptor {
	const char* label;
	int numColorAttachments;
	GPURenderPassColorAttachment* colorAttachments;
	GPURenderPassDepthStencilAttachment depthStencilAttachment;
	GPUQuerySet occlusionQuerySet;
};

struct GPUComputePassDescriptor{
	const char* label;
};

struct GPUComputePassEncoder {
	const char* label;
};

struct GPUImageCopyBuffer {
	GPUSize64 offset = 0;
	GPUSize32 bytesPerRow;
	GPUSize32 rowsPerImage;
	GPUBuffer buffer;
};

struct GPUImageCopyTexture{
	GPUTexture* texture;
	GPUIntegerCoordinate mipLevel;
	GPUOrigin3D origin;
	GPUTextureAspect aspect;
};

struct GPUCommandBufferDescriptor {
	const char* label;
};

struct GPUCommandBuffer {
	const char* label;
	const double executionTime;
};

struct GPURenderBundleEncoderDescriptor {
	const char* label;
	int numColorFormat;
	GPUTextureFormat* colorFormats;
	GPUTextureFormat depthStencilFormat;
	GPUSize32 sampleCount;
	bool depthReadOnly;
	bool stencilReadOnly;
};

struct GPURenderBundleEncoder {
	const char* label;
};
//GPURenderBundleEncoder includes GPUProgrammablePassEncoder;
//GPURenderBundleEncoder includes GPURenderEncoderBase;

struct GPURenderBundleDescriptor {
	const char* label;
};

struct GPUQuerySetDescriptor {
	const char* label;
	GPUQueryType type;
	GPUSize32 count;
	int numPipelineStatistic;
	GPUPipelineStatisticType* pipelineStatistics;
};

//
GPUAdapter* requestAdapter(GPURequestAdapterOptions* options);
GPUDevice* requestDevice(GPUAdapter* pAdapter);

GPUBuffer* createBuffer(GPUDevice* device, GPUBufferDescriptor descriptor);
void mapAsync(GPUBuffer* buffer, GPUMapModeFlags mode, GPUSize64 offset, GPUSize64 size);
unsigned char* getMappedRange(GPUBuffer* buffer, GPUSize64 offset, GPUSize64 size);
void unmap(GPUBuffer* buffer);
void destroyGPUBuffer(GPUBuffer* buffer);

GPUTexture* createTexture(GPUDevice* device, GPUTextureDescriptor* descriptor);
void destoryTexture(GPUTexture* texture);

GPUSampler* createSampler(GPUDevice* device, GPUSamplerDescriptor* descriptor);

GPUExternalTexture* importExternalTexture(GPUDevice* device, GPUExternalTextureDescriptor descriptor);

GPUBindGroupLayout* createBindGroupLayout(GPUDevice* device, GPUBindGroupLayoutDescriptor descriptor);

GPUPipelineLayout createPipelineLayout(GPUDevice* device, GPUPipelineLayoutDescriptor* descriptor);

GPUBindGroup createBindGroup(GPUDevice* device, GPUBindGroupDescriptor descriptor);

GPUShaderModule* createShaderModule(GPUDevice* device, GPUShaderModuleDescriptor descriptor);
GPUCompilationInfo* compilationInfo(GPUShaderModule* shader_module);

GPUComputePipeline* createComputePipeline(GPUDevice* device, GPUComputePipelineDescriptor descriptor);
GPUBindGroupLayout getBindGroupLayout(GPUComputePipeline* pipline, unsigned long index);

GPURenderPipeline createRenderPipeline(GPUDevice* device, GPURenderPipelineDescriptor descriptor);
GPUBindGroupLayout getBindGroupLayout(GPURenderPipeline* pipline, unsigned long index);

void setBindGroup(GPUProgrammablePassEncoderHandle encoder,
	GPUIndex32 index, GPUBindGroup bindGroup, int numOffset, GPUBufferDynamicOffset* dynamicOffsets);

void setBindGroup(GPUProgrammablePassEncoderHandle encoder,
	GPUIndex32 index, GPUBindGroup bindGroup,
	int numoffsetsData, unsigned int* dynamicOffsetsData,
	GPUSize64 dynamicOffsetsDataStart,
	GPUSize32 dynamicOffsetsDataLength);

void pushDebugGroup(GPUProgrammablePassEncoderHandle encoder, const char* groupLabel);
void popDebugGroup(GPUProgrammablePassEncoderHandle encoder);
void insertDebugMarker(GPUProgrammablePassEncoderHandle encoder, const char* markerLabel);
//
typedef void* GPURenderEncoderBaseHandle;
void setPipeline(GPURenderEncoderBaseHandle encoder, GPURenderPipeline pipeline);

void setIndexBuffer(GPURenderEncoderBaseHandle encoder,
	GPUBuffer buffer, GPUIndexFormat indexFormat, GPUSize64 offset, GPUSize64 size);
void setVertexBuffer(GPURenderEncoderBaseHandle encoder,
	GPUIndex32 slot, GPUBuffer buffer, GPUSize64 offset, GPUSize64 size);

void draw(GPURenderEncoderBaseHandle encoder,
	GPUSize32 vertexCount, GPUSize32 instanceCount,
	GPUSize32 firstVertex, GPUSize32 firstInstance);
void drawIndexed(GPURenderEncoderBaseHandle encoder,
	GPUSize32 indexCount, GPUSize32 instanceCount,
	GPUSize32 firstIndex,
	GPUSignedOffset32 baseVertex,
	GPUSize32 firstInstance);

void drawIndirect(GPURenderEncoderBaseHandle encoder, GPUBuffer indirectBuffer, GPUSize64 indirectOffset);
void drawIndexedIndirect(GPURenderEncoderBaseHandle encoder, GPUBuffer indirectBuffer, GPUSize64 indirectOffset);

GPUCommandEncoder* createCommandEncoder(GPUDevice* device, GPUCommandEncoderDescriptor* descriptor);
GPURenderPassEncoder* beginRenderPass(GPUCommandEncoder* encoder, GPURenderPassDescriptor* descriptor);
void setViewport(GPURenderPassEncoder* encoder, float x, float y,
	float width, float height,
	float minDepth, float maxDepth);

void setScissorRect(GPURenderPassEncoder* encoder, GPUIntegerCoordinate x, GPUIntegerCoordinate y,
	GPUIntegerCoordinate width, GPUIntegerCoordinate height);

void setBlendConstant(GPURenderPassEncoder* encoder, GPUColor color);
void setStencilReference(GPURenderPassEncoder* encoder, GPUStencilValue reference);

void beginOcclusionQuery(GPURenderPassEncoder* encoder, GPUSize32 queryIndex);
void endOcclusionQuery(GPURenderPassEncoder* encoder);

void beginPipelineStatisticsQuery(GPURenderPassEncoder* encoder, GPUQuerySet querySet, GPUSize32 queryIndex);
void endPipelineStatisticsQuery(GPURenderPassEncoder* encoder);

void writeTimestamp(GPURenderPassEncoder* encoder, GPUQuerySet querySet, GPUSize32 queryIndex);

void executeBundles(GPURenderPassEncoder* encoder, int numBundle, GPURenderBundle* bundles);
void endRenderPass(GPURenderPassEncoder* encoder);

GPUComputePassEncoder* beginComputePass(GPUCommandEncoder* encoder, GPUComputePassDescriptor* descriptor);
void setPipeline(GPUComputePassEncoder* encoder, GPUComputePipeline pipeline);
void dispatch(GPUComputePassEncoder* encoder, GPUSize32 x, GPUSize32 y = 1, GPUSize32 z = 1);
void dispatchIndirect(GPUComputePassEncoder* encoder, GPUBuffer indirectBuffer, GPUSize64 indirectOffset);

void beginPipelineStatisticsQuery(GPUComputePassEncoder* encoder, GPUQuerySet querySet, GPUSize32 queryIndex);
void endPipelineStatisticsQuery(GPUComputePassEncoder* encoder);

void writeTimestamp(GPUComputePassEncoder* encoder, GPUQuerySet querySet, GPUSize32 queryIndex);

void endComputePass(GPUComputePassEncoder* encoder);

void copyBufferToBuffer(GPUCommandEncoder* encoder,
	GPUBuffer source,
	GPUSize64 sourceOffset,
	GPUBuffer destination,
	GPUSize64 destinationOffset,
	GPUSize64 size);

void copyBufferToTexture(GPUCommandEncoder* encoder,
	GPUImageCopyBuffer source,
	GPUImageCopyTexture destination,
	GPUExtent3D copySize);

void copyTextureToBuffer(GPUCommandEncoder* encoder,
	GPUImageCopyTexture source,
	GPUImageCopyBuffer destination,
	GPUExtent3D copySize);

void copyTextureToTexture(GPUCommandEncoder* encoder,
	GPUImageCopyTexture source,
	GPUImageCopyTexture destination,
	GPUExtent3D copySize);

void pushDebugGroup(GPUCommandEncoder* encoder, const char* groupLabel);
void popDebugGroup(GPUCommandEncoder* encoder);
void insertDebugMarker(GPUCommandEncoder* encoder, const char* markerLabel);

void writeTimestamp(GPUCommandEncoder* encoder, GPUQuerySet querySet, GPUSize32 queryIndex);

void resolveQuerySet(GPUCommandEncoder* encoder,
	GPUQuerySet querySet,
	GPUSize32 firstQuery,
	GPUSize32 queryCount,
	GPUBuffer destination,
	GPUSize64 destinationOffset);

GPUCommandBuffer finishCommandEncoder(GPUCommandEncoder* encoder, GPUCommandBufferDescriptor* descriptor);

GPURenderBundleEncoder* createRenderBundleEncoder(GPUDevice* device, GPURenderBundleEncoderDescriptor* descriptor);
GPURenderBundle finishRenderBundleEncoder(GPURenderBundleEncoder* encoder, GPURenderBundleDescriptor* descriptor);

GPUQuerySet* createQuerySet(GPUDevice* device, GPUQuerySetDescriptor* descriptor);
void destoryGPUQuerySet(GPUQuerySet* querySet);
