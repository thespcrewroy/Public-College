/*--------------------------------------------------------------------*/
/*  Problem chapter5_24                                               */
/*  Author: Swapnil Roy                                               */
/*  This program reads a data file named suture.dat that contains     */
/*  information on batches of sutures that have been rejected during  */
/*  a 1-week period.  This program generates a report that computes   */
/*  the percent of the batches rejected due to temperature, the       */
/*  percent rejected due to pressure, and the percent rejected due    */
/*  to dwell time.                                                    */                                                  

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const double MIN_TEMP = 150, MAX_TEMP = 170;
const double MIN_PRESS = 60, MAX_PRESS = 70;
const double MIN_DWELL = 2, MAX_DWELL = 2.5;
const string FILENAME = "suture.dat";

int main()
{
	//Program Description
	cout << "This program determines the percentages of people in a certain"
		" batch that were rejected due to either pressure, temperature, or "
		"dwell time\n" << endl;

	//Define the strem
	ifstream fileInput;

	//Open file
	fileInput.open(FILENAME.c_str());

	//Failsafe
	if (fileInput.fail())
	{
		cerr << FILENAME << " failed to open" << endl;
		exit(1);
	}

	//Define objects
	int temp_rejects = 0, press_rejects = 0, dwell_rejects = 0,
		batch_rejects = 0, batch;
	double temp_percentrejected, press_percentrejected, dwell_percentrejected,
		temp, press, dwell;

	//Record total number of rejected batches
	while (fileInput >> batch >> temp >> press >> dwell)
	{
		if ((temp < MIN_TEMP) || (temp > MAX_TEMP))
			temp_rejects++;
		if ((press < MIN_PRESS) || (press > MAX_PRESS))
			press_rejects++;
		if ((dwell < MIN_DWELL) || (dwell > MAX_DWELL))
			dwell_rejects++;
		batch_rejects++;
	}

	//Calculute the percentages
	temp_percentrejected = (double)temp_rejects / (double)batch_rejects;
	press_percentrejected = (double)press_rejects / (double)batch_rejects;
	dwell_percentrejected = (double)dwell_rejects / (double)batch_rejects;

	//Display percentages
	cout << "Category" << "      " << "Percent Rejected" << endl;
	cout << "------------------------------------------" << endl;
	cout << "Temperature: " << " " << temp_percentrejected * 100 << "%" << endl;
	cout << "Pressure: " << "    " << press_percentrejected * 100 << "%" << endl;
	cout << "Dwell Time: " << "  " << dwell_percentrejected * 100 << "%" << endl;

	cout << "\nTotal Number of Batches: " << batch_rejects << endl;

	return 0;
}
