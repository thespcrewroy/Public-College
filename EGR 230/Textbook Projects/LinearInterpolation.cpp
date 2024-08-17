/*-------------------------------------------------------------*/
/* Program chapter3_2                                          */
/* This program uses linear interpolation to compute the       */
/* freezing temperature of seawater.                           */

#include <iostream>
#include <iomanip> //Required for fixed, setprecision()

using namespace std;

int main()
{
	//Declare objects
	double a, f_a, b, f_b, c, f_c;

	//Prompt user
	cout << "Use ppt for salinity vales. ";
	cout << "Use degrees (F) for temperature" << endl << endl;

	//Get user input
	cout << "Enter first salinity and freezing temperature:\n ";
		cout << "a: ";
		cin >> a;
		cout << "f(a): ";
		cin >> f_a;
	cout << "Enter second salinity and freezing temperature:\n ";
		cout << "c: ";
		cin >> c;
		cout << "f(c): ";
		cin >> f_c;
	cout << "Enter new salinity\n ";
		cout << "b: ";
		cin >> b;
	

	//Apply squeeze theorem (linear interpolation)
	if (!(a < b && b < c))
	{
		cout << "Invalid data: " << a << "," << b << "," << c 
			<< "," << endl;
	}
	else
	{
		//Use linear interpolation to compute
		f_b = f_a + (b - a) / (c - a) * (f_c - f_a);
		cout << "New freezing temperature: " << fixed
			<< setprecision(1) << f_b << endl;
	}

	return 0;
}
