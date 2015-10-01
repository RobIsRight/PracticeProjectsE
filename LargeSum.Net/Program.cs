using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using System.Numerics;

namespace LargeSum.Net
{
    class Program
    {
        static void Main(string[] args)
        {

            string filename = ("c:\\temp\\LargeSum.txt");

            BigInteger result = new BigInteger();

            string line;
            StreamReader r = new StreamReader(filename);

            while ((line = r.ReadLine())!=null)
            {
                result +=BigInteger.Parse(line);
            }
            Console.WriteLine("The answer is " + result);
            Console.Read();

        }
    }
}
