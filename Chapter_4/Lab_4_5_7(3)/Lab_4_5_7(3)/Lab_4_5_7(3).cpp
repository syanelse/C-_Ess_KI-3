// Lab_4_5_7(3).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

string findStop(string str, string stop)
{
	string foo = "";
	int a = 0, b = 0, c, d;
	while ((str.substr(a)).find(" ") != string::npos)
	{
		b = (str.substr(a)).find(" ");
		foo = str.substr(a, b);

		for (auto& c : foo)
		{
			c = tolower(c);
		}

		if (foo == stop)
		{
			str.erase(a, b + 1);
			a = 0;
			b = 0;
		}
		else
		{
			a += b + 1;
			b = 0;
		}
	}
	return str;
}

int main()
{
	string stopWords;
	getline(std::cin, stopWords);
	string sentence;
	getline(std::cin, sentence);
	int a = 0, b = 0;
	do
	{
		b = (stopWords.substr(a)).find(",");
		sentence = findStop(sentence, stopWords.substr(a, b));
		a += b + 1;
		b = 0;

	} while ((stopWords.substr(a)).find(",") != string::npos);
	sentence = findStop(sentence, stopWords.substr(a));

	cout << sentence << "\n";
}