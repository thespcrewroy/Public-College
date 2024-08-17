// Roy_CH6_problem_23.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <random>
#include "time.h"
#include <iomanip>

using namespace std;

int rand_int(int, int);
double rand_float(double, double);


int main()
{
	int numberOfTosses, numberOfTails=0, numberOfHeads=0;
	cout << "Enter the number of tosses: ";
	cin >> numberOfTosses;
	srand(time(NULL));
	for (int i = 1; i <= numberOfTosses; i++)
	{
		//if (rand_int(0, 9) , 4)
		if (rand_int(0, 1) < 0.4)	// "0.4" means 40% tails and 60% heads ratio
			numberOfTails++;
		else
			numberOfHeads++;
	}
	cout << fixed << setprecision(1);
	cout << "percentage of tails = " << (double) numberOfTails/numberOfTosses * 100 << "%" << endl;
	cout << "percentage of heads = " << (double) numberOfHeads/numberOfTosses * 100 << "%" << endl;
    return 0;
}

int rand_int(int a, int b)
{
	return rand() % (b - a + 1) + a;
}


//This function generates a random double value between a and b.
double rand_float(double a, double b)
{
	return ((double)rand() / RAND_MAX) * (b - a) + a;
}

//comment out srand when debugging so that there is enough consistency
//identify a solution

//add comments before submitting homework
