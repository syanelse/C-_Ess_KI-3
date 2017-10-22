// Lab2153.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int main(void)
{
	int sys;
	float m, ft, in;
	cout << "Input 0 for metric or 1 for imperial: ";
	cin >> sys;
	if (sys == 1)
	{
		cout << "Foot: ";
		cin >> ft;
		if (ft - (int)ft != 0)
		{
			cout << "Foots must be int!";
			return 0;
		}
		cout << "Inches: ";
		cin >> in;
		m = ft * 0.3048;
		m += in * 0.0254;
		cout << m << " m" << endl;
	}
	else if (sys == 0)
	{
		cout << "Meters: ";
		cin >> m;
		ft = (int)(m / 0.3048);
		m = m - ft * 0.3048;
		in = m / 0.0254;
		cout << ft << "'" << in << "\"" << endl;
	}
	else
	{
		cout << "Only 0 and 1 are valid values.";
	}
	return 0;
}

