// vartest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double tf, tr, tk, tc;
	cout << "This program converts temperature in Farenheit to Kelvin, Celcius, and Rankine" << endl;
	cout << endl;

	cout << "Enter temperature in degrees Fahrenheit: ";
	cin >> tf;
	tk = (tf + 459.67) * 5. / 9;
	tc = (tf - 32) * 5. / 9;
	tr = tf + 459.67;

	cout.setf(ios::fixed);
	cout << setw(20) << "Farhaneit" << setw(20) << "Kelvin" << setw(20) << "Rankine" << setw(20) << "Celcius" << endl;
	cout << setprecision(1) << setw(20) << tf << setw(20) << tk << setw(20) << tr << setw(20) << setw(20) << tc << endl;

	return 0;
}
