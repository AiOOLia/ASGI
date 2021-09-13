#pragma once

struct GPUCompilationMessage {
	const char* message;
	const GPUCompilationMessageType type;
	const unsigned long long lineNum;
	const unsigned long long linePos;
	const unsigned long long offset;
	const unsigned long long length;
};