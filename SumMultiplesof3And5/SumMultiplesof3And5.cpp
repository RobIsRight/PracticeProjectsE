// SumMultiplesof3And5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>


int main(int argc, _TCHAR* argv[])
{
	long sum = 0;
	for (int x = 1; x < 1000; x++ )
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			sum = sum + x;
		}
	}
	fprintf(stdout, "Sum of natural multiples of 3 and 5 = %d", sum);
	_getch();
	return 0;
}

