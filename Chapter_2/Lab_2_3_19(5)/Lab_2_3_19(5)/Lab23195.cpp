// Lab23195.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main(void)
{
	int n;
	do
	{
		cout << "Side size (2 to 20): ";
		cin >> n;
		if (n <= 1)
		{
			cout << "Size must be 2 or greater." << endl;
			n = 0;
		}
		else if (n > 20)
		{
			cout << "Too big side size :(" <<endl;
			n = 0;
		}
	} while (n == 0);

	n -= 2;
	cout << '+';
	for (int i = 0; i < n; i++)
		cout << '-';
	cout << '+' << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << '|';
		for (int j = 0; j < n; j++)
			cout << ' ';
		cout << '|' << endl;
	}
	cout << '+';
	for (int i = 0; i < n; i++)
		cout << '-';
	cout << '+' << endl;
	return 0;
}
