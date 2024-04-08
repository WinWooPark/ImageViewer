#include "pch.h"
#include "CImageProcessor.h"


CImageProcessor::CImageProcessor(){}
CImageProcessor::~CImageProcessor() {}

const char* CImageProcessor::GetOpenCvVersion()
{
    return CV_VERSION;
}

const char* CImageProcessor::GetImageProcessorVersion()
{
    return _DLL_VERSION_;
}
