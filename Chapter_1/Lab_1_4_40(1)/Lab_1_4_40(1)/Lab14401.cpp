// Lab14401.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main(void) 
{
	float pi = 3.14159265359;
	float x, y;
	cout << "Enter value for x: ";
	cin >> x;
	float sqx = x*x, sqPi = pi*pi;

	y = sqx / (sqPi *(sqx + 0.5)) * (1 + (sqx / (sqPi*((sqx - 0.5)*(sqx - 0.5)))));
	cout << "y = " << y;
	return 0;
}

