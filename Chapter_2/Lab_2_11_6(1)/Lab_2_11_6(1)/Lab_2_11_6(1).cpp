// Lab_2_11_6(1).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	struct TIME
	{
		int hour;
		int minute;
	};
	TIME time;
	int duration = 0;
	while (true)
	{
		cout << "Input hours: ";
		cin >> time.hour;
		cout << "Input minutes: ";
		cin >> time.minute;
		if (time.hour<24 && time.hour>-1 && time.minute > -1 && time.minute < 60) break;
		else cout << "Invalid data\n";
	}
	while (duration <= 0)
	{
		cout << "Duration (in mins): ";
		cin >> duration;
	}

	time.minute += duration;
	while (time.minute >= 60)
	{
		time.hour++;
		time.minute -= 60;
	}
	while (time.hour >= 24)
	{
		time.hour -= 24;
	}
	cout << "Time: " << time.hour << ":" << time.minute << endl;
	return 0;
}

