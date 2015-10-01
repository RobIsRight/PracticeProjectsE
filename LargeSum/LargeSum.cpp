// LargeSum.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <memory.h>
#include <windows.h>
#define NumberOfDigits 50
#define NumberOfLines 100
// TODO: unsolved due to data type size issue
int main(int argc, _TCHAR* argv[])
{
	
	FILE *NumberFile = NULL;
	errno_t err = fopen_s(&NumberFile, "c:\\temp\\LargeSum.txt", "r");
	char InputString[55];
	char *pInputString = InputString;
	int NumberHolder[NumberOfLines][NumberOfDigits];

	int SumOfAllNumbers[60];
	unsigned long long carry = 0;
	unsigned long long Sum = 0;
	memset(&SumOfAllNumbers, 0, sizeof(int) * 60);
	
	
	
	if (NumberFile != NULL)
	{
		for (int j = 0; j < NumberOfLines; j++)
		{
			//read the file line by line 
			fgets(InputString, 55, NumberFile);
			//parse the string , convert it to a array of digits and store

			for (int i = 0; i < NumberOfDigits; i++)
			{
				const char charDigit = InputString[i];
				NumberHolder[j][i] = atoi(&charDigit);
			}
		}

		for (int j = NumberOfDigits-40, AnsDigit =0; j >=0; j--, AnsDigit++)
		{
			Sum = 0;
			for (int i = 0; i < NumberOfLines; i++)
			{
				// go down the list of numbers digit by digit and add them together
				
				Sum = Sum + NumberHolder[i][j] + carry;
				SumOfAllNumbers[AnsDigit] = Sum % 10;
				carry = Sum / 10;
			}
			
		}
		// add the carry to the SumOfAllNumbers


		

		

	}
	else
	{
		fprintf(stdout, "File open failed");
	}


	
	fclose(NumberFile);
	
	
	return 0;
}

