// SumOfPrimes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <limits.h>
#include <conio.h>
#include <math.h>
#include <stdint.h>
#include <crtdbg.h>
#include <time.h>




//sum of primes below 2 million
#define NumOfPrimes 200000
#define LargePrimeList 1000000
int main(int argc, _TCHAR* argv[])
{
	clock_t begin, end;
	double time_spent;


	begin = clock();
	long LargestFactor = 1;
	int PrimeCounter = 1;
	long *pPrimeNumbersArray;
	pPrimeNumbersArray = new long[LargePrimeList];

	for (int ctr = 0; ctr < LargePrimeList; ctr++)
	{
		*(pPrimeNumbersArray + ctr) = 2; // fill array with 2
	}
	long  PrimeCandidate;
	int NextPrimeSlot = 1;
	long long sumOfPrimes = 2;
	for (PrimeCandidate = 3; ((PrimeCandidate < INT_MAX) && (NextPrimeSlot < LargePrimeList)); PrimeCandidate += 2)
	{

		int TestLimit = sqrt((float)PrimeCandidate);
		// see if this is a prime
		bool IsPrime = true;

		for (int pos = 0; pos < LargePrimeList - 1; pos++)
		{

			// test the prime candidate with items on the array that are less than the test limit
			// if its divisible, discard the candidate, if not add to array at the next position
			if (*(pPrimeNumbersArray + pos) <= TestLimit)
			{
				if (PrimeCandidate % *(pPrimeNumbersArray + pos) == 0)
				{
					// not a prime, discard 
					IsPrime = false;
					break;
				}

			}
			else
			{
				if (IsPrime)
				{
					*(pPrimeNumbersArray + NextPrimeSlot) = PrimeCandidate;
					NextPrimeSlot++;
					//fprintf(stdout, "The %d th Prime is %d \n", NextPrimeSlot, PrimeCandidate);
					sumOfPrimes = sumOfPrimes + PrimeCandidate;
				}
				break;
			}
		}

		if (PrimeCandidate == 2000001)
		{
			fprintf(stdout, "The sum of all primes under 2,000,000 is %lld \n",sumOfPrimes);
		}

		if (NextPrimeSlot == LargePrimeList)
		{
			end = clock();
			fprintf(stdout, "The %d is the %dth Prime \n", PrimeCandidate, LargePrimeList);
			time_spent = (double)(end - begin)*1000.0 / CLOCKS_PER_SEC;
			fprintf(stdout, "Time to execute = %f", time_spent);
			break;
		}

	}
	delete[] pPrimeNumbersArray;
	_getch();
	return 0;
}

