// Lab_5_3_10(7).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Fraction
{
public:
	Fraction(int numerator, int denominator);
	string toString();
	double toDouble();
	Fraction plus(Fraction that);
	Fraction minus(Fraction that);
	Fraction times(Fraction that);
	Fraction by(Fraction that);
	bool isGreaterThan(Fraction that);
	bool isLessThan(Fraction that);
	bool isEqual(Fraction that);

private:
	int numerator;
	int denominator;
	void reduce();
	int gcd(int a, int b);

};

bool Fraction::isGreaterThan(Fraction that)
{
	if (this->numerator*that.denominator > that.numerator*this->denominator)
	{
		return true;
	}
	return false;
}

bool Fraction::isLessThan(Fraction that)
{
	if (this->numerator*that.denominator < that.numerator*this->denominator)
	{
		return true;
	}
	return false;
}

bool Fraction::isEqual(Fraction that)
{
	if (this->numerator*that.denominator == that.numerator*this->denominator)
	{
		return true;
	}
	return false;
}

int Fraction::gcd(int a, int b)
{
	return b ? gcd(b, a % b) : a;
}

void Fraction::reduce()
{
	int a;
	a = gcd(numerator, denominator);
	this->numerator /= a;
	this->denominator /= a;
}

Fraction Fraction::plus(Fraction that)
{
	int num = this->numerator * that.denominator + that.numerator * this->denominator;
	int den = this->denominator * that.denominator;
	Fraction result(num, den);
	result.reduce();
	return result;
}

Fraction Fraction::minus(Fraction that)
{
	int num = this->numerator * that.denominator - that.numerator * this->denominator;
	int den = this->denominator * that.denominator;
	Fraction result(num, den);
	result.reduce();
	return result;
}

Fraction Fraction::times(Fraction that)
{
	int num = this->numerator * that.numerator;
	int den = this->denominator * that.denominator;
	Fraction result(num, den);
	result.reduce();
	return result;
}

Fraction Fraction::by(Fraction that)
{
	int num = this->numerator * that.denominator;
	int den = this->denominator * that.numerator;
	Fraction result(num, den);
	result.reduce();
	return result;
}

Fraction::Fraction(int numerator, int denominator)
{
	this->numerator = numerator;
	this->denominator = denominator;
}

string Fraction::toString()
{
	string answer = "";
	bool negativ = false;
	int a = this->numerator, b = this->denominator, c = 0;
	if (this->numerator < 0)
	{
		negativ = true;
		a *= -1;
	}
	if (this->denominator < 0)
	{
		if (negativ) { negativ = false; }
		else { negativ = true; }
		b *= -1;
	}

	if (negativ)
	{
		answer = "-";
	}


	if (a >= b)
	{
		c = a / b;
		answer += to_string(c);
		if ((a - c*b) == 0)
		{
			return answer;
		}
		answer += " ";
		answer += to_string(a - c*b);
		answer += "/";
		answer += to_string(b);
		return answer;
	}

	if (negativ)
	{
		answer += "1 ";
	}
	answer += to_string(a);
	answer += "/";
	answer += to_string(b);
	return answer;

}

double Fraction::toDouble()
{
	return ((double)numerator / (double)denominator);
}
int main(void)
{
	int num, den;
	std::string input = "";
	cout << "Fraction 1: ";
	getline(cin, input);
	int i = input.find("/");
	num = stoi(input.substr(0, i));
	den = stoi(input.substr(i + 1));
	if (den == 0)
	{
		cout << "Error\n";
		return 1;
	}
	Fraction fraction1(num, den);
	cout << "Fraction 2: ";
	getline(cin, input);
	i = input.find("/");
	num = stoi(input.substr(0, i));
	den = stoi(input.substr(i + 1));
	if (den == 0)
	{
		cout << "Error\n";
		return 1;
	}
	Fraction fraction2(num, den);
	if (fraction1.isGreaterThan(fraction2))
	{
		cout << fraction1.toString() << " > " << fraction2.toString() << endl;
	}
	if (fraction1.isLessThan(fraction2))
	{
		cout << fraction1.toString() << " < " << fraction2.toString() << endl;
	}
	if (fraction1.isEqual(fraction2))
	{
		cout << fraction1.toString() << " = " << fraction2.toString() << endl;
	}
	return 0;
}