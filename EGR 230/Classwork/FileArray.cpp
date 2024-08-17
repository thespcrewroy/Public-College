#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;

int sequentialSearch(int[], int, int);

int main()
{
	ifstream fileInput;
	int x[100];
	int maxOffset;
	fileInput.open("data.txt");
	if (fileInput.fail())
	{
		cerr << "Error opening file";
		exit(1);
	}


	/*while (!fileInput.eof()) //Keep reading as long as it is not to the end of the file*/
	for (int i = 0; !fileInput.fail(); i++)
	{
		fileInput >> x[i];
		maxOffset = i;
	}

	cout << "location of value = " << sequentialSearch(x, 25, maxOffset) << endl; //displayvalues(x, maxOffset);
	return 0;
}

int sequentialSearch(int numbers[], int value, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (value <= numbers[i])
		{
			if (value == numbers[i])
				return i;
		}
		else
			return -1;
	}
}
