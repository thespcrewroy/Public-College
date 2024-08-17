/*----------------------------------------------------------------------------*/
/* Swapnil Roy                                                                */
/* Program chapter 3_39                                                       */
/* This program calculates a wind chill index, given a temperature in degrees */
/* Fahrenheitand a wind velocity in mphand reports on frostbit times          */

#include <iostream>
#include <cmath>

using namespace std;

const int INDEX30(-19), INDEX5(-48);

int main()
{
	//Program description
	cout << "This program determines if you are in immediate danger"
		" of frostbite" << endl << endl;

	//Initialize variables
	double tw, ta, v;

	//Prompt the user to enter data
	cout << "Enter the air temperature (fahrenheit): ";
	cin >> ta;
	cout << "enter the wind speed (miles per hour): ";
	cin >> v;

	//Calculate the wind chill index
	tw = (35.74) + (0.6215 * ta) - (35.75 * pow(v, 0.16)) + (0.4275 * ta * pow(v, 0.16));
	cout << "The wind chill index is: " << tw << endl;

	//Report frostbite time
	if (tw < INDEX30 && tw > INDEX5)
	{
		cout << "warning: frostbite will occur at around 30 minutes or less" << endl;
	}
	else if (tw < INDEX5)
	{
		cout << "warning: frostbite will occur at around 5 minutes or less" << endl;
	}
	else if (tw > INDEX30)
	{
		cout << "No immediate danger of frostbite" << endl;
	}
	
	return 0;
}
