// Problem6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
//Sum square difference
//Problem 6
//The sum of the squares of the first ten natural numbers is,
//
//1^2 + 2^2 + ... + 10^2 = 385
//The square of the sum of the first ten natural numbers is,
//
//(1 + 2 + ... + 10)^2 = 55^2 = 3025
//Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.
//
//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
int main(int argc, _TCHAR* argv[])
{
	long long Sum = 0;
	long long SquareOfSum = 0;
	long long SumOfSquare = 0;
	for (int NaturalNumber = 1; NaturalNumber <= 100; NaturalNumber++)
	{
		Sum += NaturalNumber;
		SumOfSquare += NaturalNumber * NaturalNumber;
	}
	SquareOfSum = Sum *Sum;
	fprintf(stdout, "Diff between sum of squares and square of sum %lld  \n", SumOfSquare - SquareOfSum);
	_getch();
	
	return 0;
}

