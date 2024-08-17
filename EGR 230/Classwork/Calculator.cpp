#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

double calculator(double, double, char);

int main()
{
	//Program description
	cout << "This program performs multiplication of two floating numbers and returns result and disaplyes it.\n";

	//Define objects
	double ans, firstNumber, secondNumber;
	char operation;

	//Prompt user to enter two numbers
	cout << "Enter first number: ";
	cin >> firstNumber;
	cout << "Enter second number: ";
	cin >> secondNumber;
	cout << "Enter the operation(+,-,*, or /): ";
	cin >> operation;

	cout << "Answer: " << calculator(firstNumber, secondNumber, operation) << endl;
	return 0;
}

double calculator(double x, double y, char operation)
{
	switch (operation)
	{
	case '*':
		return x*y;
		break;
	case '+':
		return x + y;
		break;
	case '-':
		return x - y;
		break;
	case '/':
		return x / y;
		break;
	default:
		cout << "bad operation" << endl;
	}
		
}
