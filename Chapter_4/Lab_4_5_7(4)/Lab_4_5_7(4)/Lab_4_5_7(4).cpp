// Lab_4_5_7(4).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"
using namespace std;

bool isAnagram(string str1, string str2)
{
	for (auto& c : str1)
	{
		c = tolower(c);
	}
	for (auto& c : str2)
	{
		c = tolower(c);
	}

	for (auto c : str1)
	{
		if (str2.find(c) == string::npos)
		{
			return false;
		}
	}

	for (auto c : str2)
	{
		if (str1.find(c) == string::npos)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	string str1, str2;
	cout << "Type 2 words, separated by whitespace : \n";
	cin >> str1;
	cin >> str2;
	if (isAnagram(str1, str2)) { cout << "Anagrams\n"; }
	else { cout << "Not anagrams\n"; }

	return 0;
}