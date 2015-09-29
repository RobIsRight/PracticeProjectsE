// PythogoreanTriplet.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <limits.h>
#include <conio.h>

//A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
//
//	a^2 + b^2 = c^2
//	For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
//
//	There exists exactly one Pythagorean triplet for which a + b + c = 1000.
//	Find the product abc.
int main(int argc, _TCHAR* argv[])
{
	
	for (int a = 1; a < 1000; a++)
	{
		for (int b = a + 1; b < 1000; b++)
		{
			float c2 = (a*a) + (b*b);
			float c = sqrt(c2);
			float total = a + b + c;
			if (total == 1000)
			{
				fprintf(stdout, " %d, %d, %f, gives a sum of 1000 and product of %f", a, b, c, (a*b*c));
			}

			
		}
	}
	_getch();
	
	return 0;
}

