// PowerDigitSum.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
//Power digit sum
//Problem 16
//2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
//
//What is the sum of the digits of the number 2^1000 ?

int main(int argc, _TCHAR* argv[])
{
	
	int ProductField[400];
	for (int counter = 0; counter < 400; counter++)
	{
		
		ProductField[counter] = 0;
	}


	ProductField[0] = 2;
	int carry = 0;
	int product = 0;
	long long sumOfDigits = 0;
	int ProductDigitSize = 1;
	for (int i = 2; i <= 1000; i++)
	{
		carry = 0;
		product = 0; 
		int j = 0;
		for ( j = 0; j < ProductDigitSize; j++)
		{
			product = (ProductField[j] * 2) + carry;
			carry =  product / 10;
			ProductField[j] = product % 10;
			
		}
		if (carry != 0)
		{
			ProductField[j] = carry;
			ProductDigitSize++;
		}
		
	}

	for (int i = 0; i < ProductDigitSize; i++)
	{
		sumOfDigits = sumOfDigits + ProductField[i];
	}

	fprintf(stdout, " The sum of Digits of 2^1000 is %d", sumOfDigits);
	_getch();
	return 0;
}

