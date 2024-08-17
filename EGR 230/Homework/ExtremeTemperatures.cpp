/*--------------------------------------------------------------------*/
/*  Problem chapter5_30                                               */
/*  Author: Swapnil Roy                                               */
/*  This program determines the number of days in each of four        */
/*  temperature categories for the days of January 1991.              */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int DATA_PER_DAY = 32;
const string FILENAME = "jan91.dat";
const int TEMP_DATA = 3;

int main()
{
	//Program Description
	cout << "This program determines the number of days that had"
		" temperatures (degrees F) in the following categories: below 0, "
		"0-32, 33-75, 75+.\n" << endl;

	//Generate the file
	ifstream fileInput;

	//Open Input File
	fileInput.open(FILENAME.c_str());
	
	//Account for file opening error
	if (fileInput.fail())
	{
		cerr << FILENAME << "failed to open" << endl;
		exit(1);
	}

	//Declare and initialize objects
	int i, below0(0), from0to32(0), from33to75(0), above75(0);
	double mintemp, maxtemp, dummy;

	//Computation
	while (fileInput >> dummy >> maxtemp >> mintemp)
	{
		if (mintemp < 0) 
		{
			below0++;

			if (maxtemp > 75) 
			{
				from0to32++;	//Since the temperature went through these ranges
				from33to75++;
				above75++;
			}
			else if (maxtemp > 33) 
			{
				from0to32++;	//Since the temperature went through these ranges
				from33to75++;
			}
			else if (maxtemp > 0) 
			{
				from0to32++; //Since the temperature went through these ranges
			}
		}
		else if (mintemp <= 32) 
		{
			from0to32++;

			if (maxtemp > 75)
			{
	
				from33to75++; //Since the temperature went through these ranges
				above75++;
			}
			else if (maxtemp > 33)
			{
				from33to75++;	//Since the temperature went through these ranges
	
			}
			
		}
		else if (mintemp <= 75) 
		{
			from33to75++;

			if (maxtemp > 75)
			{
				above75++;
			}
			else (maxtemp > 33);
			{
				above75++;
			}
		}
		
		/*  Skip the rest of the line of data.  */
		for (i = TEMP_DATA + 1; i <= DATA_PER_DAY; i++)
			fileInput >> dummy;
	}

	//Print results
	cout << "January of 1991" << endl;
	cout << "Temperature Ranges \t Number of Days " << endl;
	cout << "Below 0 \t \t\t" << below0 << endl;
	cout << "0 to 32 \t \t\t" << from0to32 << endl;
	cout << "33 to 75\t \t\t" << from33to75 << endl;
	cout << "Above 75 \t \t\t" << above75 << endl;

	/*  Close file and exit program.  */
	fileInput.close();
	return 0;

}
