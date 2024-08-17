// rocket.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	double t, alt, v, a, oldAltitude;
	int numberOfRecords;
	ifstream fileInput;

	fileInput.open("rocket1.dat");

	if (fileInput.fail())
	{
		cerr << "Error opening file";
		return (-1);
	}

	fileInput >> numberOfRecords;
	fileInput>> t >> alt >> v >> a;
	oldAltitude = alt;
	while (!fileInput.open.eof())
	{
		fileInput >> t >> alt >> v >> a;
		cout << t << '\t' << a << endl;
		if (oldAltitude > alt)
			break;

		oldAltitude = alt;
	}

	cout << "Rocket begins to fall at " << endl;
	cout << "time =" << t << " seconds" << endl;
		fileInput.close();

	return 0;
}
