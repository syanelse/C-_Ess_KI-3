// Lab_2_3_19(7).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n; unsigned long long a = 1, b = 1, c = 1;
	cout << "Input the Fibonacci number: ";
	cin >> n;
	for (int i = 2; i < n; i++)
	{
		a = b;
		b = c;
		c = a + b;
	}
	cout << "F(" << n << ")= " << c << endl;;
	return 0;
}
