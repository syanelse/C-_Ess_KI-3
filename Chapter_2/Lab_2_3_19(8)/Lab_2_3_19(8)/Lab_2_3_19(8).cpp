// Lab_2_3_19(8).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int n;
	unsigned long long fac = 1;
	cout << "n = ";
	cin >> n;
	for (int i = 1; i < n; i++)
	{
		fac *= i + 1;
	}
	cout << "n! = " << fac << endl;
	return 0;
}

