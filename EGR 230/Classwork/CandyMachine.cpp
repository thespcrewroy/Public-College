// Candy Machine.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

const int MIN_CENTS = 100;

int main()
{
    
	//Define variables
	int number;
	int money;
	char selection1, selection2, temp;

	//Prgram Description
	cout << "This is a candy bar program" << endl;

	//Prompt user to enter cash
	cout << "Each candy bar is 100 cents." << endl;
	cout << "Insert money (cents): " << endl;
	cin >> money;

	if (money >= MIN_CENTS)
		cout << "Proceed to select your candy bar" << endl;
	else {

		cout << "Get a job fag" << endl;
		cout << "Your change is " << money % MIN_CENTS << " cents" << endl;
		return 0;
	}

	cin.get(temp);

	//Describe the items to the user.
	cout << "Make the following selection" << endl;
	cout << "1a-Skittles" << endl;
	cout << "1b-Giant Gumball" << endl;
	cout << "2a-Choclate Bar" << endl;
	cout << "2b-Ring Pop" << endl;
	cin.get(selection1);
	cin.get(selection2);

	//Deliver the candy
	switch (selection1) // switch only works with characters and integers
	{
	case '1':
		switch (selection2)
		{
		case 'a':
			cout << "Skittles" << endl;
			break;
		case 'b':
			cout << "Giant Gumball" << endl;
			break;
		default:
			cout << "Bad Entry";
		}

	case '2':
		switch (selection2)
		{
		case 'a':
		cout << "Chocolate Bar" << endl;
		break;
	case 'b':
		cout << "Ring Pop" << endl;
		break;
	default:
		cout << "Bad Entry";
		}

		cout << "Your change is " << money % MIN_CENTS << "cents" << endl;

	}
	return 0;
}
