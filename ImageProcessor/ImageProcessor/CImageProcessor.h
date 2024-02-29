#pragma once
#include <string>
#include "opencv2/opencv.hpp"
using namespace cv;
using namespace std;

#define _DLL_VERSION_ "0.0.1"

class CImageProcessor
{
public:
	CImageProcessor();
	~CImageProcessor();

	string  GetOpenCvVersion();

	string  GetImageProcessorVersion();
};

