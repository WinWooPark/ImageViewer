#include <iostream>
#include <string>
#include "ImageProcessorAPI.h"

int main() 
{
	void* ptr = nullptr;
	GetInstance(ptr);


	std::cout << API_GetOpenCvVersion(ptr) << std::endl;
	std::cout << API_GetImageProcessorVersion(ptr) << std::endl;

	DeleteInstance(ptr);
	return 0;
}