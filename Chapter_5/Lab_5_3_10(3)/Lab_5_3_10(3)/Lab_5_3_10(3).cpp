// Lab_5_3_10(3).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
class FlightBooking
{
public:
	FlightBooking(int id, int capacity, int reserved);
	FlightBooking();
	void printStatus();
	void deleteFlight() { id = 0; };
	bool reserveSeats(int numberOfSeats);
	bool cancelReservation(int numberOfSeats);
	int getId() { return id; }
private:
	int id;
	int capacity;
	int reserved;
};
FlightBooking::FlightBooking()
{
	id = 0; capacity = 0; reserved = 0;
}
void FlightBooking::printStatus()
{
	std::cout << "Flight " << id << ": " << reserved << " / " << capacity << " ( " << std::setprecision(0) << std::fixed << ((double)reserved / (double)capacity * 100.0) << " % ) seats taken" << std::endl;
}

FlightBooking::FlightBooking(int id, int capacity, int reserved)
{
	this->id = id;
	this->capacity = capacity;
	if (reserved < 0) { reserved = 0; }
	if (((double)reserved / (double)capacity) > 1.05)
	{
		reserved = capacity * 1.05;
	}
	this->reserved = reserved;
}
bool FlightBooking::reserveSeats(int numberOfSeats)
{
	if ((((double)reserved + (double)numberOfSeats) / (double)capacity) > 1.05)
	{
		return false;
	}
	else
	{
		reserved += numberOfSeats;
		return true;
	}
}
bool FlightBooking::cancelReservation(int numberOfSeats)
{
	if (numberOfSeats < 0) { return false; }
	if ((reserved - numberOfSeats) > 0)
	{
		reserved -= numberOfSeats;
		return true;
	}
	return false;
}

int main()
{
	FlightBooking booking[10];
	bool flag = true;
	std::string command = "";
	while (command != "quit")
	{
		flag = true;
		for each (FlightBooking var in booking)
		{
			if (var.getId() != 0)
			{
				flag = false;
				var.printStatus();
			}
		}
		if (flag)
		{
			std::cout << "No flights in the system\n";
		}

		std::cout << "What would you like to do?: ";
		std::getline(std::cin, command);
		int i = command.find(" ");
		if (command.substr(0, i) == "create")
		{
			int k = command.substr(i + 1).find(" ");
			int j = std::stoi(command.substr(i + 1, k));
			int l = std::stoi(command.substr(i + 1).substr(k + 1));
			if (j != 0)
			{
				int a = 0;
				for (; a < 10; a++)
				{
					if (booking[a].getId() == 0) { break; }
				}
				booking[a] = FlightBooking(j, l, 0);
			}
			else
			{
				std::cout << "Cannot perform this operation : ID can't be 0!\n";
			}
		}

		if (command.substr(0, i) == "delete")
		{

			bool f = false;
			int j = std::stoi(command.substr(i + 1));
			int a = 0;

			for (; a < 10; a++)
			{
				if (booking[a].getId() == j) { f = true; break; }
			}
			if (f)
			{
				booking[a].deleteFlight();
			}
			else
			{
				std::cout << "Cannot perform this operation : ID not found\n";
			}
		}

		if (command.substr(0, i) == "add")
		{
			int k = command.substr(i + 1).find(" ");
			int j = std::stoi(command.substr(i + 1, k));
			int l = std::stoi(command.substr(i + 1).substr(k + 1));
			bool f = false;
			int a = 0;

			for (; a < 10; a++)
			{
				if (booking[a].getId() == j) { f = true; break; }
			}
			if (f)
			{
				bool flag = booking[a].reserveSeats(l);
				if (flag) {}
				else
				{
					std::cout << "Cannot perform this operation : overbooking\n";
				}
			}
			else
			{
				std::cout << "Cannot perform this operation : ID not found\n";
			}

		}

		if (command.substr(0, i) == "cancel")
		{

			int k = command.substr(i + 1).find(" ");
			int j = std::stoi(command.substr(i + 1, k));
			int l = std::stoi(command.substr(i + 1).substr(k + 1));
			bool f = false;
			int a = 0;

			for (; a < 10; a++)
			{
				if (booking[a].getId() == j) { f = true; break; }
			}
			if (f)
			{
				bool flag = booking[a].cancelReservation(l);
				if (flag) {}
				else
				{
					std::cout << "Cannot perform this operation\n";
				}
			}
			else
			{
				std::cout << "Cannot perform this operation : ID not found\n";
			}


		}
	}
	return 0;
}