/*-------------------------------------------------------------------------*/
/*  Program chapter6_43                                                    */
/*  Author: Swapnil Roy                                                    */
/*  This program estimates the area under a given curve                    */
/*  using trapezoids with equal bases.                                     */

#include <iostream>
#include <cmath>

using namespace std;

double integrate(double a, double b, int n);
double f(double x);

int main()
{
	//Program description
	cout << "This program integrates f(x) = 3x-2x^2\n" << endl;
	
	//Declare and initialize objects
	int num_trapezoids;
	double a, b, area;

	//Prompt user
	cout << "Enter the range (a and b): ";
	cin >> a >> b;
	cout << "\nEnter the number of trapezoids: ";
	cin >> num_trapezoids;

	//Estimate area under the curve of 4e^-x
	area = integrate(a, b, num_trapezoids);

	//Print result
	cout << "Using " << num_trapezoids << " trapezoids, the estimated area is "
		<< area << endl;

	return 0;
}

double integrate(double a, double b, int n)
{
	//Delcare and initialize objects
	double sum = 0, x, base, area;

	//Calculate the area
	base = (b - a) / n;
	for (int k = 2; k <= n; k++)
	{
		x = a + base * (k - 1);
		sum = sum + f(x);
	}
	area = 0.5 * base * (f(a) + 2 * sum + f(b));
	return area;
}

double f(double x)
{
	//Perform integral calculation
	return (3 * x - 2 * pow(x, 2));
}
