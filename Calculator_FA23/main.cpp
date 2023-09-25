#include "Calculator.h"
#include <iostream>

using namespace std;

int main()
{
	Calculator calc;
	
    int choice;
    double num1, num2, result;

    cout << "Simple Calculator\n";
    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    if (choice == 1)
	{
		result = calc.add(num1, num2);
	}
	else if (choice == 2)
	{
		result = calc.subtract(num1, num2);
	}
	else if (choice == 3)
	{
		result = calc.multiply(num1, num2);
	}
	else if (choice == 4)
	{
		result = calc.divide(num1, num2);
	}
	else
	{
		cout << "Invalid choice\n";
		return -1;
	}

	cout << "Result: " << result << endl;

	return 0;
}