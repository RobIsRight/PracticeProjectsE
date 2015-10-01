using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Numerics;


//n! means n × (n − 1) × ... × 3 × 2 × 1

//For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800,
//and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.

//Find the sum of the digits in the number 100!
namespace Problem20
{
    class Program
    {
        static void Main(string[] args)
        {

            BigInteger factrialResult = new BigInteger();
            
            factrialResult = Factorial(100);
            string resultString = factrialResult.ToString();
            long DigitSum = 0;
            foreach (char digit in resultString)
            {
                DigitSum = Convert.ToInt32(Convert.ToString(digit)) + DigitSum;
            }
            Console.WriteLine("Factorial of 100 is " + factrialResult);
            Console.WriteLine("Sum of all digits is " + DigitSum);
            Console.ReadKey();
        
        }


        static BigInteger Factorial( BigInteger Input)
        {
	        if (Input == 0)
	        {
		        return 1;
	        }
	        else 
	        {
		        return ( Input * Factorial(Input - 1));
	        }
        
        }
    }
}
