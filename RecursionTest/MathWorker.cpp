#include "stdafx.h"
#include "MathWorker.h"


MathWorker::MathWorker()
{
	m_InputParam = 0;
}


MathWorker::~MathWorker()
{
}


// Calculates the factorial of the number passed
unsigned long long MathWorker::CalcFactorial(int InputVar)
{
	if (InputVar == 0)
	{
		return 1;
	}
	else 
	{
		return ((long long) InputVar * CalcFactorial(InputVar - 1));
	}
	
}
