#include "pch.h"
#include "CImageProcessor.h"


CImageProcessor::CImageProcessor(){}
CImageProcessor::~CImageProcessor() {}

string CImageProcessor::GetOpenCvVersion()
{
    return CV_VERSION;
}

string CImageProcessor::GetImageProcessorVersion()
{
    return _DLL_VERSION_;
}
