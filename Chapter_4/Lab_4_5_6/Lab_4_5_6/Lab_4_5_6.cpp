// Lab_4_5_6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;
int main()
{
	string sentence;
	getline(cin, sentence);
	for (int i = 0; i < sentence.length(); i++)
	{
		if (sentence.substr(i, 1) == " " && sentence.substr(i + 1, 1) == " ")
		{
			sentence.erase(i, 1);
			i--;
		}
	}
	cout << sentence << "\n";
}
