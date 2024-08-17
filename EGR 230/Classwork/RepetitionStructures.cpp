// repititionstructures.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	
	
/*----- for loop checking if not q------------------------*/
	for(char letter = 'a'; letter != 'q';)
	{
		cout << "Enter a character:";
		cin >> letter;
		cout << letter << endl;
	}
	
/*------------do while loop checking if not q--------------*/
	/*do {
		cout << "Enter a character:";
		cin >> letter;
		cout << letter << endl;
	} while (letter != 'q');
	cout << "Enter a character:";
	cin >> letter;

	while (letter != 'q')
	{
		cout << letter << endl;
		cout << "Enter a character:";
		cin >> letter;
	}
	
	/*int counter = 1;

	//for (initialize var x; condition; incrememnt)
	for (int x = 1; x <= 100; x++)
	{
		cout << x << endl;
	}

	do
	{
		cout << counter << endl;
		counter++;
	} while (counter <= 100);

	while (counter <= 100)
	{
		cout << counter << endl;
		counter++;
	} */

	return 0;
}
