// SumOfFibonacciUnder4Mil.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>


int main(int argc, _TCHAR* argv[])
{
	int FibonacciNumber=0;
	int PreviousInSequence=1;
	int oneBeforeThat = 0;
	long SumOfEvenNumbers=0;
	
	while (FibonacciNumber < 4000000)
	{
		if (FibonacciNumber % 2 == 0)
		{
			// if the Fibonacci number is even, add it
			SumOfEvenNumbers = SumOfEvenNumbers + FibonacciNumber;
			fprintf(stdout, "The Even Fib num is %d \n", FibonacciNumber);
		}
		FibonacciNumber = oneBeforeThat + PreviousInSequence;
		oneBeforeThat = PreviousInSequence;
		PreviousInSequence = FibonacciNumber;
		fprintf(stdout, "The Current Fib num is %d \n", FibonacciNumber);
	}
	fprintf(stdout, "The sum of the even numbers in the series is %d\n", SumOfEvenNumbers);
	
	_getch();
	
	return 0;
}

