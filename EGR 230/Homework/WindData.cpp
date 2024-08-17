/*  Problem chapter6_32                                               */
/*  Author: Swapnil Roy                                               */
/*  This program generates flight simulator wind data with a          */
/*  0.5% possiblity of encountering a small storm at each time step.  */
/*  The average wind speed is increased by 10 mph for 5 minutes when  */
/*  a storm is encountered.                                           */

#include <iostream>
#include <random>
#include "time.h"
#include <iomanip>

using namespace std;

const int MAX_TIME = 3600;
double rand_float(double, double);

int main()
{
	//Declare and initialize objects
	long numberOfSimulations, average, range;

	//Prompt the user to enter the calibrations/restrictions
	cout << "Enter the average wind speed: ";
	cin >> average;
	cout << "Enter the range of wind speeds: ";
	cin >> range;

	//Display random wind speeds within restrictions
	for (int t = 0; t <= MAX_TIME; t = t + 10)
	{
		cout << t << '\t' << rand_float(average - range / 2, average + range / 2) << endl;

		if (rand_float(0, 1) <= 0.01) // a storm occured
		{
			for (int i = 1; i <= 30; i++)
			{
				cout << t << '\t' << rand_float(10 + average - range / 2, 10 + average + range / 2) << endl;
				t = t + 10;
			}
		}
	}

	return 0;

}

double rand_float(double a, double b)
{
	return ((double)rand() / RAND_MAX) * (b - a) + a;
}
