#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string first(string[], int);

int main()
{
	string str[100];
	ifstream fileInput;
	int num;
	int i = 0;

	fileInput.open("data.txt");

	while (!fileInput.eof())
	{
		fileInput >> str[i]; //fileOutput << str[i];
		i++;
	}
	cout << "Input a number: ";
	cin >> num;
	cout << first(str, num) << endl;
	return 0;
}

string first(string strArr[], int size)
{
	int smallestLocation = 0;
	for (int i = 0; i < size; i++)
		if (strArr[i] < strArr[smallestLocation])
			smallestLocation = i;
	return strArr[smallestLocation];
}
