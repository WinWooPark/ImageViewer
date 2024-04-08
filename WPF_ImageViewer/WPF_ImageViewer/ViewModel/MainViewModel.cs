using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.ComponentModel;
using WPF_ImageViewer.Model;
using System.Runtime.InteropServices;

namespace WPF_ImageViewer.ViewModel
{
    public class MainViewModel : INotifyPropertyChanged
    {
        public MainViewModel()
        {
            ImageProcessorAPI.DeleteInstance();
            
            ImageProcessorAPI.GetInstance(); //dll 내부 객체 생성

            IntPtr ptr = ImageProcessorAPI.API_GetOpenCvVersion();
            string message = Marshal.PtrToStringAnsi(ptr);

            _DllVer = message;
        }

        ~MainViewModel()
        {
            ImageProcessorAPI.DeleteInstance(); //dll 내부 객체 생성
        }

        public event PropertyChangedEventHandler? PropertyChanged;
        private void OnPropertyChanged(string propertyName)
        {
            if (PropertyChanged != null)
                PropertyChanged(this, new PropertyChangedEventArgs(propertyName));
        }

        //DLL 내부의 OpenCV 버전
        private string _OpencvVer;
        public string OpencvVer 
        { 
            get { return _OpencvVer; }
            set 
            {
                if (_OpencvVer != value)
                {
                    _OpencvVer = value;
                    OnPropertyChanged(_OpencvVer);
                }
            } 
        }

        //DLL 버전
        private string _DllVer;
        public string DllVer
        {
            get { return _DllVer; }
            set
            {
                if (_DllVer != value)
                {
                    _DllVer = value;
                    OnPropertyChanged(_DllVer);
                }
            }
        }
    }
}
