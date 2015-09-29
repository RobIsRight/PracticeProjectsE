// Problem3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
//
//Largest prime factor
//Problem 3
//The prime factors of 13195 are 5, 7, 13 and 29.
//
//What is the largest prime factor of the number 600851475143 ?
int main(int argc, _TCHAR* argv[])
{
	long long Target = 600851475143;
	
	long LargestFactor = 1;
	
	for (int FactorCandidate = 3; FactorCandidate < 1000000; FactorCandidate+=2)
	{
		// see if this is a prime
		bool IsPrime = true;
		for (int i = 2; i < FactorCandidate; i++)
		{
			if (FactorCandidate % i == 0)
			{
				IsPrime = false; 
				break;
			}
		}
		if (IsPrime)
		{
			//fprintf(stdout, "The %d a Prime \n", FactorCandidate);
		}
		if ((IsPrime) && (Target % FactorCandidate == 0))
		{
			// we got a prime factor
			fprintf(stdout, "The %d a Prime factor \n", FactorCandidate);
			if (FactorCandidate > LargestFactor)
			{
				LargestFactor = FactorCandidate;
				Target = Target / FactorCandidate;
				if (Target == 1)
				{
					break;
				}
			}
		}



	}
	fprintf(stdout, "The Largest PrimeFactor of %lld is %d \n", Target, LargestFactor);
	_getch();
	return 0;
}

