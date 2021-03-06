// Lab_4_5_7(6).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

string ToUpper(string str)
{
	for (auto& c : str)
	{
		c = toupper(c);
	}
	return str;

}

string ToSpacy(string str)
{
	string newString = " ";
	for (int i = 0; i < str.length(); i += 2)
	{
		str.insert(i + 1, 1, ' ');
	}
	return (newString + str);
}

string MakeGood(string str)
{
	int j = 0;
	string answ = "";
	for (int i = 0; i < str.length(); i++)
	{
		j = 0;
		if (str[i] == '_')
		{
			if (str.substr(i + 1).find("_") < str.substr(i + 1).find("*"))
			{
				j = str.substr(i + 1).find("_") + i;
				answ += ToSpacy(str.substr(i + 1, j - i));
				i = j + 1;
			}
		}
		else if (str[i] == '*')
		{
			if (str.substr(i + 1).find("*") < str.substr(i + 1).find("_"))
			{
				j = str.substr(i + 1).find("*") + i;
				answ += ToUpper(str.substr(i + 1, j - i));
				i = j + 1;
			}
		}
		else answ += str[i];
	}
	return answ;
}
int main()
{
	string sentence;
	getline(cin, sentence);
	cout << MakeGood(sentence) << endl;
}