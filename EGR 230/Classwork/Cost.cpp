// Roy_problem2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

double const TAX = 1.0675;
double const UC = 80;

int main()
{

	//Define variables
	double items;
	double u_cost, d_cost, t_cost;

	//Program description
	cout << "This program determines the total cost of a purchase." << endl;

	//Prompt user to enter the number of items
	cout << "Enter the number of items you would like to purchase: ";
	cin >> items;

	//Apply the monetary, discount, and tax costs
	if (items >= 0 && items <= 9)
	{
		u_cost = UC * items;
		t_cost = u_cost * TAX;
		cout.setf(ios::showpoint);
		cout.precision(5);
		cout << "The total cost is $" << t_cost << endl;
	}

	if (items >= 10 && items <= 19)
	{
		u_cost = UC * items;
		d_cost = u_cost * 0.9;
		t_cost = d_cost * TAX;
		cout.setf(ios::showpoint);
		cout.precision(5);
		cout << "The total cost is $" << t_cost << endl;
	}

	if (items >= 20 && items <= 49)
	{
		u_cost = UC * items;
		d_cost = u_cost * 0.8;
		t_cost = d_cost * TAX;
		cout.setf(ios::showpoint);
		cout.precision(5);
		cout << "The total cost is $" << t_cost << endl;
	}

	if (items >= 50)
	{
		u_cost = UC * items;
		d_cost = u_cost * 0.7;
		t_cost = d_cost * TAX;
		cout.setf(ios::showpoint);
		cout.precision(5);
		cout << "The total cost is $" << t_cost << endl;
	}

	return 0;
}
