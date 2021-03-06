// Lab_4_4_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int* isPangram(string str)
{
	int * alphabet;
	alphabet = new int[27];

	for (int i = 0; i < 27; i++)
	{
		alphabet[i] = 0;
	}

	int index = -1;

	for (int i = 0; i< str.length(); i++)
	{
		index = -1;
		if ('A' <= str[i] && str[i] <= 'Z')
			index = str[i] - 'A';
		else if ('a' <= str[i] && str[i] <= 'z')
			index = str[i] - 'a';

		if (index != -1)
			alphabet[index]++;
	}

	for (int i = 0; i <= 25; i++)
	{
		if (alphabet[i] == 0)
			alphabet[26] = -1;
	}

	return alphabet;
}

int main()
{
	string str;
	int *arr;
	cout << "Type string: \n";
	getline(cin, str);
	arr = isPangram(str);


	if (arr[26] != -1) cout << "Pangram\n";
	else cout << "Not pangram\n";
	char a = 'a';
	for (int i = 0; i < 26; i++)
	{
		cout << a << " - " << arr[i] << endl;
		a++;
	}

	return 0;
}
