#include "stdafx.h"
#include <iostream>
#include <iomanip>


using namespace std;

int average(int[], int size);

int main()
{
	int numberArray[] = { 6,4,9,22,5 };
	cout << average(numberArray, 5) << endl;
	return 0;
}

int average(int arr[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum = sum + arr[i];	//sum the values

	return sum / size;		//return the average in integer form
}

// determine min, max, perform other statistical calcululation with given formula (for the exam)
