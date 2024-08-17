/*--------------------------------------------------------------------*/
/*  Problem chapter5_16                                               */
/*  Author: Swapnil Roy                                               */
/*  This program reads a file containing data values computed by      */
/*  an accounting software package.  While the file contains only     */
/*  numerical information, the values may contain embedded commas     */
/*  and dollar signs.  The program generates a new file that          */
/*  contains the values with the commas and dollar signs removed,     */
/*  and with a leading minus sign instead of parantheses.             */

#include <iostream>
#include <fstream>
#include <cctype>
#include <string>

using namespace std;

const char NEWLINE = '\n';
const char TAB = '\t';

int main()
{
	//Program Description
	cout << "This program removes dollar signs and commas and changes"
		"paranthesis to negative symbols from moneyin.txt" << endl;

	//Define file streams for input and output
	ifstream fileInput;
	ofstream fileOutput;
	string moneyin, moneyout;

	//Prompt user to enter the file name and open the file they entered
	cout << "Enter the name of the file you want to change: ";
	cin >> moneyin;
	fileInput.open(moneyin.c_str());

	//Check for possible errors
	if (fileInput.fail())
	{
		cerr << "could not open file" << moneyin << endl;
		exit(1);
	}

	if (fileOutput.fail())
	{
		cerr << "could not open output file" << moneyout << endl;
		exit(1);
	}

	//Open new file
	fileOutput.open(moneyout.c_str());

	//Declare objects
	char c;

	moneyout = "new" + moneyin;
	fileOutput.open(moneyout.c_str());

	//Assign each number to character 'c'
	fileInput.get(c);
	while (!fileInput.eof())
	{
		switch (c)
		{
		case ')':
		case '$':
		case ',':
			break;
		case '(':
			c = '-';
			/* fall thru */
		default:
			fileOutput << c;
			break;
		}
		fileInput.get(c);
	}

	//Close files and exit program
	fileOutput.close();
	fileInput.close();
	return 0;

}
