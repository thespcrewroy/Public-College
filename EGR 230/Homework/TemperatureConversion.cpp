/*--------------------------------------------------------------------*/
/*  Problem 2_25													  */
/*  Name: Swapnil Roy                                                 */
/*  Date Modified: February 2, 2023									  */
/*  This program converts degrees Fahrenheit to degrees Rankin.       */

#include <iostream>
using namespace std;

int main()
{
	/*  Declare variables.  */
	double degrees_F, degrees_R;

	/*  Enter temperture in degrees Fahrenheit.  */
	cout << "Enter the temperature in degrees Fahrenheit:  ";
	cin >> degrees_F;

	/*  Compute the equivalent temperature in degrees Rankin  */
	degrees_R = degrees_F + 459.67;

	/*  Print the temperatures.  */
	cout << degrees_F << " degrees Fahrenheit = " << degrees_R << " degrees Rankin" << endl;

	/*  Exit program.  */
	return 0;
}
/*--------------------------------------------------------------------*/

/*--------------------------------------------------------------------*/
