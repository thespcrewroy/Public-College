/*-------------------------------------------------------------------------------------*
*	Author: Swapnil Roy
*	This program uses the rand_float function developed in Chapter 5 to generate	   *
*	sequences of random floating-point values between 4 and 10. Then compare the	   *
*	computed mean and variance to the theoretical values computed. As you use more	   *	
*	and more random numbers, the computed values and the theoretical values should     *
*	become closer																	   */

#include <iostream>
#include <cmath>
#include <random>
#include <time.h>

using namespace std;

const double LOWER_BOUND = 4.0;
const double UPPER_BOUND = 10.0;

double rand_float(double, double);

double rand_float(double a, double b)
{
	return ((double)rand() / RAND_MAX) * (b - a) + a;
}

int main()
{
	//Program Description
	cout << "This program generates a sequence of random values between 4 and 10 and"
		" then compares the computed mean and valriance tothe theoretical values.\n\n";

	//Declare and initialize objects
	int numberOfValues;
	double sum = 0.0, sumsq = 0.0, x;

	//Prompt user to enter the number of values
	cout << "Enter the number of random values between 4 and 10: ";
	cin >> numberOfValues;

	//Generate a sequence of random values
	for (int i = 0; i < numberOfValues; i++)
	{
		x = rand_float(LOWER_BOUND, UPPER_BOUND);
		sum += x;
		sumsq += x * x;
	}
	
	// Compute the mean and variance
	double mean = sum / numberOfValues;
	double var = sumsq / numberOfValues - mean * mean;

	//Compute the theoretical mean and variance
	double mu = (LOWER_BOUND + UPPER_BOUND) / 2.0;
	double sigma2 = (UPPER_BOUND - LOWER_BOUND) * (UPPER_BOUND - LOWER_BOUND) / 12.0;

	// Print the results
	std::cout << "\nComputed mean: " << mean << std::endl;
	std::cout << "Theoretical mean: " << mu << std::endl;
	std::cout << "Computed variance: " << var << std::endl;
	std::cout << "Theoretical variance: " << sigma2 << std::endl;

	return 0;
}
