/*-----------------------------------------------------------*/
/* Program 5_1												 */
/* This program reads data pairs from the the file 		     */
/* sensor.txt and writes valid data pairs to the file		 */
/* checkedSensor.txt. Valid data pairs may not be negative.  */
/* Invalid data is written to standard error(cerr)			 */

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	//Define file streams for input and output
	ifstream fileInput{ "sensor.txt" };
	ofstream fileOutput{ "checkedSensor.txt" };

	//Check for possible errors
	if (fileInput.fail())
	{
		cerr << "could not open file sensor.txt\n";
		exit(1);
	}

	if (fileOutput.fail())
	{
		cerr << "cout not open output file checkedSensor.txt\n";
		exit(1);
	}

	//Declare objects
	double t, motion;
	int count(0);

	fileInput >> t >> motion;
	
	while (!fileInput.eof())
	{
		++count;

		//Write valid data to output file
		if (t >= 0 && motion >= 0)
		{
			fileOutput << t << " " << motion << endl;
		}
		else
		{
			cerr << "Bad data encountered on a line " << count << endl
				<< t << " " << motion << endl;
		}

		//Input next data pair
		fileInput >> t >> motion;
	}

	//close all files
	fileInput.close();
	fileOutput.close();

	return 0;
}
