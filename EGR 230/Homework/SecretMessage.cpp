/*-------------------------------------------------------------------------------------*
*	Author: Swapnil Roy																   *
*	This program to reads a data file and determines the secret message stored by the  *
*   sequence of first letters of the words.											   */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() 
{
    //Program Descritpion
    cout << "This program decrypts a secret message stored by the sequence of the first "
        "letters of the words\n\n";

    //Initialize variables
    string filename = "data.txt";
    string message = "";
    string word;

    ifstream fileInput(filename);

    //Display message if file fails to open
    if (fileInput.fail()) {
        cerr << "Unable to open file " << filename << endl;
        exit(1);
    }

    //Read the file and decode the message
    while (fileInput >> word) {
        message += word[0];
    }

    //Print out the secret message
    cout << "The secret message is: " << message << endl;

    //Close files and exit program
    fileInput.close();

    return 0;
}
