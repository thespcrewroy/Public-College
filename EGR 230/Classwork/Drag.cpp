// Roy_problem1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

const double D = 1.225;

int main()
{

	double c, v, a, drag;
	cout << "This program calculates drag on an object that is passing through the air." << endl;

	cout << "Enter the drag coefficient: ";
	cin >> c;
	cout << "Enter the velocity (m/s): ";
	cin >> v;
	cout << "Enter the reference area (units of meters squared): ";
	cin >> a;

	drag = c*((D*v*v) / 2)*a;
	cout << "The drag force is " << (int) drag << " N. ";

	return 0;
}
