//*--------------------------------------------------------------------*/
/*  Problem chapter5_14                                                */
/*                                                                     */
/*  This program reads a file that contains only integers, but         */
/*  some of the integers have embedded commas, as in 145,020.  The     */
/*  program copies the information to a new file, removing any         */
/*  commas from the information.                                       */

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cctype>
#include <string>

using namespace std;

const char NEWLINE = '\n';
const char TAB = '\n';

int main()
{
	//Declare variables
	char c;

	ofstream newfile;
	ifstream oldfile;
	string inname, outname;

	//Prompt user for file names and open file for reading and writing respectively
	cout << "Enter the name of the input file: ";
	cin >> inname;

	oldfile.open(inname.c str());
	
	if (oldfile.fail())
	{
		cerr << "error opening file " << inname << endl;
		exit(1);
	}

	outname = "new" + inname;
	newfile.open(outname.c str())

	//Look for commas, and write the data to the new file
	c = oldfile.get();
	while (!oldfile.eof())
	{
		if (c != ',')
		newfile << c;
		c = oldfile.get();
	}

	//Close files and exit program
	newfile.close();
	oldfile.close();
	return 0;
}
