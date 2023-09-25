#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <math.h>

class Calculator
{
public:
	Calculator();
	~Calculator();

	int add(int a, int b);
	int subtract(int a, int b);
	int multiply(int a, int b);
	int divide(int a, int b);
	int square(int a);
	int squareroot(int a);
	int exponent(int a, int b);

private:

};

#endif // CALCULATOR_H
