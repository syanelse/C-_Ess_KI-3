// Lab_4_5_7(1).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;
int main()
{
	string sentence;
	getline(cin, sentence);
	int a = 0, b = 0, c, d;
	while ((sentence.substr(a)).find(" ") != string::npos)
	{
		b = (sentence.substr(a)).find(" ");
		if (((sentence.substr(a)).substr(b + 1)).find(" ") != string::npos)
		{
			c = ((sentence.substr(a)).substr(b + 1)).find(" ");
		}
		else { c = ((sentence.substr(a)).substr(b + 1)).length(); }
		if (sentence.substr(a, b) == ((sentence.substr(a)).substr(b + 1)).substr(0, c))
		{
			sentence.erase(a, b + 1);
			a = 0;
			c = 0;
			b = 0;
		}
		else
		{
			a += b + 1;
			c = 0;
			b = 0;
		}
	}
	cout << sentence << "\n";
}