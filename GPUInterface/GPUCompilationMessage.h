#pragma once

#include "GPUCompilationMessageType.h"

struct ASGI_GPUCompilationMessage {
	const char* message;
	const ASGI_GPUCompilationMessageType type;
	const unsigned long long lineNum;
	const unsigned long long linePos;
	const unsigned long long offset;
	const unsigned long long length;
};