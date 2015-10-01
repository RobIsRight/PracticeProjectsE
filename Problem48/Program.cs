using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Numerics;


//The series, 1^1 + 2^2 + 3^3 + ... + 10^10 = 10405071317.

//Find the last ten digits of the series, 1^1 + 2^2 + 3^3 + ... + 1000^1000.
namespace Problem48
{
    class Program
    {
        static void Main(string[] args)
        {
            BigInteger sum = 0;
            for (int i = 1; i < 1000; i++)
            {
                sum = sum + BigInteger.Pow(i,i);
            }
            Console.WriteLine("sum of the power series is" + sum);
            string SumAsString = Convert.ToString(sum);
            int length = SumAsString.Length;
            string Last10Digits = SumAsString.Remove(0,length-10);
            Console.WriteLine("The last 10 digits are " + Last10Digits);
            Console.ReadKey();
            
        }
    }
}
