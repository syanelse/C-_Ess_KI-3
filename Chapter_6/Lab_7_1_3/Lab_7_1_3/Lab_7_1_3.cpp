// Lab_7_1_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

int main(void)
{
	int a = 0, b = 0, c = 0;

	cin >> a;
	cin >> b;

	try
	{
		if (b == 0)
			throw string("Your input is not valid, you can't divide by zero.");

		c = a / b;
		cout << c << endl;
	}
	catch (string exeption)
	{
		cout << exeption << endl;
	}
	system("pause");
	return 0;
}

