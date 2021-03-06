// Lab_5_1_9(2).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;
class Square
{
	public:
		Square(double side);
	private:
		double side;
		double area;
	public:
		void setSide(double s)
		{
			if (s > 0)
			{
				side = s;
				area = s*s;
			}
		}

		void print()
		{
			cout << "Square: side=" << side << " area=" << area << endl;
		}

};
Square::Square(double side)
{
	this->side = side;
	this->area = side * side;
}

int main()
{
	Square s(4);
	s.print();
	s.setSide(2.0);
	s.print();
	s.setSide(-33.0);
	s.print();
	return 0;
}