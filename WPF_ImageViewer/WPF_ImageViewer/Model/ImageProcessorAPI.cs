using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace WPF_ImageViewer.Model
{
    public class ImageProcessorAPI
    {
        [DllImport("ImageProcessor.dll", CallingConvention = CallingConvention.Cdecl)] public static extern void GetInstance();
        [DllImport("ImageProcessor.dll", CallingConvention = CallingConvention.Cdecl)] public static extern void DeleteInstance();
        [DllImport("ImageProcessor.dll", CallingConvention = CallingConvention.Cdecl)] public static extern string API_GetOpenCvVersion();
        [DllImport("ImageProcessor.dll", CallingConvention = CallingConvention.Cdecl)] public static extern string API_GetImageProcessorVersion();



       // [DllImport("dOperation.dll", CallingConvention = CallingConvention.Cdecl)] public static extern int Operation_Add(int a, int b);
    }
}
