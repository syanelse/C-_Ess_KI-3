// Lab23191.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int c0, step = 0;
	cout << "Input number: ";
	cin >> c0;
	while (c0 != 1)
	{
		if (c0 % 2 == 0)
		{
			c0 /= 2;
		}
		else
		{
			c0 = 3 * c0 + 1;
		}
		step++;
		cout << c0 << endl;
	}
	cout << "Steps: " << step;
	return 0;
}