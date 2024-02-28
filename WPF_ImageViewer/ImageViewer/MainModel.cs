using System;
using System.ComponentModel

namescpae ImageViewer.Model
{
    public class MainModel : INotifyPropertyChanged
    {
	    public MainModel(){}

        private string strDLLVer;
        public string DLLVer 
        {
            set 
            {
                strDLLVer = value;
                OnPropertyChanged(strDLLVer);
            }
            get 
            {
                return strDLLVer;
            }
        }


        public event PropertyChangedEventHandler PropertyChanged;

        protected void OnPropertyChanged(string name)
        {
            PropertyChangedEventHandler handler = PropertyChanged;
            if (handler != null)
            {
                handler(this, new PropertyChangedEventArgs(name));
            }
        }
    }
 }
