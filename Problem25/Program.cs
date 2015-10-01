using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Numerics;




//The Fibonacci sequence is defined by the recurrence relation:

//Fn = Fn−1 + Fn−2, where F1 = 1 and F2 = 1.
//Hence the first 12 terms will be:

//F1 = 1
//F2 = 1
//F3 = 2
//F4 = 3
//F5 = 5
//F6 = 8
//F7 = 13
//F8 = 21
//F9 = 34
//F10 = 55
//F11 = 89
//F12 = 144
//The 12th term, F12, is the first term to contain three digits.

//What is the index of the first term in the Fibonacci sequence to contain 1000 digits?
namespace Problem25
{
    class Program
    {
        static void Main(string[] args)
        {

            BigInteger FibonacciNumber = 0;
            BigInteger PreviousInSequence = 1;
            BigInteger oneBeforeThat = 0;
            int fibonacciNumberDigits = 1;
            int DigitIndex = 1;
            while (fibonacciNumberDigits < 1000)
            {
                
                FibonacciNumber = oneBeforeThat + PreviousInSequence;
                oneBeforeThat = PreviousInSequence;
                PreviousInSequence = FibonacciNumber;
                fibonacciNumberDigits = Convert.ToString(FibonacciNumber).Length;
                DigitIndex++;
                //Console.WriteLine("The Current Fib num is "+ FibonacciNumber);
            }

            Console.WriteLine("The index of the first fib number with 1000 digits is " + DigitIndex);
            Console.ReadKey();
        }
    }
}
