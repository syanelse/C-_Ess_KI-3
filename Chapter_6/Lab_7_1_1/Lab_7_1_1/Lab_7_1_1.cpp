// Lab_7_1_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

int main(void)
{

	int a = 5, b = 0, c = 0;
	cin >> b;

	try
	{
		if (b == 0)
			throw string("Dividing by zero!");

		c = a / b;
	}
	catch (string exeption)
	{
		cout << exeption << endl;
	}

	cout << c << endl;

	return 0;
}
