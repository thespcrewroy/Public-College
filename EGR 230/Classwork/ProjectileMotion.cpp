// ProjectileMotion.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

const double G = 32.2;
const double PI = 3.1415;

int main()
{

	double yo, vo, t, vox, voy, theta, x;
	cout << "This program calculates the time a vertically launched projectile takes to hit the ground." << endl;
	
	cout << "Enter the initial height: ";
	cin >> yo;
	cout << "Enter the initial velocity: ";
	cin >> vo;
	cout << "Enter the launch angle: ";
	cin >> theta;

	vox = vo*cos(theta*PI/180);
	voy = vo*sin(theta*PI/180);

	t = (-voy - pow(voy*voy + 4 * 16.1*yo, 0.5)) / (-2 * 16.1);
	cout << "time = " << t << endl;
	x = vox*t;
	cout << "The horizantal distance = " << x << " ft";

	return 0;
}
