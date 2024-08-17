/*--------------------------------------------------------------------*/
/*  Swapnil Roy
  This program prompts the user to enter two numbers and a character that 
  represents an arithmetic operator. 
   => multiply                                       
   + => addition                                       
   - => subtraction                                    
   / => division          

  The input values are printed followed by the result of the
  operation or an error message if the character is not one
  of the 4 defined operator.  */

#include <iostream>

using namespace std;

int main()
{
    //Program description
    cout << "This program performs a calculation based off two numbers"
        "the user enters and the operation the user selects" << endl <<
        endl;

    //Initialize variables
    double n1, n2;
    char op;

    //Prompt user to enter numbers
    cout << "Enter first number: ";
    cin >> n1;
    cout << "You entered " << n1 << endl << endl;
    cout << "Enter second number: ";
    cin >> n2;
    cout << "You entered " << n2 << endl << endl;

    //Prompt user to enter character operation
    cout << "Enter desired operation:(*,+,-,/): ";
    cin >> op;
    cout << "You entered " << op << endl << endl;
    
    //Perform the calculation
    switch (op)
    {
    case '*':
        cout << "Solution: " << n1 << " * " << n2 << " = " << (double)n1 * n2 
            << endl;
        break;
    case '+':
        cout << "Solution: " << n1 << " + " << n2 << " = " << (double)n1 + n2 
            << endl;
        break;
    case '-':
        cout << "Solution: " << n1 << " - " << n2 << " = " << (double)n1 - n2 
            << endl;
        break;
    case '/':
        cout << "Solution: " << n1 << " / " << n2 << " = " << (double)n1 / n2 
            << endl;
        break;
    default:
        cout << "invalid operator.." << endl;
        break;
    }
    return 0;
}
