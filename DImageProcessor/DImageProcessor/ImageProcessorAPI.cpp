#include "pch.h"
#include "ImageProcessorAPI.h"

#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;

IPDLL std::string GetOpenCvVersion(){ return CV_VERSION;}

string TESTstring() { return "OK";}