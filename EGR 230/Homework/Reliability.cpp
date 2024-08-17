/*  Problem chapter6_28                                               */
/*  Author: Swapnil Roy                                               */
/*  This program simulates the design in Figure 6-17 using a          */
/*  component reliability of 0.8 for component 1, 0.85 for            */
/*  component 2 and 0.95 for component 3.  The estimate of the        */
/*  reliability is computed using 5000 simulations.                   */
/*  (The analytical reliability of this system is 0.794.)             */

#include <iostream>
#include <random>
#include "time.h"

using namespace std;

const double RELICOMP1 = 0.8;
const double RELICOMP2 = 0.85;
const double RELICOMP3 = 0.95;

double rand_float(double a, double b);

int main()
{
	//Program Description
	cout << "This program computes the estimate of 5000 simulations"
		"accross 3 components with varying probabilities of success\n\n";

	//Declare and initialize variables
	int simulations = 0, success = 0;
	double com1, com2, com3;

	srand(time(NULL));

	//Run simulations
	for (simulations = 0; simulations <= 5000; simulations++)
	{
		if ((rand_float(0, 1) <= RELICOMP1) && (rand_float(0, 1) <= RELICOMP2 || rand_float(0, 1) <= RELICOMP3))
		{
			success++;
		}
	}

	//Print results
	cout << "Simulation reliability for 5000 trials: " << (double)success / 5000 * 100 << endl;

	return 0;
}

double rand_float(double a, double b)
{
	return ((double)rand() / RAND_MAX) * (b - a) + a;
}
