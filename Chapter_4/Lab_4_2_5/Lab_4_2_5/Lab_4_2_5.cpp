// Lab_4_2_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	unsigned long long sum = 0;
	int n;
	cout << "N: ";
	cin >> n;
	if (n > 100000) { cout << "Too big number"; return 1; }
	for (int i = 0; i <= n; i++)
	{
		sum += i;
	}
	cout << "Sum: " << sum << endl;
	return 0;
}