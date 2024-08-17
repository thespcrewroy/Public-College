/*--------------------------------------------------------------------*/
/*  
*   Swapnil Roy
    Program chapter3_33
    This program asks the user to enter in a character and determines
    if the character is an uppercase vowel.
*/

#include <iostream>

using namespace std;

int main()
{
    //Program description
    cout << "This program determines whether the character entered is an"
        " uppercase vowel" << endl;

    //Initialize variables
    char ch;

    //Ask the user to enter in a character
    cout << "Enter a character: ";
    cin >> ch;

    //Determine if the entered character is an uppercase vowel
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << ch << " is a vowel." << endl;
        break;
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout << ch << " is an uppercase vowel." << endl;
        break;
    default:
        cout << ch << " is not a vowel." << endl;
        break;
    }

    return 0;
}
