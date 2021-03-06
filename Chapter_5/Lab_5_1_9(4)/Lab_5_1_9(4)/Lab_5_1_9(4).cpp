// Lab_5_1_9(4).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;


class ShopItemOrder
{
	private:
		string name;
		double price;
		int amount;
	public:
		ShopItemOrder(string name, double price, int amount);
		
		void setName(string name);
		void setPrice(double price);
		void setAmount(int amount);
		string getName();
		double getPrice();
		int getAmount();
		double getTotalPrice();
		void print();

};

ShopItemOrder::ShopItemOrder(string name, double price, int amount)
{
	this->name = name;
	this->price = price;
	this->amount = amount;
}

void ShopItemOrder::setName(string name)
{
	if (name != "")
	{
		this->name = name;
	}
}

void ShopItemOrder::setPrice(double price)
{
	if (price >= 0)
	{
		this->price = price;
	}
}

void ShopItemOrder::setAmount(int amount)
{
	if (amount >= 0)
	{
		this->amount = amount;
	}
}

string ShopItemOrder::getName()
{
	return name;
}

double ShopItemOrder::getPrice()
{
	return price;
}

int ShopItemOrder::getAmount()
{
	return amount;
}

double ShopItemOrder::getTotalPrice()
{
	return (price*amount);
}


void ShopItemOrder::print()
{
	cout << "Item name: " << name << "\nItem unit price: " << price << "\nNumber of items ordered: " << amount << "\nTotal price: " << getTotalPrice() << endl;
}

int main()
{
	ShopItemOrder order("Cheese", 1.99, 5);
	order.setName("Milk product");
	order.print();
	return 0;
}