#pragma once
#include <string>
using namespace std;

#ifdef _DLLEXPORT
#define _IPDLLTYPE_ __declspec(dllexport)
#else
#define _IPDLLTYPE_ __declspec(dllimport)
#endif

extern "C" _IPDLLTYPE_ void GetInstance();

extern "C" _IPDLLTYPE_ void DeleteInstance();

extern "C" _IPDLLTYPE_ const char* API_GetOpenCvVersion();

extern "C" _IPDLLTYPE_ const char* API_GetImageProcessorVersion();