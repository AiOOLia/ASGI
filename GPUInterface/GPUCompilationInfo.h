#pragma once

#include "GPUCompilationMessage.h"

struct GPUCompilationInfo {
	const int numMessage;
	const GPUCompilationMessage* messages;
};