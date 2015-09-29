#pragma once
class MathWorker
{
public:
	MathWorker();
	~MathWorker();
protected:
	long m_InputParam;
public:
	// Calculates the factorial of the number passed
	unsigned long long CalcFactorial(int InputVar);
};

