#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

	//Building the program.
	int startTemp, endTemp;
	char selection;
	cout << "Program to convert from degrees F to degrees C" << endl << endl;

	//Prompt user for starting and ending temps.
	cout << "Enter the starting temperature (degrees F): ";
	cin >> startTemp;
	cout << "Enter the ending temperature (degrees F): ";
	cin >> endTemp;
	cout << right << setw(15) << "Degrees F " << right << setw(15) << "Degrees C" << endl;
	cout << "--------------------------------------------------------------" << endl;

	for (int tf = startTemp; tf <= endTemp; tf++)
	{
		cout << right << setw(10) << tf << "\t" << setw(10) << right<<
			fixed << setprecision(1) << (5./9*(tf - 32)) << endl;
	}
	return 0;
}
