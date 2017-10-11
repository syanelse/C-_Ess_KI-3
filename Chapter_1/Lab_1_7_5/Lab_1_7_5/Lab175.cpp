// Lab175.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int o1, o2, o3, o4;
	string error = "The number must be in the range from 1 to 255";

	cout << "Input first octet:";
	cin >> o1;
	if (o1 < 0 || o1 > 255)
	{
		cout << error;
		return 0;
	}

	cout << "Input second octet:";
	cin >> o2;
	if (o2 < 0 || o2 > 255)
	{
		cout << error;
		return 0;
	}

	cout << "Input third octet:";
	cin >> o3;
	if (o3 < 0 || o3 > 255)
	{
		cout << error;
		return 0;
	}

	cout << "Input fourth octet:";
	cin >> o4;
	if (o4 < 0 || o4 > 255) 
	{ 
		cout << error; 
		return 0; 
	}
	cout << "IP: " << o1 << "." << o2 << "." << o3 << "." << o4 << endl;
	return 0;
}