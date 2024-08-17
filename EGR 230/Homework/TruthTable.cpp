/*-----------------------------------------------------------------------------*/
/*  Problem chapter4_32                                                        */
/*  Author: Swapnil Roy												           */
/*	generates a truth table for the condition:						           */
/*  A && B || B && C using nested for loops                                    */

#include <iostream>

using namespace std;

int main()
{

	//Program Description
	cout << "This program generates a truth table for A && B || B && C\n" << endl;

	//Declare and initialize objects
	bool A(false), B(false), C(false);
	bool tautology(true);				//assume true
	bool condition = (A && B || B && C);

	//Print table header
	cout << " TABLE 3.2\n\n A\tB\tC\t\tA && B || B && C" << endl;
	cout << "---------------------------------------------------" << endl;
	cout << A << '\t' << B << '\t' << C << "\t\t\t" << (A && B || B && C) << endl;

	//Print truth table
	for (int i = 1; i <= 2; ++i)					//base 2 - most significant
	{
		for (int j = 1; j <= 2; ++j)			//base 2 - middle bits
		{
			for (int k = 1; k <= 2; ++k)	//base 2 - least significant bits
			{
				condition = (A && B || B && C);
				cout << A << '\t' << B << '\t' << C << "\t\t\t" << condition << endl;

				if (!condition) tautology = false;
				C = !C; //Toggle C
			}

			B = !B; //Toggle B
		}

		A = !A; //Toggle A
	}

	return 0;
	
}
