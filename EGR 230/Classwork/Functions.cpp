#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int displayMessage(int, int); // function prototype - compiler needs for function making
// int before function name defines the data type that is returned
// int,int - means send in two integers

int main()
{

	cout << displayMessage(5, 3) << endl; // a function call with two values passed in
    return 0;
}

int displayMessage(int x, int y) // function definition
{
	cout << "Hello world " << x << '\t' << y << endl;
	return x + y;
}
