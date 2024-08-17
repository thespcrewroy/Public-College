/*--------------------------------------------------------------------*/
/*  Problem 2_35                                                      */
/*  Name: Swapnil Roy                                                 */
/*  Date Modified: February 12, 2023                                  */
/*  This program computes the volume of a sphere of radius r.         */

#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.141593;

int main()
{
    /*  Declare variables.  */
    double r, volume;

    /*  Enter the radius of the sphere.  */
    cout << "Enter the radius of the sphere: ";
    cin >> r;

    /*  Compute the volume of the sphere.  */
    volume = (4.0 / 3) * PI * pow(r, 3);

    /*  Print the value of the volume.  */
    cout << "The volume of a sphere with radius " << r
        << " is " << volume << endl;

    /*  Exit program.  */
    return 0;
}
/*--------------------------------------------------------------------*/
