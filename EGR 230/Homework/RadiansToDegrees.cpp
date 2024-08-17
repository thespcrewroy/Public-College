/*--------------------------------------------------------------------*/
/*  Problem chapter4_17                                               */
/*  Author: Swapnil Roy                                               */
/*  This program prints a conversion table from radians to degrees.   */
/*  The radian column starts at 0.0, and increments by pi/10,         */
/*  until the radian amount is 2*pi.                                  */

#include <iostream>

using namespace std;

const double PI = 3.141593;

int main()
{
	//Program descritpion
	cout << "This program prints a conversion table from radians to"
		" degrees.\n" << endl;
	
	//Initialize objects
	double degrees, increment = PI / 10, rad = 0;

	//Format
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);

	//Print radians and degrees
	cout << "Radians    Degrees\n";
	while (rad <= 2 * PI)
	{
		degrees = rad * (180 / PI);
		cout << rad << "      " << degrees << endl;
		rad = rad + increment;
	}

	return 0;

}
