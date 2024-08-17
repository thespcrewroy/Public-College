#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int nfact = 1, n, number;
	cout << "Enter a positive integer ";
	cin >> n;
	number = n;
	while (n > 1)
	{
		nfact = nfact * n;
		n--;
		cout << nfact << endl;
	}
	cout << number << "! = " << nfact << endl;
	system("pause");
	return 0;

}
