// PowerDigitSum.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main(int argc, _TCHAR* argv[])
{
	int NumField[400];
	int ProductField[400];

	NumField[0] = 2;
	int pos1  = 0;
	int pos2 = 0;
	int carry = 0;
	int product = 0;
	int sumOfDigits = 0;
	for (int i = 1; i <= 1000; i++)
	{
		product = NumField[pos1] * 2;
		carry = product / 10;
		ProductField[pos2] = product % 10;
		ProductField[pos2 + 1] = carry + ProductField[pos2 + 1];
	}



	//fprintf(stdout, " The sum of Digits of 2^1000 is %d", sum);
	
	return 0;
}

