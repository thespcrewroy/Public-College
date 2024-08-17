// parameterpassing.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

//function prototype
void passByValue(int);
void passByReference(int &);

int globalVariable = 20; //outside of function so anyone can access it (bad programming practice)

int main()
{

	int number = 5;

	//function call
	passByValue(number);
	cout << "number=" << number << endl;
	passByReference(number);
	cout << "number=" << number << endl;
	cout << globalVariable << endl;
	return 0;
}

void passByReference(int &x)
{
	cout << "x=" << x << endl;
	x++;
	return;
}

//function definition
void passByValue(int)
{
	/*ASK PROFESSOR WHAT GOES HERE*/
}
