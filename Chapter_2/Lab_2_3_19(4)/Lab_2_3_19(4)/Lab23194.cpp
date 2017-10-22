// Lab23194.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	double exp = 1;
	cout << "Input power: -";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		exp /= 2;

	}
	cout.precision(20);
	cout << "2^(-" << n << ") = " << exp << endl;
	return 0;
}