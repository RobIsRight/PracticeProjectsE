// problem4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iosfwd>
#include <string>

//TODO:unsolved
//Largest palindrome product
//Problem 4
//A palindromic number reads the same both ways.The largest palindrome made from the product of two 2 - digit numbers is 9009 = 91 × 99.
//
//Find the largest palindrome made from the product of two 3 - digit numbers.
int main(int argc, _TCHAR* argv[])
{
	std::string targetstr ;
	std::string reversedStr;
	const int lengthofNum = 7;
	char buffer[lengthofNum];// largest possible number is 999*999 = 998001
	char reversedBuf[] = "123456";
	for (int a = 100; a < 1000; a++)
	{
		for (int j = a + 1; j < 1000; j++)
		{
			int Candidate = a * j;
			_itoa_s(Candidate, buffer, 10);
			
			for (int pos = 0; pos < lengthofNum; pos++)
			{
				reversedBuf[pos] = buffer[lengthofNum-pos-1];
			}
			if (strcmp(reversedBuf, buffer) == 0)
			{
				// found a palindrome
				fprintf(stdout, "%s and %s are palindrome of %d", &buffer, &reversedBuf, Candidate);
			}
			
		}
		
	}
	
	return 0;
}

