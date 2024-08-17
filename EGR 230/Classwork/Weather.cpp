// weather.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream fileInput;
	int day, minTemp, maxTemp, lessThan0=0, zeroTo32=0, thirtyThreeTo75=0, over75=0;
	double dummy;

	fileInput.open("JAN91.DAT");
	
	if (fileInput.fail())
	{
		cerr << "file error" << endl;
		return (-1);
	}

	while (!fileInput.eof())
	{
		fileInput >> day >> maxTemp >> minTemp;
		for (int i = 1; i <= 29; i++)
			fileInput >> dummy;
		if (minTemp < 0)
			lessThan0++;
		if(minTemp <= 32 && maxTemp > 0)

		cout << day << '\t' << maxTemp << '\t' << minTemp << endl;
	}

	cout << "days less than 0=" << lessThan0 << endl;
	fileInput.close();
	return 0;
}
