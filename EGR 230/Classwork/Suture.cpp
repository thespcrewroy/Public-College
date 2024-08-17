#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream fileInput;
	int batchNumb, pressureError = 0, tempError = 0, dwellError = 0, count = 0;
	double temp, pressure, dwell;

	fileInput.open("suture.dat");

	if (fileInput.fail())
	{
		cerr << "file error" << endl;
		return (-1);
	}

	while (!fileInput.eof())
	{
		fileInput >> batchNumb >> temp >> pressure >> dwell;
		count++;
		if (temp < 150 || temp > 170) //represents BAD
			tempError++;
		if (pressure < 60 || pressure > 70)
			pressureError++;
		if (dwell < 2 || dwell > 2.5)
			dwellError++;

		cout << batchNumb << '\t' << temp << '\t' << pressure << dwell << endl;
	}

	cout << "Percentage that failed due to temperature=" << ((double)tempError / count) * 100 << '%' << endl;
	cout << "Percentage that failed due to pressure=" << ((double)pressureError / count) * 100 << '%' << endl;
	cout << "Percentage that failed due to dwell time=" << ((double)dwellError / count) * 100 << '%' << endl;

		fileInput.close();
		return 0;

}
