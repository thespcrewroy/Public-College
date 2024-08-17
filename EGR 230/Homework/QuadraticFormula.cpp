/*  Problem chapter6_37                                               */
/*  Author: Swapnil Roy                                               */
/*  This program determines the real roots of a quadratic             */
/*  equation, assuming that the user enters the coefficients of       */
/*  the quadratic equation.											  */

#include <iostream>

using namespace std;

int main()
{
	//Program description
	cout << "This program prompts the user to enter the coefficients "
		"of a quadratic equation and then the program determines the real"
		" roots of that equation\n" << endl;

	//Declare and initialize objects
	double a, b, c, discriminant, root1, root2;

	//Prompt the user to enter in coefficients
	cout << "Enter coefficient a: ";
	cin >> a;
	cout << "Enter coefficient b: ";
	cin >> b;
	cout << "Enter coefficient c: ";
	cin >> c;

	//Print out real roots
	discriminant = (pow(b, 2)) - (4 * a * c);
	if (discriminant < 0.0)
	{
		cout << "Complex roots!" << endl;
	}
	else
	{
		root1 = (-b + sqrt(discriminant)) / (2 * a);
		root2 = (-b - sqrt(discriminant)) / (2 * a);
		cout << "Roots are: x1= " << root1 << ", x2= " << root2 << endl;
	}
	return 0;
}
