// datafilters1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream fileInput;
	ofstream fileOutput;
	char character;
	int count = 0;

	fileOutput.open("output.txt");
	fileInput.open("data.txt");

	if (fileInput.fail())
	{
		cerr << "File Error" << endl;
		return(-1);
	}

	while (!fileInput.eof())
	{
		fileInput.get(character);
		switch (character)
		{
		case '0': case '1': case '2': case '3': case '4': case '5':
		case '6': case '7': case '8': case '9': case '-': case '+':
		case ' ':
			cout << character;
			break;
		default:
			count++;
		}
	}
	cout << endl;
	cout << count;

	fileInput.close();
	fileOutput.close();
	return 0;
}
