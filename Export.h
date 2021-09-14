#pragma once

#ifdef __cplusplus
#ifdef ASGI_EXPORT
#define  ASGI_API extern "C" __declspec(dllexport)
#else
#define  ASGI_API extern "C" __declspec(dllimport)
#endif
#else
#ifdef ASGI_EXPORT
#define  ASGI_API  __declspec(dllexport)
#else
#define  ASGI_API  __declspec(dllimport)
#endif
#endif
