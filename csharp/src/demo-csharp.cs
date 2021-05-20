using System;
using System.Runtime.InteropServices;
using System.Text;

namespace DemoApp {
    class Program {
        static void Main(string[] args) {
            StringBuilder outBuf = new StringBuilder(256);
            NativeMethods.my_func_a("hogehoge", outBuf);
            Console.WriteLine(outBuf.ToString());
        }
    }

    static class NativeMethods {
        [DllImport("..\\..\\common-dll\\common-dll\\dest\\my_common_lib.dll", CallingConvention = CallingConvention.StdCall)]
        public extern static bool my_func_a(string in_str, StringBuilder out_str);
    }
}
