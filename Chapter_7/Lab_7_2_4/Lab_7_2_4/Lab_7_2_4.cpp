// Lab_7_2_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"
using namespace std;


class Exception
{
public:
	string message;
	Exception() { message = "Your input is not valid. The area can't be negative.\n"; }
	Exception(string message) { this->message = message; }
};



float squareArea(float a)
{
	if (a <= 0) throw Exception();
	return a * a;
}

float rectangleArea(float a, float b)
{
	if (a <= 0 || b <= 0) throw Exception();
	return a * b;
}

int main(void)
{
	float a, b, r;
	cin >> a;
	cin >> b;
	try
	{
		float rsquare = squareArea(a);
		float rrectangle = rectangleArea(a, b);
		cout << rsquare << endl << rrectangle << endl;
	}
	catch (Exception exp)
	{
		cout << exp.message << endl;
	}

	system("pause");
	return 0;
}
