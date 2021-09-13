#pragma once

enum GPUTextureFormat {
	// 8-bit formats
	R8Unorm,
	R8Snorm,
	R8Uint,
	R8Sint,

	// 16-bit formats
	R16Uint,
	R16Sint,
	R16Float,
	Rg8Unorm,
	Rg8Snorm,
	Rg8Uint,
	Rg8Sint,

	// 32-bit formats
	R32Uint,
	R32Sint,
	R32Float,
	Rg16Uint,
	Rg16Sint,
	Rg16Float,
	Rgba8Unorm,
	Rgba8UnormSrgb,
	Rgba8Snorm,
	Rgba8Uint,
	Rgba8Sint,
	Bgra8Unorm,
	Bgra8UnormSrgb,
	// Packed 32-bit formats
	Rgb9E5Ufloat,
	Rgb10A2Unorm,
	Rg11B10Ufloat,

	// 64-bit formats
	Rg32Uint,
	Rg32Sint,
	Rg32Float,
	Rgba16Uint,
	Rgba16Sint,
	Rgba16Float,

	// 128-bit formats
	Rgba32Uint,
	Rgba32Sint,
	Rgba32Float,

	// Depth and stencil formats
	Stencil8,
	Depth16Unorm,
	Depth24Plus,
	Depth24PlusStencil8,
	Depth32Float,

	// BC compressed formats usable if "texture-compression-bc" is both
	// supported by the device/user agent and enabled in requestDevice.
	Bc1RgbaUnorm,
	Bc1RgbaUnormSrgb,
	Bc2RgbaUnorm,
	Bc2RgbaUnormSrgb,
	Bc3RgbaUnorm,
	Bc3RgbaUnormSrgb,
	Bc4RUnorm,
	Bc4RSnorm,
	Bc5RgUnorm,
	Bc5RgSnorm,
	Bc6hRgbUfloat,
	Bc6hRgbFloat,
	Bc7RgbaUnorm,
	Bc7RgbaUnormSrgb,

	// "depth24unorm-stencil8" feature
	Depth24UnormStencil8,

	// "depth32float-stencil8" feature
	Depth32FloatStencil8
};