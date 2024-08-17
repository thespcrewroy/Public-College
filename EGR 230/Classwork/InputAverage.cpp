/*-----------------------------------------------------------------------------------------------------------*/
/* Date Modified: April 10, 2023                                                                             */
/* Author: Swapnil Roy                                                                                       */
/* This program calculates the average of seperate rows from file "Input.txt" and then displays them         */

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    //Program description
	cout << "This program calculates the average of three integers in the same row from file Input.txt\n" << endl;

	//Initialize objects
	ifstream fileInput;
	ofstream fileOutput;
	double avg, n1, sum;

	//Open both files
	fileOutput.open("Results.txt");
	fileInput.open("Input.txt");

	//Error if Input.txt cannot be opened
	if (fileInput.fail())
	{
		cerr << "File open error" << endl;
		return(-1);
	}

	//Calculate the average
	while (!fileInput.eof())
	{
		sum = 0;
		for (int i = 1; i <= 3; i++)
		{
			fileInput >> n1;
			sum = sum + n1;
		}
		
		avg = sum / 3;
		cout << fixed << setprecision(1) << avg << endl;
		fileOutput << fixed << setprecision(1) << avg << endl;
	}

	//Close files and exit program
	fileOutput.close();
	fileInput.close();
	return 0;
}
