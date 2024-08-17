/* 
Program chapter 2_4

	This program computes the area of a circle.
	Results are displayed with 2 digits to the right of the decimal point. */

#include <iostream>	//Required for cout, setf(), and precision().
#include <cmath>	//Required for acos().
using namespace std;

const double PI = acos(-1.0);

int main()
{
	//Declare and initialize objects
	double radius(10), area;
	area = PI * radius * radius;

	//Call the setf member function using dot operator.
	cout.setf(ios::fixed);	//fixed form(xx.xx).

	//Call the precision member function using dot oeprator.
	cout.precision(2);	//Display two digits to the right of the decimal.

	cout << "The radius of the circle is: " << radius << " centimeters\n The area is " << area << " square centimeters\n";

	//exit program
	return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
