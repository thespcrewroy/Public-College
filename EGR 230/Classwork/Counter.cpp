// counter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
    
	int start, end, counter;
	char selection;++
	
	//Prompt user starting and ending numbers
	cout << "Enter the starting value: ";
	cin >> start;
	cout << "Enter the ending value: ";
	cin >> end;
	
	//Prompt user to select either even or odd numbers to display
	cout << "Enter an e for even or any other lettter for odd: ";
	cin >> selection;
	if (selection == 'e')
	{
		if (start % 2 == 1)
			start++;
	}
	else
		if (start % 2 == 0)
			start++;

	//Repeat steps 1 through 4 with 'while' repetition structure
	counter = start;
	while (counter <= end)
	{
		cout << counter << endl;
		counter += 2;
	}
	
	/*
	
	//Display integers from 1 to 100
	for (int counter = start; counter <= end; counter += 2)
	{			
		cout << counter << endl;
	}*/

	return 0;

}
