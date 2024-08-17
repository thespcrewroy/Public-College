/*  Problem chapter5_20                                                  */
/*  Author: Swapnil Roy                                                  */
/*  This program assumes that the file rocket1.dat contains an           */
/*  initial line that contains the number of actual datalines            */
/*  that follows.  The program reads these data and determines           */
/*  the time at which the rocket begins falling back to earth.           */
/*  Data format is: time, altitude, velocity, accelearation              */

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

const string FILENAME = "rocket1.dat";

int main()
{
	//Program Description
	cout << "This program reads the data from rocket1.dat and determines"
		" at which time the rocket begins to fall back to Earth\n" << endl;

	//Define file streams for input and output
	ifstream fileInput;
	ofstream fileOutput;

	//Open the file
	fileInput.open(FILENAME.c_str());

	//Check for possible errors
	if (fileInput.fail())
	{
		cerr << "could not open file" << FILENAME << endl;
		exit (1);
	}
	
	//Declare objects
	int number_of_items;
	double a, y = 0, yo = 0.0, to, t = 0, v;


	//Check if there is data in the file
	if (!(fileInput >> number_of_items || number_of_items == 0))
	{
		cout << FILENAME << " has no valid data" << endl;
		exit(1);
	}

	//Computation
	while (y >= yo && !fileInput.eof())
	{
		yo = y;
		to = t;
		fileInput >> t >> y >> v >> a;
	}

	//Print time when rocket starts to fall
	if ( y < yo)
		cout << "Time at which the rocket begins to fall is between "
		<< to << " seconds and " << t << " seconds \n";
	else
		cout << "No decrease in altitude detected in data file. \n";




}
