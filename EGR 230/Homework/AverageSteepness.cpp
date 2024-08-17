/*-------------------------------------------------------------------------------------*
*	Chapter 7: Problem 44															   *
*	This program calculates the average steepness given an input file.				   *
*	The program also determines and print what percentage of the time the steepness	   *
*	exceeded the average. The input file can be of any length.                         */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int MAX_LINES = 10000; // Maximum number of lines in file

int main() {
   
    //Program Description
    cout << "This program calculates teh average steepness adn the percentage of tume"
        " the steepness esceeded the average from an input file.\n\n";

    //Declare and initialize objects
    int year[MAX_LINES], month[MAX_LINES], day[MAX_LINES], hour[MAX_LINES], minute[MAX_LINES];
    double wh[MAX_LINES], wl[MAX_LINES];
    int num_lines = 0, num_steepness_exceeded = 0;
    double total_steepness = 0.0;

    //Include file link
    string filename;
    cout << "Enter the name of the data file: ";
    cin >> filename;

    //Change file name
    ifstream fileInput(filename);

    //Error message if file fails to open
    if (fileInput.fail()) 
    {
        cerr << "Error: could not open file \"" << filename << "\"\n";
        exit(1);
    }

    //Read the header line and ignore it
    string header;
    getline(fileInput, header);

    // Read the data lines into arrays
    while (fileInput >> year[num_lines] >> month[num_lines] >> day[num_lines] >> hour[num_lines]
        >> minute[num_lines] >> wh[num_lines] >> wl[num_lines]) 
    {
        double steepness = wh[num_lines] / wl[num_lines];
        total_steepness += steepness;
        num_lines++;

        if (steepness > 1.0 / 7) 
        {
            num_steepness_exceeded++;
        }
    }

    if (num_lines == 0) {
        cout << "Error: no data found in file\n";
        return 1;
    }

    //Calculate average steepness and percentage of time that exceeded
    double avg_steepness = total_steepness / num_lines;
    double pct_steepness_exceeded = 100.0 * num_steepness_exceeded / num_lines;

    //Print out calculated values
    cout << "\nAverage steepness: " << avg_steepness << "\n";
    cout << "Percentage of time steepness exceeded the average: " << pct_steepness_exceeded << "%\n";

    return 0;
}
