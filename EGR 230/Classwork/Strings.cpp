#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

string first(string[], int);

int main()
{
	string str[] = { "bob","jill","mark","howard","andrew" };
	cout << first(str, 5) << endl;
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
