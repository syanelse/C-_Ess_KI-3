// Lab_4_5_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <sstream>
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

string isIp(string str)
{
	int i;
	for each (char c in str)
	{
		if (!isdigit(c))
			return  "Only digits and dots are allowed";
	}
	if (str.length() > 3)
		return "Too many characters in an octet";
	istringstream(str) >> i;
	if (i > 255)
		return "A value of an octet is too big";

	return "Correct IP";

}

int main()
{
	string inputtedIP;
	cout << "Type string: \n";
	getline(cin, inputtedIP);
	int j, l = 0;
	string output;
	for (int i = 0; i < 4; i++)
	{
		j = inputtedIP.find(".");
		if (i == 3)
		{
			output = isIp(inputtedIP.substr(l));
			break;
		}
		output = isIp(inputtedIP.substr(l, j - l));
		if (output != "The IP is correct ")
		{
			break;
		}
		inputtedIP.replace(j, 1, ",");
		l = j + 1;
	}

	cout << output << endl;
	return 0;
}