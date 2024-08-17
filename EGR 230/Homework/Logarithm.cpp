// Roy_CH2_problem_41.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*--------------------------------------------------------------------*/
/*  Problem chapter2_41                                               */
/*                                                                    */
/*  This program reads in a positive number and then computes         */
/*  the logarithm of that value to the base 2.                        */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    /*  Declare variables.  */
    double  x, answer;

    /*  Enter a positive number.  */
    cout << "Enter a positive number:  ";
    cin >> x;

    /*  Compute the logarithm to base 2.  */
    answer = log(x) / log(2.0);

    /*  Print the answer.  */
    cout << "The logarithm of " << x << " to the base 2 is " << answer
        << endl;

    /*  Exit program.  */
    return 0;
}
/*--------------------------------------------------------------------*/
