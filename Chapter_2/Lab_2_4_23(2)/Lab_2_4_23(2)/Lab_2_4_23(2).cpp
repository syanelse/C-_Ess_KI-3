// Lab_2_4_23(2).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main(void)
{
	unsigned short int val, mask1 = 256, mask2 = 128, aux1 = 0, aux2 = 0;
	bool ispalindrome = true;
	cout << "Value = ";
	cin >> val;
	for (int i = 0; i<7; i++)
	{
		if ((val & mask1) != 0)
			aux1 = 1;
		if ((val & mask2) != 0)
			aux2 = 1;
		if (aux1 != aux2)
			ispalindrome = false;
		mask1 = mask1 << 1;
		mask2 = mask2 >> 1;
		aux1 = 0;
		aux2 = 0;
	}
	if (ispalindrome)
		cout << val << " is a bitwise palindrome" << endl;
	else
		cout << val << " is not a bitwise palindrome" << endl;
	return 0;
}

