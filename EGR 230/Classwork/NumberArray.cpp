#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;

void displayValues(int[], int);

int main()
{
	int x[100] = { 5,6,7 }; //creates 100 integer size block of memory
	char c[] = { 'h','e','1','p','\0' };
	char c1[] = "help";

	displayValues(x, 3);
	return 0;

}

void displayValues(int numbers[], int size)
{
	for (int i = 0; i < size; i++)
		cout << numbers[1] << endl;
}
