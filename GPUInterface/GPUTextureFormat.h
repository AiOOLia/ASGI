#pragma once

enum ASGI_GPUTextureFormat {
	// 8-bit formats
	ASGI_TEX_FORMAT_R8Unorm,
	ASGI_TEX_FORMAT_R8Snorm,
	ASGI_TEX_FORMAT_R8Uint,
	ASGI_TEX_FORMAT_R8Sint,

	// 16-bit formats
	ASGI_TEX_FORMAT_R16Uint,
	ASGI_TEX_FORMAT_R16Sint,
	ASGI_TEX_FORMAT_R16Float,
	ASGI_TEX_FORMAT_Rg8Unorm,
	ASGI_TEX_FORMAT_Rg8Snorm,
	ASGI_TEX_FORMAT_Rg8Uint,
	ASGI_TEX_FORMAT_Rg8Sint,

	// 32-bit formats
	ASGI_TEX_FORMAT_R32Uint,
	ASGI_TEX_FORMAT_R32Sint,
	ASGI_TEX_FORMAT_R32Float,
	ASGI_TEX_FORMAT_Rg16Uint,
	ASGI_TEX_FORMAT_Rg16Sint,
	ASGI_TEX_FORMAT_Rg16Float,
	ASGI_TEX_FORMAT_Rgba8Unorm,
	ASGI_TEX_FORMAT_Rgba8UnormSrgb,
	ASGI_TEX_FORMAT_Rgba8Snorm,
	ASGI_TEX_FORMAT_Rgba8Uint,
	ASGI_TEX_FORMAT_Rgba8Sint,
	ASGI_TEX_FORMAT_Bgra8Unorm,
	ASGI_TEX_FORMAT_Bgra8UnormSrgb,
	// Packed 32-bit formats
	ASGI_TEX_FORMAT_Rgb9E5Ufloat,
	ASGI_TEX_FORMAT_Rgb10A2Unorm,
	ASGI_TEX_FORMAT_Rg11B10Ufloat,

	// 64-bit formats
	ASGI_TEX_FORMAT_Rg32Uint,
	ASGI_TEX_FORMAT_Rg32Sint,
	ASGI_TEX_FORMAT_Rg32Float,
	ASGI_TEX_FORMAT_Rgba16Uint,
	ASGI_TEX_FORMAT_Rgba16Sint,
	ASGI_TEX_FORMAT_Rgba16Float,

	// 128-bit formats
	ASGI_TEX_FORMAT_Rgba32Uint,
	ASGI_TEX_FORMAT_Rgba32Sint,
	ASGI_TEX_FORMAT_Rgba32Float,

	// Depth and stencil formats
	ASGI_TEX_FORMAT_Stencil8,
	ASGI_TEX_FORMAT_Depth16Unorm,
	ASGI_TEX_FORMAT_Depth24Plus,
	ASGI_TEX_FORMAT_Depth24PlusStencil8,
	ASGI_TEX_FORMAT_Depth32Float,

	// BC compressed formats usable if "texture-compression-bc" is both
	// supported by the device/user agent and enabled in requestDevice.
	ASGI_TEX_FORMAT_Bc1RgbaUnorm,
	ASGI_TEX_FORMAT_Bc1RgbaUnormSrgb,
	ASGI_TEX_FORMAT_Bc2RgbaUnorm,
	ASGI_TEX_FORMAT_Bc2RgbaUnormSrgb,
	ASGI_TEX_FORMAT_Bc3RgbaUnorm,
	ASGI_TEX_FORMAT_Bc3RgbaUnormSrgb,
	ASGI_TEX_FORMAT_Bc4RUnorm,
	ASGI_TEX_FORMAT_Bc4RSnorm,
	ASGI_TEX_FORMAT_Bc5RgUnorm,
	ASGI_TEX_FORMAT_Bc5RgSnorm,
	ASGI_TEX_FORMAT_Bc6hRgbUfloat,
	ASGI_TEX_FORMAT_Bc6hRgbFloat,
	ASGI_TEX_FORMAT_Bc7RgbaUnorm,
	ASGI_TEX_FORMAT_Bc7RgbaUnormSrgb,

	// "depth24unorm-stencil8" feature
	ASGI_TEX_FORMAT_Depth24UnormStencil8,

	// "depth32float-stencil8" feature
	ASGI_TEX_FORMAT_Depth32FloatStencil8
};