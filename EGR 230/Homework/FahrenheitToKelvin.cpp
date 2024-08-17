/*--------------------------------------------------------------------*/
/*  Problem chapter4_27                                               */
/*  Author: Swapnil Roy                                               */
/*  This program generates a table of conversions from Fahrenheit     */
/*  to Kelvin for values from 0 degrees F to 200 degrees F.           */
/*  It allows the user to enter the increment in degrees F.           */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//Program description
	cout << "This program generates a table of conversions from "
		"Farhenheit to Kelvin, and allows the user to enter "
		"the increment for degrees farhenheit.\n" << endl;

	//Declare objects
	int tf = 0;
	double increment, tk;

	//Prompt user to enter in an increment value
	cout << "Enter an increment value: ";
	cin >> increment;
	cout << endl;

	//Format
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	//Print conversion table
	cout << "Fahrenheit      Kelvin" << endl;
	do{
		tk = ((5.0 / 9.0) * ((double)tf + 32)) + 273.15;
		cout << left << setw(10) << tf << "      " << tk << endl;
		tf += increment;
	} while (tf <= 200);

	return 0;
}
