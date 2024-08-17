/*--------------------------------------------------------------------*/
/*  Name: Swapnil Roy
	Program chapter3_24
	This program prompts user to enter two numbers and then display the
	two numbers. If the first number is greater than the second, 
	the program will display their difference as well.
*/

#include <iostream>

using namespace std;

int main()
{
	//Program description
	cout << "This program displays two numbers the user entered, and also"
		" finds the difference between them if the first number is greater"
		" than the second" << endl;

	//intiitalize variables
	float n1, n2;

	//Prompt user to enter two numbers
	cout << "Enter 2 numbers" << endl;
	cout << "Number 1: ";
	cin >> n1;
	cout << "Number 2: ";
	cin >> n2;
	cout << endl << endl;

	//Display numbers to standard output
	cout << "Numbers entered: " << n1 << " , " << n2 << endl;

	//Dispaly n1-n2 if n1>n2
	if (n1 > n2)
	{
		float diff = n1 - n2;
		cout << n1 << " - " << n2 << " = " << (double) diff << endl;
	}

		return 0;
}
