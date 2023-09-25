#include "Calculator.h"

Calculator::Calculator()
{
}

Calculator::~Calculator()
{
}

int Calculator::add(int a, int b)
{
	return a + b;
}

int Calculator::subtract(int a, int b)
{
	return a - b;
}

int Calculator::multiply(int a, int b)
{
	return a * b;
}

int Calculator::divide(int a, int b)
{
	return a / b;
}

int Calculator::square(int a)
{
	return a * a;
}

int Calculator::squareroot(int a)
{
	return sqrt(a);
}

int Calculator::exponent(int a, int b)
{
	return pow(a, b);
}
