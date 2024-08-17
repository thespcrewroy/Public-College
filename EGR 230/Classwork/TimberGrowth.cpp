// timbergrowth.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

const double RATE = 0.02;
const int FOREST_SIZE = 14000;	//initial forest size
const int START_FORESTED_AREA = 2500;	//after removal of trees
const int START_YEAR = 1;
const int END_YEAR = 100;

int main()
{
	int forestedArea = START_FORESTED_AREA;
	int endingYear; //added step 2
	cout << "Enter the ending year: ";	// added for step 2
	cin >> endingYear;					// added for step 2
	cout << "year" << '\t' << "forested Area" << endl;
	cout << "------------------------------" << endl;
	for (int year = START_YEAR; ; year++)	// modified step 2
	{
		forestedArea = forestedArea*(1 + RATE);
		cout << year << '\t' << forestedArea << endl;
		if (forestedArea > FOREST_SIZE)
		{
			cout << "It will take " << year << " years to reforest the entire forest " << endl;
			break;
		}
	}

	return 0;
}
