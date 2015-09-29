// RecursionTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <stdlib.h>
#include "MathWorker.h"
#include <string>
#include <stdio.h>

long m_inputParam = 0;

int main(int argc, char *argv[])
{
	

	
	int InputParam = 0;
	MathWorker WorkerObject;
	if (argc > 1)
	{
		// user entered some value
		if (strcmp(argv[1], "--all") == 0)
		{
			for (int counter = 0; counter < 100; counter++)
			{
				unsigned long long returnValue = WorkerObject.CalcFactorial(counter);
				fprintf(stdout, "Factorial of %d is %llu \n", counter, returnValue);
				if (returnValue == 0)
				{
					return 0;
				}
			}
		}
		else
		{
			InputParam = atoi(argv[1]);


			unsigned long long returnValue = WorkerObject.CalcFactorial(InputParam);
			fprintf(stdout, "Factorial of %d is %llu", InputParam, returnValue);
		}
		

	}
	else
	{
		fprintf(stdout, "Please Provide a number \n");
	}
//	_getch();
	return 0;
}

