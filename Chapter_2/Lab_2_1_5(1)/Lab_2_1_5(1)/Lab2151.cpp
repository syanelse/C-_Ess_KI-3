// Lab2151.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main(void) {
	int year;
	cout << "Enter a year: ";
	cin >> year;
	if (year >= 1582) {
		if (year % 4 != 0) 
		{
			cout << "Common year";
		}
		else
		{
			if (year % 4 == 0 && year % 100 != 0)
			{
				cout << "Leap year";
			}
			else
			{
				if (year % 400 == 0)
				{
					cout << "Leap year";
				}
				else cout << "Common year";
			}
		}
	}
	else 
	{
		cout << "The year must be greater than 1582";
	}
	return 0;
}

