// Problem5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <limits.h>
#include <conio.h>

//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
//
//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20 ?

int main(int argc, _TCHAR* argv[])
{

	for (int Candidate = 21; Candidate < INT_MAX; Candidate++)
	{
		if ((Candidate % 2 == 0) && (Candidate % 3 == 0) && (Candidate % 4 == 0) && (Candidate % 5 == 0) && (Candidate % 6 == 0) && (Candidate % 7 == 0) && (Candidate % 8 == 0) &&
			(Candidate % 9 == 0) && (Candidate % 11 == 0) && (Candidate % 13 == 0) && (Candidate % 16 == 0) && (Candidate % 17 == 0) && (Candidate % 19 == 0))
		{
			
			for (int i = 1; i <= 20; i++)
			{
				fprintf(stdout, "The remainder of %d divided by %d is %d \n", Candidate, i, (Candidate %i));
			}
			
			fprintf(stdout, "The number %d is divisible 1 to 20", Candidate);
			_getch();
			
		}



	}

	return 0;
}

