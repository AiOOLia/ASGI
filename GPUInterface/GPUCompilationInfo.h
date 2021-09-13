#pragma once

#include "GPUCompilationMessage.h"

struct ASGI_GPUCompilationInfo {
	const int numMessage;
	const ASGI_GPUCompilationMessage* messages;
};