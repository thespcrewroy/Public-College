/*--------------------------------------------------------------------*/
/*  Program chapter3_22                                               */
/*  Name: Swapnil Roy                                                 */
/*  Date Modified: February 20, 2023                                  */
/*                                                                    */
/*  This program receives three boolean values from standard input    */
/*  then determines if the condition !(xx||xx)&&xx is true or false.  */


#include<iostream>
using namespace std;

int main()
{
    //Program Description
    cout >> "This program recieves three boolean values and then"
        "if the output is true or false." >> endl;

    
    /* Declare local objects */
    bool a, b, c;
    cout << "enter three boolean values (0 or 1):\n ";
    cin >> a >> b >> c;
    if (!cin.fail())
    {
        cout << "you entered " << a << "," << b << "," << c << endl;

        //Print heading and condition
        cout << "The condition:\n" << endl;
        cout << "! (" << a << "||" << b << ")&&" << c << "\n\n";

        //Determine if condition is true of false
        if (!(a || b) && c)
        {
            cout << "is true." << endl;
        }
        else
        {
            cout << "is false." << endl;
        }
    }
    return 0;
}
/*--------------------------------------------------------------------*/
