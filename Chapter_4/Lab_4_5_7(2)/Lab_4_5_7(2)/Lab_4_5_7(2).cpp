// Lab_4_5_7(2).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
	string from;
	getline(std::cin, from);
	string to;
	getline(std::cin, to);
	string sentence;
	getline(std::cin, sentence);
	sentence.replace(sentence.find(from), from.length(), to);
	cout << sentence << "\n";
}