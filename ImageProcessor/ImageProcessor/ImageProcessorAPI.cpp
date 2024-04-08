#include "pch.h"
#include <memory>
#include "CImageProcessor.h"
#include "ImageProcessorAPI.h"

static CImageProcessor* pImageProcessor = nullptr;
//static unique_ptr<CImageProcessor> pImageProcessor(new CImageProcessor)/* = nullptr*/;


_IPDLLTYPE_ void GetInstance()
{
	if(pImageProcessor == nullptr)
		pImageProcessor = new CImageProcessor();
}

_IPDLLTYPE_ void DeleteInstance()
{

	if (pImageProcessor != nullptr)
	{
		delete pImageProcessor;
		pImageProcessor = nullptr;
	}
	else
		pImageProcessor = nullptr;
}

_IPDLLTYPE_ const char* API_GetOpenCvVersion()
{
	if (pImageProcessor == nullptr)
		return "";
	
	return pImageProcessor->GetOpenCvVersion();	
}

_IPDLLTYPE_ const char* API_GetImageProcessorVersion()
{
	if (pImageProcessor == nullptr)
		return "";

	return pImageProcessor->GetImageProcessorVersion();
}
