/*--------------------------------------------------------------------*/
/*  Problem chapter4_26                                               */
/*  Author: Swapnil Roy                                               */
/*  This program generates a table of conversions from Fahrenheit     */
/*  to Celsius for values from 0 degrees F to 100 degrees F. Use a    */
/*  while loop for each 5 degree change.                              */

#include <iostream>
#include <iomanip>

using namespace std;

//const double TC = 1;
//const double TF = ((9 / 5) * TC) + 32;

int main()
{
	//Program decription
	cout << "This program generates a table of conversions from"
		" degrees Farhenheit to degrees Celsius.\n" << endl;

	//Declare objects
	int increment = 5, tf = 0;
	double tc;

	//format
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	//Print table
	cout << "Fahrenheit      Celcius" << endl;
	while (tf <= 100)
	{
		tc = (5.0 / 9.0) * ((double)tf - 32);
		cout << left << setw(10) << tf << "      " << tc << endl;
		tf += increment;
	}

	return 0;
}
