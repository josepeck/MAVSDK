#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#ifdef WINDOWS
#define DLLExport __declspec(dllexport)
#else
#define DLLExport __attribute__((visibility("default")))
#endif

DLLExport void
runBackend(const char* system_address, const int mavsdk_server_port, void (*onServerStarted)(void* context, int grpc_port), void* context);

#ifdef __cplusplus
}
#endif
