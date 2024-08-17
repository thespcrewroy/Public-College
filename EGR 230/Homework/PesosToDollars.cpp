/*--------------------------------------------------------------------*/
/*  Problem chapter4_22                                               */
/*  Author: Swapnil Roy                                               */
/*  This program generates a table of conversions from pesos          */
/*  to dollars.  The pesos column starts at 5 pesos and               */
/*  increments by 5 pesos for 25 lines.                               */

#include <iostream>
#include <iomanip>

using namespace std;

const double PTOD = 9.02;

int main()
{
	//Program description
	cout << "This program generates a table of conversions from"
		" pesos to dollars.\n" << endl;

	//Declare objects
	int increment = 5, p = 5;
	double d;

	//Set formats
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	//Print pesos to dollars conversion
	cout << "Pesos           Dollars" << endl;
	while (p <= 5 * 25)
	{
		d = p / PTOD;
		cout << left << setw(10) << p << "      " << d << endl;
		p = p + increment;
	}

	return 0;
}
