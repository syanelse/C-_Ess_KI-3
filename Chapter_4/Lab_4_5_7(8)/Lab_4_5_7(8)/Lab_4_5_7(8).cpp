// Lab_4_5_7(8).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

string Find(string str1, string str2, string str3)
{
	int i = 0, j = 0, k = 0;
	while (str1.find("[" + str2 + "]") != string::npos)
	{
		i = str1.find("[" + str2 + "]");
		str1.replace(i, str2.length() + 2, str3);
	}
	return str1;

}

string Replace(string str, string temp)
{
	int i = 0, j = 0, k = 0;
	while (str.length() != 0)
	{
		if (str.find(",") == string::npos)
		{
			i = str.length();
		}
		else
		{
			i = str.find(",");
		}
		j = str.substr(0, i).find("=");
		temp = Find(temp, str.substr(0, j), str.substr(j + 1, i - j - 1));
		str.erase(0, i + 1);
	}
	return temp;
}
int main()
{
	string values;
	std::getline(cin, values);
	string templ;
	getline(cin, templ);
	templ = Replace(values, templ);
	cout << templ << "\n";
}