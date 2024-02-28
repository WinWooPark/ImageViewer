using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;



using System.ComponentModel;
namespace vImageViewer.Model
{
    class MainModel : INotifyPropertyChanged
    {
        public event PropertyChangedEventHandler PropertyChanged;
        private void OnPropertyChanged(string PropertyName) 
        {
            if (PropertyChanged != null)
               PropertyChanged(this, new PropertyChangedEventArgs(PropertyName));
            
        }

        private string _DllVer;
        public string DllVer 
        {
            get { return _DllVer; }
            set { _DllVer = value; }
        }

        //https://www.youtube.com/watch?v=D08Xf1xJJDk&list=PLEGjYQQO3ST8hatajWNDUGVwo437sPv8G&index=3

        public MainModel() { }

    }
}
