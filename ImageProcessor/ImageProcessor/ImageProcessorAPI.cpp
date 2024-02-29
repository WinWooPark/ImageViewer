#include "pch.h"
#include "CImageProcessor.h"
#include "ImageProcessorAPI.h"

_IPDLLTYPE_ void GetInstance(void* Instance)
{
	CImageProcessor* pImageProcessor = new CImageProcessor();
	Instance = static_cast<void*>(pImageProcessor);
}

_IPDLLTYPE_ void DeleteInstance(void* Instance)
{
	static_cast<CImageProcessor*>(Instance);
	if (Instance != nullptr)
	{
		delete Instance;
		Instance = nullptr;
	}
}

_IPDLLTYPE_ string API_GetOpenCvVersion(void* Instance)
{
	CImageProcessor* pImageProcessor = static_cast<CImageProcessor*>(Instance);
	return pImageProcessor->GetOpenCvVersion();
}

_IPDLLTYPE_ string API_GetImageProcessorVersion(void* Instance)
{
	CImageProcessor* pImageProcessor = static_cast<CImageProcessor*>(Instance);
	return pImageProcessor->GetImageProcessorVersion();
}
