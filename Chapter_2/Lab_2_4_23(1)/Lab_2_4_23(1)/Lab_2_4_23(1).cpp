// Lab_2_4_23(1).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	unsigned long long n;
	int amount = 0;
	cout << "Number: ";
	cin >> n;
	if (n & 1) amount++;
	for (int i = 0; i < 63; i++)
	{
		n >>= 1;
		if (n & 1) amount++;
	}
	cout << amount << endl;
	return 0;
}

