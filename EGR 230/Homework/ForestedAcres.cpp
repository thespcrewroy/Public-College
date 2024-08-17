/*--------------------------------------------------------------------*/
/*  Problem chapter4_29                                               */
/*  Author: Swapnil Roy                                               */
/*  Assume that there are 14,000 acres total with 2500 acres          */
/*  uncut, and that the reforestation rate is 0.02.                   */
/*  This program prints a table showing the number of acres           */
/*  forested at the end of each year, for a total of 20 years.        */

#include <iostream>
#include <iomanip>

using namespace std;

const double REFORESTATION = 1.02;

int main()
{
	//Program Description
	cout << "This program prints the amount of acres forested at the end"
		" of each year for a total of 20 years.\n" << endl;
	
	//Declare objects
	int increment = 1, year = 0;
	double forestedacres = 2500;

	//Set formats
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);

	//Print number of acres forested per year
	cout << "Year          Forested Acres" << endl;
	while (year <= 20)
	{
		cout << left << setw(10) << year << "      " << forestedacres << endl;
		year = year + increment;
		forestedacres = forestedacres * REFORESTATION;
	}

	return 0;
}
