#pragma once

#include "GPUCompilationMessage.h"

typedef struct ASGI_GPUCompilationInfo {
	const int numMessage;
	const ASGI_GPUCompilationMessage* messages;
} ASGI_GPUCompilationInfo;