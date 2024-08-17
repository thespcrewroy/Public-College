/*----------------------------------------------------------------*/
/* Program chapter3_1 generates a truth table for the condition:  */
/* A && B || B && C                                               */

#include <iostream>

using namespace std;

int main()
{
	//Declare objects
	bool A(false), B(false), C(false);

	//Print table header
	cout << " TABLE 3.2\n A\tB\tC\t\tA && B || B && C" << endl;
	cout << "________________________________________" << endl;
	
	//Toggle None
	cout << A << '\t' << B << '\t' << C << "\t\t\t" << (A && B || B && C) << endl;

	//Toggle C
	C = !C;
	cout << A << '\t' << B << '\t' << C << "\t\t\t" << (A && B || B && C) << endl;

	//Toggle B and C
	B = !B;
	C = !C;
	cout << A << '\t' << B << '\t' << C << "\t\t\t" << (A && B || B && C) << endl;

	//Toggle C
	C = !C;
	cout << A << '\t' << B << '\t' << C << "\t\t\t" << (A && B || B && C) << endl;

	//Toggle A, B, and C
	A = !A;
	B = !B;
	C = !C;
	cout << A << '\t' << B << '\t' << C << "\t\t\t" << (A && B || B && C) << endl;

	//Toggle C
	C = !C;
	cout << A << '\t' << B << '\t' << C << "\t\t\t" << (A && B || B && C) << endl;

	//Toggle B and C
	B = !B;
	C = !C;
	cout << A << '\t' << B << '\t' << C << "\t\t\t" << (A && B || B && C) << endl;

	//Toggle C
	C = !C;
	cout << A << '\t' << B << '\t' << C << "\t\t\t" << (A && B || B && C) << endl;

	return 0;
}
