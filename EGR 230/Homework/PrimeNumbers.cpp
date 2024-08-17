// Roy_CH6_problem_18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void primeGen(int);


int main()
{
	int n;
	cout << "Display all prime numbers up to and including n" << endl;
	cout << "Enter an n: ";
	cin >> n;
	primeGen(n);
    return 0;
}

void primeGen(int num)
{
	for (int j = 2; j <= num; j++)
	{
		bool isPrime = true;
		for (int i = 2; i < j; i++)
		{
			if (j%i == 0)
			{
				isPrime = false;
				break;
			}
		}
		if (isPrime)
		{
			cout << "num= " << j << " is prime" << endl;
		}
		else
		{
			cout << "num= " << j << " is not prime" << endl;
		}
	}
}
