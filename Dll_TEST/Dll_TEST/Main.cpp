#include <iostream>
#include <string>
#include "ImageProcessorAPI.h"

int main() 
{
	GetInstance();

	std::cout << API_GetOpenCvVersion() << std::endl;
	std::cout << API_GetImageProcessorVersion() << std::endl;

	DeleteInstance();
	return 0;
}