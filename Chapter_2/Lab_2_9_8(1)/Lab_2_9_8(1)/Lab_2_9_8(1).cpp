// Lab_2_9_8(1).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main(void)
{
	int vector1[7] = { 4, 7, 2, 8, 1, 3, 0 };
	int size = size = sizeof(vector1) / sizeof(vector1[0]);
	int vector2[7];
	for (int i = 0; i < size; i++)
	{
		if (i == size - 1)
		{
			vector2[0] = vector1[i];
		}
		else
		{
			vector2[i + 1] = vector1[i];
		}
	}
	for (int i = 0; i < size; i++)
		cout << vector2[i] << ' ';
	cout << endl;
	return 0;
}

