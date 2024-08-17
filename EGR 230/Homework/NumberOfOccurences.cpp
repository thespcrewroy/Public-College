/*-------------------------------------------------------------------------------------*
*	Program_CH7_problem_26															   *
*	Author: Swapnil Roy                                                                *
*	This program reads a data file and determines the number of occurrences of each	   *
*	of the characters in the file. Then, prints the characters and the number of times *
*	that they occurred. If a character does not occur, do not print it				   */

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    //Program Description
    cout << "Write a program that reads a data file and determines the frequency of"
        " each character in a data file.\n\n";

    //Declare and initialize objects
    int char_count[256] = { 0 }; // Initialize an array to store the count of each character
    char c;

    // Open the input file
    ifstream input_file ("input.txt");

    // Read the input file character by character and update the count of each character
    while (input_file.get(c)) {
        char_count[c]++;
    }

    // Print the characters and their respective occurrence count
    for (int i = 0; i < 256; i++) {
        if (char_count[i] > 0) {
            cout << (char)i << ": " << char_count[i] << endl;
        }
    }

    return 0;
}
