using System.Runtime.InteropServices;
using System.Text;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace ImageViewer
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {

        [DllImport("DImageProcessor.dll")] public static extern string GetOpenCvVersion();
        [DllImport("DImageProcessor.dll")] public static extern string TESTstring();


        public MainWindow()
        {
            InitializeComponent();
        }

        public string test => TESTstring();

        private void BtnClick(object sender, RoutedEventArgs e)
        {
            MessageBox.Show(test, "opencv 버전 확인");
            //MessageBox.Show(GetOpenCvVersion(), "opencv 버전 확인");
        }
    }
}