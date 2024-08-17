/* ----------------------------------------------------------------------*/

#include "stdafx.h"
#include <iostream>

using namespace std;
const int SENIOR_AGE = 65;

int main()
{
	//Define variables.
	int age;
	char ch1, ch2, temp;
	
	//Name of program.
	cout << "Senior citizen program" << endl;

	//Ask the user to enter their age and state.
	cout << "Enter your age: " << endl;
	cin >> age;
	cin.get(temp);
	cout << "Enter your postal abbreviation: " << endl;
	cin.get(ch1);
	cin.get(ch2);

	if (age > SENIOR_AGE)
		if (ch1 == 'C' && ch2 == 'T')
			cout << "You qualigy for AARP." << endl;
		else
			cout << "You are not a CT resident." << endl;
		else
			cout << "Try again in " << SENIOR_AGE + 1 - age << " years." << endl;
	
	
	/*
	//Determine if user qualifies for AARP funding.
	if (age > SENIOR_AGE && ch1 == 'C' && ch2 == 'T')
		cout << "You qualify for AARP." << endl;

	else
	{
		cout << "You do not quanlify for AARP." << endl;
		if (age < 66)
			cout << "Try again in " << SENIOR_AGE + 1 - age << " years." << endl; 
	} */

	return 0;
}
