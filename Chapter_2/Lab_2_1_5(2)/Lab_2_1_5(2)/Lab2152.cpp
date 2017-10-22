// Lab2152.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main(void) {
	float grossprice, taxrate, netprice, taxvalue;
	cout << "Enter a gross price: ";
	cin >> grossprice;
	cout << "Enter a tax rate: ";
	cin >> taxrate;
	if (grossprice <= 0 || taxrate <= 0 || taxrate >= 100) 
	{
		cout << "The value of gross price or tax rate is invalid.";
		return 0;
	}
	netprice = grossprice / ((taxrate + 100) / 100);
	taxvalue = grossprice - netprice;
	cout << "Net price: " << netprice << endl;
	cout << "Tax value: " << taxvalue << endl;
	return 0;
}

