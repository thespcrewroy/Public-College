/*--------------------------------------------------------------------*/
/*  Problem chapter6_23                                               */
/*  Author: Swapnil Roy                                               */
/*  This program simulates tossing an "unfair" coin.                  */
/*  The user enters the number of tosses.                             */


#include <iostream>		//required for using basic functions
#include <random>		//required for using 'rand' function
#include "time.h"		//required for ensuring that the sequence of pseudorandom numbers generated will be different each time the program is run
#include <iomanip>		//required for formatting

using namespace std;

int rand_int(int, int);				////This function generates a random double value between a and b.

int main()
{
	//Program Description
	cout << "This program simulates tossing a coin that lands with heads "
		"60 percent of the time\n" << endl;

	//Declare and initialize objects
	int tosses, tails = 0, heads = 0;

	//Promp the user to enter the number of tosses
	cout << "Enter the number of tosses: ";
	cin >> tosses;

	srand(time(NULL));

	for (int i = 1; i <= tosses; i++)
	{
		if (rand_int(0, 1) <= 0.4)
		{
			tails++;
		}
		else
		{
			heads++;
		}
	}

	cout << fixed << setprecision(1);
	cout << "percentage of tails = " << (double)tails / tosses * 100 << "%" << endl;
	cout << "percentage of heads = " << (double)heads / tosses * 100 << "%" << endl;
	return 0;
}

int rand_int(int a, int b)
{

	return rand() % (b - a + 1) + a;
}



