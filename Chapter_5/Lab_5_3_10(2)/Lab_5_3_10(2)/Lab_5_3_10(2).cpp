// Lab_5_3_10(2).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
class FlightBooking
{
	public:
		FlightBooking(int id, int capacity, int reserved);
		void printStatus();
		bool reserveSeats(int numberOfSeats);
		bool canceReservation(int numberOfSeats);
	private:
		int id;
		int capacity;
		int reserved;
};

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
bool FlightBooking::canceReservation(int numberOfSeats)
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
	int reserved = 0,
		capacity = 0;
	std::cout << "Provide flight capacity: ";
	std::cin >> capacity;
	std::cout << "Provide number of reserved seats: ";
	std::cin >> reserved;
	FlightBooking booking(1, capacity, reserved);
	std::string command = "";
	while (command != "quit")
	{
		booking.printStatus();
		std::cout << "What would you like to do?: ";
		std::getline(std::cin, command);
		int i = command.find(" ");
		if (command.substr(0, i) == "add")
		{
			int j = std::stoi(command.substr(i + 1));
			bool ok = booking.reserveSeats(j);
			if (ok) { booking.printStatus(); }
			else
			{
				std::cout << "Cannot perform this operation\n";
			}
		}

		if (command.substr(0, i) == "cancel")
		{
			int j = std::stoi(command.substr(i + 1));
			bool ok = booking.canceReservation(j);
			if (ok) { booking.printStatus(); }
			else
			{
				std::cout << "Cannot perform this operation\n";
			}
		}
	}
	return 0;
}