// Lab_4_2_7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;
bool isClose(double a, double b, double tolerance)
{
	if (fabs(a - b) <= tolerance) return true;
	else
		return false;
}
int main(void)
{
	if (0.3 == 3 * 0.1)
	{
		cout << "The numbers are equal";
	}
	else
	{
		cout << "The numbers are not equal";
	}
	cout << endl;
	if (isClose(0.3, 3 * 0.1, 0.00000001))
	{
		cout << "The numbers are close enough";
	}
	else
	{
		cout << "The numbers are not close enough";
	}
	cout << endl;
	if (isClose(3 * 0.1, 0.3, 0.00000001))
	{
		cout << "The numbers are still close enough";
	}
	else
	{
		cout << "The numbers are not close enough";
	}
	cout << endl;
	if (isClose(3 * 0.1, 0.31, 0.00000001))
	{
		cout << "The numbers are still close enough";
	}
	else
	{
		cout << "The numbers are not close enough";
	}
	cout << endl;
	return 0;
}
