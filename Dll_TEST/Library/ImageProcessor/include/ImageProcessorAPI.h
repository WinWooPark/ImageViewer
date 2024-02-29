#pragma once

#include <string>
using namespace std;
#ifdef _DLLEXPORT
#define _IPDLLTYPE_ __declspec(dllexport)
#else
#define _IPDLLTYPE_ __declspec(dllimport)
#endif

extern "C" _IPDLLTYPE_ void GetInstance(void* Instance);

extern "C" _IPDLLTYPE_ void DeleteInstance(void* Instance);

extern "C" _IPDLLTYPE_ string API_GetOpenCvVersion(void* Instance);

extern "C" _IPDLLTYPE_ string API_GetImageProcessorVersion(void* Instance);