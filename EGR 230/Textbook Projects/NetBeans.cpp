/*------------------------------------------------------------------*/
/* Program chapter3_3                                               */
/*                                                                  */
/* This program performs currency conversion from dollars to        */
/* E => euros                                                       */
/* P => pesos                                                       */
/* S => pounds sterling                                             */

#include <stdlib.h>
#include <iostream>

using namespace std;

const double EUROC(0.7041), PESOC(11.6325), STERLINGC(0.6144);

int main(int argc, char** argv)
{
	double d, equivc;
	char code;

	//Display currency codes
	cout << "Euros: E" << endl;
	cout << "Pesos: P" << endl;
	cout << "Sterling: S" << endl << endl;


	//Prompt user
	cout << "Enter dollar amount: ";
	cin >> d;
	cout << "Enter currency code (capital letter): ";
	cin >> code;

	//Convert entered dollar amount
	switch (toupper(code))
	{
	case 'E':
		cout << "Converting dollars to euros...\n";
		equivc = d * EUROC;
		break;
	
	case 'P':
		cout << "Converting dollars to pesos...\n";
		equivc = d * PESOC;
		break;

	case 'S':
		cout << "Converting dollars to sterlings...\n";
		equivc = d * STERLINGC;
		break;

	default:
		cout << "Error...\n";
		cout << code << "not supported at this time";
	}
	cout << "Equivalent amount: " << equivc << endl;

	return (EXIT_SUCCESS);

}
