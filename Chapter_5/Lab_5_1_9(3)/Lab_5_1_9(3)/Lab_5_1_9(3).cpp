// Lab_5_1_9(3).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class AdHocSquare
{
	public:
		AdHocSquare(double side);
		void setSide(double side);
		double getArea();
	private:
		double side;
};

void AdHocSquare::setSide(double side)
{
	this->side = side;
}

double AdHocSquare::getArea()
{
	return (this->side * this->side);
}

class LazySquare
{
	public:
		LazySquare(double side);
		void setSide(double side);
		double getArea();
	private:
		double side;
		double area;
		bool side_changed;
};

void LazySquare::setSide(double side)
{
	this->side = side;
	this->side_changed = true;
}

double LazySquare::getArea()
{
	if (side_changed)
	{
		this->area = side*side;
		side_changed = false;
	}
	return area;
}

AdHocSquare::AdHocSquare(double side)
{
	this->side = side;
}

LazySquare::LazySquare(double side)
{
	this->side = side;
	this->side_changed = true;
}

int main()
{
	AdHocSquare ahs(5);
	LazySquare ls(5);
	cout << ahs.getArea() << endl;
	ls.setSide(4);
	cout << ls.getArea() << endl;

	return 0;
}