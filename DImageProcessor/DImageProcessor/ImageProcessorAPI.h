#pragma once

#include "IPdef.h"

typedef struct ImageBuffer 
{
	int m_Hight;
	int m_Width;
	void* Data;

}ImageBuffer;


IPDLL std::string			GetOpenCvVersion();

//Image Road
IPDLL BYTE*					Ipimread(std::string Path, int Falg = 1);

IPDLL bool					IpThreshold(In ImageBuffer& InputImage, Out ImageBuffer& OutputImage, int ThresHold);





//class IPDLL ImageProcessorAPI
//{
//
//};

